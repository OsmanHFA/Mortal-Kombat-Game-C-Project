#include "Fighter.h"
#include "mbed.h"
#include <stdlib.h>

Fighter::Fighter() {}

int Fighter::get_x() {
    return _x;
}

int Fighter::get_y() {
    return _y;
}

void Fighter::init() {
    // initialize fighter position
    set_x(15);
    set_y(34);
}

void Fighter::set_x(int x) {
    _x = x;
}

void Fighter::set_y(int y) {
    _y = y;
}

void Fighter::add_x(int x) {
    _x += x;
}

void Fighter::add_y(int y) {
    _y += y;
}


void Fighter::draw(N5110 &lcd) {    // drawing standing Fighter

    const int standsprite[12][10] =   {
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,1,1,1,1,1,1,0,0 },
    { 0,0,1,0,1,1,0,1,0,0 },
    { 0,1,1,0,1,1,0,1,1,0 },
    { 0,1,0,0,1,1,0,0,1,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,1,0,0,1,1,0,0 },
    { 0,0,1,0,0,0,0,1,0,0 },
    { 0,1,1,0,0,0,0,1,1,0 },
    { 0,1,0,0,0,0,0,0,1,0 },
    { 0,1,0,0,0,0,0,0,1,0 },
    };

lcd.drawSprite(_x,_y,12,10,(int *)standsprite);
}

// ************************************************************************

