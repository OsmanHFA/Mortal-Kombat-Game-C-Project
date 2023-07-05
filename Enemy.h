#ifndef ENEMY_H
#define ENEMY_H

#include "mbed.h"
#include "N5110.h"

class Enemy
{
public:
     Enemy();  // constructor
     int get_x();        // get x co-ordinate
     int get_y();        // get y co-ordinate
     void init();   
     void set_x(int x);  // set x co-ordinate
     void set_y(int y);  // set y co-ordinate
     void add_x(int x);  // add to the x co-ordinate
     void add_y(int y);  // add to the y co-ordinate

     void draw(N5110 &lcd, int input);
     void move_right(N5110 &lcd); // print move right animation
     void move_left(N5110 &lcd); // print move left animation
     void kick_right(N5110 &lcd); // enemy kick right
     void kick_left(N5110 &lcd); // enemy kick left
     void sword_left(N5110 &lcd); // enemy punch left
     void sword_right(N5110 &lcd); // enemy punch right
     void twoway_punch(N5110 &lcd);
     int randomize_moves(N5110 &lcd, int input);
     void move_around(N5110 &lcd);

private:
    int _x, _y;    // co-ordinates of the enemy
};

#endif