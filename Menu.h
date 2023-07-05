#ifndef MENU_H
#define MENU_H
#include "mbed.h"
#include "N5110.h"
#include "Fighter.h"

class Menu
{
public:
    Menu();  // constructor 
    void menu_render(N5110 &lcd);    
    void draw_logo(N5110 &lcd, int x, int y); // draw logo on x y coordinates
    void draw_uni_logo(N5110 &lcd);
    void main_menu(N5110 &lcd);
    void created_by(N5110 &lcd);
    
    void tutorial_screen1(N5110 &lcd);
    void tutorial_screen2(N5110 &lcd);
    void tutorial_screen3(N5110 &lcd);
    void tutorial_screen4(N5110 &lcd);
    void tutorial_screen5(N5110 &lcd);
    void tutorial_screen6(N5110 &lcd);
    void tutorial_screen7(N5110 &lcd);
    void tutorial_screen8(N5110 &lcd);
    void tutorial_screen9(N5110 &lcd);
    
private:
    Fighter _fighter; // we have fighter object here for tutorial purposes

};

#endif 