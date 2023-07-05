#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "mbed.h"
#include "N5110.h"
#include "Fighter.h"
#include "Enemy.h"

class GameEngine {
    public:
        GameEngine();
        // function to initialize game
        void init();
        void start(N5110 &lcd, DigitalIn &buttonA, DigitalIn &buttonB, DigitalIn &buttonC, DigitalIn &buttonD, AnalogIn  &joy_v, AnalogIn  &joy_h);
        void enemy_AI(N5110 &lcd);
        void game_over(N5110 &lcd);     // to be updated: if enemy wins, print game over. if fighter wins, finish him
        void draw_health_bars(N5110 &lcd);
        void set_fighter_health(int fighter_health);
        void set_enemy_health(int enemy_health);
        void reduce_f_health(int fighter_health); // function to reduce fighter health when hit
        void reduce_e_health(int enemy_health); // function to reduce enemy health when hit
        int get_fighter_health(); 
        int get_enemy_health();
        int check_game_over(N5110 &lcd); // if game over, execute game over function
        
    private:
        int check_collision(N5110 &lcd, DigitalIn &buttonA, DigitalIn &buttonB, DigitalIn &buttonC);
        int _fighter_health;
        int _enemy_health;
        Fighter _fighter;
        Enemy _enemy;
};

#endif