void Fighter::move_left(N5110 &lcd){
    const int run_left[12][10] =   {
    { 0,0,1,1,1,0,0,0,0,0 },
    { 0,0,1,1,1,0,0,0,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,0,1,1,1,1,0,0 },
    { 1,1,1,0,1,1,0,1,1,0 },
    { 0,0,0,0,1,1,0,0,0,1 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,1,0,0,1,1,0,0 },
    { 0,1,1,0,0,0,1,1,1,1 },
    { 0,0,1,1,0,0,0,0,0,0 },
    { 0,0,0,1,1,0,0,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    };

const int midrun_left[12][10] =   {
    { 0,0,1,1,1,0,0,0,0,0 },
    { 0,0,1,1,1,0,0,0,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,0,1,1,1,1,0,0 },
    { 1,1,1,0,1,1,0,1,1,0 },
    { 0,0,0,0,1,1,0,0,0,1 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,1,0,0,1,1,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,0,1,0,1,0,0,0 },
    { 0,0,0,1,0,0,0,1,0,0 },
    };
    
    // code to toggle between both move left animations (show some leg movement!)
    int x = rand() % 2;
    if (x == 0) {
        x = 1;
        lcd.drawSprite(_x,_y,12,10,(int *)run_left);
    }
    else if(x == 1) {
        x = 0;
        lcd.drawSprite(_x,_y,12,10,(int *)midrun_left);
    }
    
}

// ************************************************************************

void Fighter::move_right(N5110 &lcd) {

    const int run_right[12][10] =   {
    { 0,0,0,0,0,1,1,1,0,0 },
    { 0,0,0,0,0,1,1,1,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,1,1,1,0,1,0,0 },
    { 0,1,1,0,1,1,0,1,1,1 },
    { 1,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,1,0,0,1,1,0,0 },
    { 1,1,1,1,0,0,0,1,1,0 },
    { 0,0,0,0,0,0,1,1,0,0 },
    { 0,0,0,0,0,1,1,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    };

const int midrun_right[12][10] =   {
    { 0,0,0,0,0,1,1,1,0,0 },
    { 0,0,0,0,0,1,1,1,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,1,1,1,0,1,0,0 },
    { 0,1,1,0,1,1,0,1,1,1 },
    { 1,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,1,0,0,1,1,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,1,0,1,0,0,0,0 },
    { 0,0,1,0,0,0,1,0,0,0 },
    };
    
    // code to toggle between both move right animations
    int x = rand() % 2;
    if (x == 0) {
        x = 1;
        lcd.drawSprite(_x,_y,12,10,(int *)run_right);
    }
    else if(x == 1) {
        x = 0;
        lcd.drawSprite(_x,_y,12,10,(int *)midrun_right);
    }
    
}

// ************************************************************************

int Fighter::kick_right(N5110 &lcd) {
    const int kick[12][10] =   {
    { 0,1,1,0,0,0,0,0,0,0 },
    { 0,1,1,0,1,1,0,0,0,0 },
    { 0,0,0,1,1,1,1,0,0,1 },
    { 0,0,1,1,1,0,0,0,1,1 },
    { 0,1,1,1,1,1,1,1,0,0 },
    { 0,1,0,0,1,1,1,0,0,0 },
    { 1,1,0,0,1,1,0,0,0,0 },
    { 0,0,0,0,1,0,0,0,0,0 },
    { 0,0,0,1,1,0,0,0,0,0 },
    { 0,0,0,1,0,0,0,0,0,0 },
    { 0,0,1,1,0,0,0,0,0,0 },
    { 0,0,1,1,0,0,0,0,0,0 },
    };
lcd.drawSprite(_x,_y,12,10,(int *)kick);
return 1; //confirm collision
}

// ************************************************************************

int Fighter::kick_left(N5110 &lcd) {
    const int kick[12][10] =   {
    { 0,0,0,0,0,0,0,1,1,0 },
    { 0,0,0,0,1,1,0,1,1,0 },
    { 1,0,0,1,1,1,1,0,0,0 },
    { 1,1,0,0,0,1,1,1,0,0 },
    { 0,0,1,1,1,1,1,1,1,0 },
    { 0,0,0,1,1,1,0,0,1,0 },
    { 0,0,0,0,1,1,0,0,1,1 },
    { 0,0,0,0,0,1,0,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,0,1,0,0,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    };
lcd.drawSprite(_x,_y,12,10,(int *)kick);
return 1; //confirm collision
}

// ************************************************************************

int Fighter::punch_right(N5110 &lcd) {
    const int punch[12][10] =   {
    { 0,0,0,0,1,1,0,0,0,1 },
    { 0,0,0,0,1,1,0,0,1,1 },
    { 0,0,1,1,1,1,0,1,1,0 },
    { 0,1,0,0,1,1,1,1,0,0 },
    { 0,1,1,0,1,1,0,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,0,1,0,0,1,1,0,0 },
    { 0,0,1,1,0,0,1,1,0,0 },
    { 0,0,1,0,0,0,1,0,0,0 },
    { 0,1,1,0,0,0,1,0,0,0 },
    { 1,1,0,0,0,1,1,0,0,0 },
    };
lcd.drawSprite(_x,_y,12,10,(int *)punch);
return 1; //confirm collision
}

// ************************************************************************

int Fighter::punch_left(N5110 &lcd) {
    const int punch[12][10] =   {
    { 1,0,0,0,1,1,0,0,0,0 },
    { 1,1,0,0,1,1,0,0,0,0 },
    { 0,1,1,0,1,1,1,1,0,0 },
    { 0,0,1,1,1,1,0,0,1,0 },
    { 0,0,0,0,1,1,0,1,1,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,1,0,0,1,0,0,0 },
    { 0,0,1,1,0,0,1,1,0,0 },
    { 0,0,0,1,0,0,0,1,0,0 },
    { 0,0,0,1,0,0,0,1,1,0 },
    { 0,0,0,1,1,0,0,0,1,1 },
    };
lcd.drawSprite(_x,_y,12,10,(int *)punch);
return 1; //confirm collision
}

// ************************************************************************

void Fighter::guard(N5110 &lcd) {
    const int guard[12][10] =   {
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,0,1,1,0,1,0,0 },
    { 0,0,1,0,1,1,0,1,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,0,0,1,1,0,0,0,0 },
    { 0,0,0,1,1,1,1,0,0,0 },
    { 0,0,1,1,1,1,1,1,0,0 },
    { 0,1,0,0,0,0,0,0,1,0 },
    { 0,1,0,0,0,0,0,0,1,0 },
    { 0,1,0,0,0,0,0,0,1,0 },
    };
lcd.drawSprite(_x,_y,12,10,(int *)guard);
}

void Fighter::move_fighter(N5110 &lcd, DigitalIn &buttonA, DigitalIn &buttonB, DigitalIn &buttonC, DigitalIn &buttonD, AnalogIn  &joy_v, AnalogIn  &joy_h) {
    // getting joystick coordinates using read() function
    // joystick centered at (0.50,0.50) with utmost left at (1.00,0.50) and utmost right being (0.00,0.50)
    // read each of the pins
    float x = joy_h.read();
    float y = joy_v.read();
    // printf("x = %.2f | y = %.2f \n",x,y);

    int x_pos = get_x();
    // printf("fighter x pos = %i \n", x_pos);

/*
Code idea:
if joystick is not moved , display standing sprite
if joystick is moved right, toggle between runright and midrunright
if joystick is moved left, toggle between runleft and midrunleft
*/
    if(x > 0.48 && x < 0.52) { // joystick not moved - we use ± 0.02 to take account of fluctuation in joystick tolerance and noice on ADC
          draw(lcd); // draw standing fighter

           // Preform kick move if user presses button A
        if (buttonA.read() == 1) {
            kick_right(lcd);  // draw kick on same coordinates as the standing sprite
        }
        // Preform punch move if user presses button B
        if (buttonB.read() == 1) {
            punch_right(lcd);  // draw kick
        }
        // Guard if user presses button C
        if (buttonC.read() == 1) {
            guard(lcd);  // draw guard move frame
        }
        if (buttonD.read() == 0) {       // code to return fighter to ground when user uses the jump button whilst moving right/left
            int y_pos = get_y();
            if (y_pos != 34) {
                set_y(34);
            }
        }
        if (buttonD.read() == 1) {       // computing jump move
            draw(lcd);
            add_y(-12);                   // add 12 to y position
            int y_pos = get_y();
            if (y_pos < 22) {           // to avoid sprite jumping more than 12 everytime user clicks D
                set_y(22);
                }
        }
    }
    else if(x < 0.48) { //  joystick moved to the right
        // print  the  move_right animation, refresh, then print the 2nd move_right animation (toggling animations to create moving legs!)
        add_x(4);           // increment by 5
        move_right(lcd);

        if (x_pos >= 65) {   // code to stop fighter moving out of lcd screen
            add_x(-5);
        }


        // kick if user presses button A
        if (buttonA.read() == 1) {
                kick_right(lcd);
            }
        // Preform punch move if user presses button B
        if (buttonB.read() == 1) {
            punch_right(lcd);  // draw kick on same coordinates as the sprite
            }
        // Guard if user presses button C
        if (buttonC.read() == 1) {       // we use while not if here because user would hold to guard
            guard(lcd);  // draw kick on same coordinates as the sprite
        }
        if (buttonD.read() == 1) {       // computing jump move
            move_right(lcd);
            add_y(-12);                   // add 12 to y position
            add_x(5);                     // add to x position
            int y_pos = get_y();
            if (y_pos < 22) {           // to avoid sprite jumping more than 12 everytime user clicks D
                set_y(22);
            }
            if (x_pos >= 65) {   // code to stop fighter moving out of lcd screen while jumping!
            add_x(-5);
            }
        }
        if (buttonD.read() == 0) {       // code to return fighter to ground
            int y_pos = get_y();
            if (y_pos != 34) {
                set_y(34);
            }
        }
    }
    else if(x > 0.52) { // joystick moved to the left
        add_x(-4);      // decrement left by 5
        move_left(lcd);

        if (x_pos <= 8) {   // code to stop fighter moving out of lcd screen
            add_x(5);
        }

    // kick if user presses button A
        if (buttonA.read() == 1) {
            kick_left(lcd);
        }
        if (buttonB.read() == 1) {
            punch_left(lcd);  // draw punch on same coordinates as the sprite
        }
        // Guard if user presses button C
        if (buttonC.read() == 1) {
            guard(lcd);
        }
        // code to make fighter jump
        if (buttonD.read() == 1) {       // computing jump move for left movement
            move_left(lcd);
            add_y(-12);                   // add 12 to y position
            add_x(-5);
            int y_pos = get_y();
            if (y_pos < 22) {           // to avoid sprite jumping more than 12 everytime they click D
                set_y(22);
                }
            if (x_pos <= 8) {   // code to stop fighter moving out of lcd screen while jumping!
            add_x(5);
            }
        }
        if (buttonD.read() == 0) {       // code to return fighter to ground
            int y_pos = get_y();
            if (y_pos != 34) {
                set_y(34);
            }
        }
    }
}