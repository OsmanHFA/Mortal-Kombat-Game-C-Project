///////////// includes /////////////////////
#include "mbed.h"
#include "N5110.h"
#include "Fighter.h"
#include "Joystick.h"
#include "Menu.h"
#include "Enemy.h"
#include "GameEngine.h"
///////////// objects /////////////////////
GameEngine game;
Menu menu;
DigitalIn buttonA(p29);
DigitalIn buttonB(p28);
DigitalIn buttonC(p27);
DigitalIn buttonD(p26);
AnalogIn  joy_v(p20);
AnalogIn  joy_h(p19);
N5110 lcd(p14,p8,p9,p10,p11,p13,p21);
//////////// functions ////////////////////
void init();
void menu_screen();
void draw_background();


int main() {
    init();
    menu_screen();
    while(1) {
        lcd.clear();
        draw_background();
        game.start(lcd, buttonA, buttonB, buttonC, buttonD, joy_v, joy_h);
        lcd.refresh();
        wait(0.2);
    }
    
}

void init() { // initialize all devices
    lcd.init();
    lcd.setContrast(0.5);
    game.init();
}

void menu_screen() {
    menu.menu_render(lcd);
}

void draw_background() {
        // lcd.drawLine(x1, y1, x2, y2, type);
        lcd.drawLine(0,46,82,46,1);   // draws ground platform
        lcd.drawLine(0,46,0,25,1);   // draws first side wall
        lcd.drawLine(82,46,82,25,1);   // draws second side wall
        lcd.refresh();
}
    

