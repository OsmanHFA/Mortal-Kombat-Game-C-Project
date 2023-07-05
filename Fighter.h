#ifndef FIGHTER_H
#define FIGHTER_H

#include "mbed.h"
#include "N5110.h"


class Fighter
{
public:
    Fighter();  // constructor
    
    int get_x();    // get x co-ordinate
    int get_y();    // get y co-ordinate
    void init();
    void set_x(int x);  // set x co-ordinate
    void set_y(int y);  // set y co-ordinate
    void add_x(int x);  // add to the x co-ordinate
    void add_y(int y);  // add to the y co-ordinate

    void draw(N5110 &lcd);  // x-coordinate and y-coordinates used to update place of sprite on screen
    void move_fighter(N5110 &lcd, DigitalIn &buttonA, DigitalIn &buttonB, DigitalIn &buttonC, DigitalIn &buttonD, AnalogIn  &joy_v, AnalogIn  &joy_h);
    void move_right(N5110 &lcd); // print move right animation
    void move_left(N5110 &lcd); // print move left animation
    int kick_right(N5110 &lcd); // kick right
    int kick_left(N5110 &lcd); // kick left
    int punch_left(N5110 &lcd); // punch left
    int punch_right(N5110 &lcd); // punch right
    void guard(N5110 &lcd); // guard move

private:
    int _x, _y;    // co-ordinates of the fighter

};

#endif