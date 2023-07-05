#include "GameEngine.h"

GameEngine::GameEngine() {}

void GameEngine::init(){
    _enemy.init();
    _fighter.init();
    set_fighter_health(40);
    set_enemy_health(40);
}

int GameEngine::get_fighter_health() {
    return _fighter_health;
}

int GameEngine::get_enemy_health() {
    return _enemy_health;
}

void GameEngine::set_fighter_health(int fighter_health) {
    _fighter_health = fighter_health;
}

void GameEngine::set_enemy_health(int enemy_health) {
    _enemy_health = enemy_health;
}

void GameEngine::reduce_f_health(int fighter_health) {
    _fighter_health -= fighter_health;
}

void GameEngine::reduce_e_health(int enemy_health) {
    _enemy_health -= enemy_health;
}

void GameEngine::draw_health_bars(N5110 &lcd) {
    int F = get_fighter_health();
    int E = get_enemy_health();
    
    if (F < 0) {       // if fighter loses
        F = 0;          // F = 0 to avoid fighter health bar front-tracking into the enemy bar
        game_over(lcd);    // game over!
    }
    else if(E < 0) {       // if enemy loses
        E = 0;              // E = 0 to avoid enemy health bar back-tracking into fighter health bat
        game_over(lcd);
    }
    lcd.printString("You", 0,1);
    lcd.printString("Enemy", 55,1); // Kotal Khan is too long to be right-aligned so we have to write Enemy! :(
    lcd.drawRect(0,0,F, 5, FILL_BLACK);
    lcd.drawRect(0,0,40, 5, FILL_TRANSPARENT);
    // ------------------------------------------------
    lcd.drawRect(44,0, E, 5, FILL_BLACK);
    lcd.drawRect(44,0,40, 5, FILL_TRANSPARENT);
}

void GameEngine::start(N5110 &lcd, DigitalIn &buttonA, DigitalIn &buttonB, DigitalIn &buttonC, DigitalIn &buttonD, AnalogIn  &joy_v, AnalogIn  &joy_h) {
    // function that draws fighter and allows user to control it 
    _fighter.move_fighter(lcd, buttonA, buttonB, buttonC, buttonD, joy_v, joy_h);
    // initializing and drawing enemy AI agent
    enemy_AI(lcd);
    draw_health_bars(lcd);
    int fighter_health = get_fighter_health();
    int enemy_health = get_enemy_health();
    int collision = check_collision(lcd, buttonA, buttonB, buttonC);
    if (collision == 0) {   // fighter hit
        reduce_f_health(1); // reduce fighter health
        printf("fighter health = %i\n", fighter_health);
    }
    else if (collision == 1) {  // enemy hit
        reduce_e_health(1);     // reduce enemy health
        printf("enemy health = %i\n", enemy_health);
    }
    lcd.refresh();
}

void GameEngine::enemy_AI(N5110 &lcd) {
    int fighter_pos = _fighter.get_x();
    //printf("f pos = %i \n", fighter_pos);
    int enemy_pos = _enemy.get_x();
    //printf("e pos = %i \n", enemy_pos);
    int input = 0;
    int diff = fighter_pos - enemy_pos;
    // printf("diff = %i \n", diff);
    // if difference is positive, fighter is to the right so enemy must look right (if input is 1, enemy looks right) and vice versa
    if (diff > 0) {
        input = 1;
        }
    else {input = 0;}
    if (diff >= -10 && diff <= 10){ // randomize enemy fight moves only in fighting range
        _enemy.draw(lcd, input);
        _enemy.randomize_moves(lcd, input);
        }
    // code for enemy to move to fighter if he is to the right 
    else if ((enemy_pos < fighter_pos) && (diff > 10) && (rand()%2 > 0)) {
        _enemy.add_x(5);
        _enemy.move_right(lcd);
    }
    // code for enemy to move to fighter if he is to the left 
    else if ((enemy_pos > fighter_pos) && (diff < 10) && (rand()%2 > 0)) {
        _enemy.add_x(-5);
        _enemy.move_left(lcd);
    }
    else {
        _enemy.draw(lcd, input);
    }
}

int GameEngine::check_collision(N5110 &lcd, DigitalIn &buttonA, DigitalIn &buttonB, DigitalIn &buttonC) {
    int fighter_pos = _fighter.get_x();
    int enemy_pos = _enemy.get_x();
    int diff = fighter_pos - enemy_pos;
    int input;
    int collision;
    if (diff > 0) {
        input = 1;
        }
    else {input = 0;}
    int fighter_y = _fighter.get_y(); // getting fighter y pos to avoid enemy hitting fighter while fighter is above him 
    // code to check enemy collision
    //     check in fight range             check enemy fight move        check fighter is not guarding     check fighter is on gound
    if ((diff >= -10 && diff <= 10) && (_enemy.randomize_moves(lcd, input) == 1) && (buttonC.read() != 1) && (fighter_y == 34)) {
        printf("enemy collision detected!\n");
        collision = 0;
    }
    // code to check fight collision
    //      check in fight range        check if kick or fight move is performed 
    if ((diff >= -10 && diff <= 10) && ((buttonA.read() || buttonB.read()) == 1)) {
        printf("fighter collision detected!\n");
        collision = 1;
    }
    // printf("collision is %i\n", collision);
    return collision;
}


void GameEngine::game_over(N5110 &lcd) {
    lcd.clear();
    lcd.printString("Game Over!", 16,2);
    lcd.refresh();
}

