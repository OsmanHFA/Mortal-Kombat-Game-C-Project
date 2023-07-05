// This file includes abandoned code that was replaced 
/*
void play_MK_theme() {
    // Mortal Kombat Theme Tune
const int note_array[] = {
    NOTE_A3, NOTE_A3, NOTE_C4, NOTE_A3,
    NOTE_D4, NOTE_A3, NOTE_E4, NOTE_D4,
    NOTE_C4, NOTE_C4, NOTE_E4,  NOTE_C4,
    NOTE_G4, NOTE_C4, NOTE_E4, NOTE_C4,
    
    NOTE_G3, NOTE_G3, NOTE_B3, NOTE_G3,
    NOTE_C4, NOTE_G3, NOTE_D4, NOTE_C4,
    NOTE_F3, NOTE_F3, NOTE_A3, NOTE_F3,
    NOTE_C4, NOTE_F3, NOTE_C4, NOTE_B3,
// *****************************************
    NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3,
    NOTE_G3, NOTE_C4, NOTE_A3, NOTE_A3,
    NOTE_A3, NOTE_A3, NOTE_G3, NOTE_E3,
    NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3,
    
    NOTE_G3, NOTE_C4, NOTE_A3, NOTE_A3,
    NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3,
// *****************************************
    NOTE_A3, NOTE_E4, NOTE_A3, NOTE_C4,
    NOTE_A3, NOTE_B3, NOTE_A3, NOTE_C4,
    NOTE_A3, NOTE_B3, NOTE_G3, NOTE_A3,
    NOTE_E4, NOTE_A3, NOTE_C4, NOTE_A3,
    
    NOTE_B3, NOTE_A3, NOTE_C4, NOTE_A3,
    NOTE_B3, NOTE_G3, NOTE_A3, NOTE_E4,
    NOTE_A3, NOTE_C4, NOTE_A3, NOTE_B3,
    NOTE_A3, NOTE_C4, NOTE_A3, NOTE_B3,
    
    NOTE_G3, NOTE_A3, NOTE_E4, NOTE_A3,
    NOTE_C4, NOTE_G3, NOTE_G3, NOTE_G3,
    NOTE_A3, NOTE_A3,
};

// 8 corresponds to 1/8
const int duration_array[] = {
    7,7,7,7,
    7,7,7,7,
    7,7,7,7,
    7,7,7,7,

    7,7,7,7,
    7,7,7,7,
    7,7,7,7,
    7,7,7,7,
// *****************************************
    5,5,5,5,
    7,7,5,5,
    5,5,7,7,
    5,5,5,5,
    
    6,6,5,5,
    7,10,7,6,
// *****************************************
    8,6,8,6,
    8,6,8,6,
    8,8,6,8,
    6,8,6,8,
    
    6,8,6,8,
    8,6,8,6,
    8,6,8,6,
    8,6,8,8,
    
    6,8,6,8,
    6,8,6,8,
    8,5,
};
    int n = sizeof(note_array)/sizeof(int);
    // tell it the number of notes, arrays, BPM and whether to repeat
    dac.play_melody(n,note_array,duration_array,110.0,true);
}
*/
/*
Messed up with my enemy fighter
const int uni_logo[48][84] = {
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,0,0,0,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,0,1,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,0,1,1,1,0,1,0,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,0,0,0,1,1,0,1,1,1,0,1,1,0,1,1,1,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,0,1,0,1,1,0,0,0,0,0,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,1,1,0,1,0,1,1,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,0,0,0,0,1,1,0,1,1,1,1,1,0,1,0,1,1,1,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,1,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,1,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,1,1,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,0,1,1,1,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,1,1,0,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,0,0,0,0,1,1,0,1,1,1,1,1,0,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,1,1,1,1,1,0,1,1,1,0,0,0,0,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,0,1,0,1,1,0,0,0,0,1,1,1,1,1,0,0,0,0,1,0,0,1,1,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,0,0,0,0,1,1,0,1,1,1,1,1,0,0,0,0,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0,1,1,1,0,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,0,0,1,0,1,1,0,1,1,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1,1,0,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,0,1,1,1,0,1,0,0,0,0,0,1,0,1,1,1,0,1,1,1,1,0,0,0,0,1,0,1,1,0,1,1,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,1,1,1,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,1,1,1,1,1,0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,1,0,0,1,1,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1}
};
lcd.drawSprite(0,0,48,84,(int *)uni_logo);
lcd.refresh();

Function works but better solutions available

void GameEngine::check_health(N5110 &lcd, DigitalIn &buttonA, DigitalIn &buttonB, DigitalIn &buttonC) {
    int F = 40;
    int E = 40;
    int collision = check_collision(lcd, buttonA, buttonB, buttonC);
    if (collision == 1) {
        F -= 4;
        printf("fighter take health bar \n");
    }
    // enemy health bar
    //           x y w  h, type
    lcd.drawRect(0,0,E,8,FILL_BLACK);
    lcd.drawRect(0,0,40,8,FILL_TRANSPARENT);
    if (collision == 0) {
        E -= 4;
        printf("enemy take health bar \n");
    }
}
*/

/*
int get_fighter_health() {
    // check collision before reducing fighter's health
    int collision = game.check_collision(lcd, buttonA, buttonB, buttonC);
    int fighter_health = HEALTH;
    int enemy_health = HEALTH;
    int lost = 0;
    if (collision == 0) {
        fighter_health--;
        printf("fighter health is = %i", enemy_health);
        if (fighter_health == 0) { // if fighter has zero health, fighter is the loser
            gameover(0);
            lost = 0;
        }
    }
    else if (collision == 1) {
        enemy_health--;
        printf("enemy health is = %i", enemy_health);
        if (enemy_health == 0) { // if fighter has zero health, fighter is the loser
            gameover(1);
            lost = 1;
        }
    }
    return lost;
} 

int GameEngine::get_fighter_health(int collision, int health) {
    if (collision == 0) {
        health--;
    }
    //printf("f health = %i\n", health);
    return health;
}

int GameEngine::get_enemy_health(int collision, int health) {
    if (collision == 1) {
        health--;
    }
    //printf("enemy health = %i\n", health);
    return health;
}


void move_sprite() {
    // getting joystick coordinates using read() function
    // joystick centered at (0.50,0.50) with utmost left at (1.00,0.50) and utmost right being (0.00,0.50)
    // read each of the pins
    float x = joy_h.read();
    float y = joy_v.read();
    printf("x = %.2f | y = %.2f \n",x,y);
    // get x position of fighter
    int x_pos = fighter.get_x();
    printf("fighter x pos = %i \n", x_pos);
    
/ *
Code idea:
if joystick is not moved , display standing sprite
if joystick is moved right, toggle between runright and midrunright
if joystick is moved left, toggle between runleft and midrunleft
* /
    if(x > 0.48 && x < 0.52) { // joystick not moved - we use ± 0.02 to take account of fluctuation in joystick tolerance and noice on ADC
          fighter.draw(lcd); // draw standing fighter 
          lcd.refresh();
          wait(0.3);

           // Preform kick move if user presses button A
        if (buttonA.read() == 1) {
            fighter.kick_right(lcd);  // draw kick on same coordinates as the standing sprite
            lcd.refresh();
            wait(0.3);
        }
        // Preform punch move if user presses button B
        if (buttonB.read() == 1) {
            fighter.punch_right(lcd);  // draw kick 
            lcd.refresh();
            wait(0.3);
        }
        // Guard if user presses button C
        while (buttonC.read() == 1) {
            fighter.guard(lcd);  // draw guard move frame
            lcd.refresh();
            wait(0.3);
        }
    }
    else if(x < 0.48) { //  joystick moved to the right
        // print  the  move_right animation, refresh, then print the 2nd move_right animation (toggling animations to create moving legs!)
        fighter.add_x(5);           // increment by 5
        fighter.move_right(lcd);
        lcd.refresh();
        wait(0.1);
        fighter.move_right2(lcd);
        lcd.refresh();
        wait(0.08);
        
        if (x_pos >= 65) {   // code to stop fighter moving out of lcd screen
            fighter.add_x(-5);
        }
    
        
        // kick if user presses button A
        if (buttonA.read() == 1) {
                fighter.kick_right(lcd);
                lcd.refresh();
                wait(0.3);
            }
        // Preform punch move if user presses button B
        if (buttonB.read() == 1) {
            fighter.punch_right(lcd);  // draw kick on same coordinates as the sprite
            lcd.refresh();
            wait(0.3);
        }
        // Guard if user presses button C
        while (buttonC.read() == 1) {       // we use while not if here because user would hold to guard 
            fighter.guard(lcd);  // draw kick on same coordinates as the sprite
            lcd.refresh();
            wait(0.3);
        }
    }
    
    else if(x > 0.52) { // joystick moved to the left
        fighter.add_x(-5);      // decrement left by 5
        fighter.move_left(lcd);
        lcd.refresh();
        wait(0.1);
        fighter.move_left2(lcd);
        lcd.refresh();
        wait(0.08);
        
        if (x_pos <= 6) {   // code to stop fighter moving out of lcd screen
            fighter.add_x(5);
        }

    // kick if user presses button A
        if (buttonA.read() == 1) {
            fighter.kick_left(lcd);
            lcd.refresh();
            wait(0.3);
        }
        if (buttonB.read() == 1) {
            fighter.punch_left(lcd);  // draw punch on same coordinates as the sprite
            lcd.refresh();
            wait(0.3);
        }
        // Guard if user presses button C
        if (buttonC.read() == 1) {
            fighter.guard(lcd);  // draw guard on same coordinates as the sprite
            lcd.refresh();
            wait(0.3);
        }
    }
}

void move_enemy() {
    // read each of the pins
    float x = joy_h.read();
    float y = joy_v.read();
    printf("x = %.2f | y = %.2f \n",x,y);
    // get x position of enemy
    int x_pos = enemy.get_x();
    printf("enemy x pos = %i \n", x_pos);

    if(x > 0.48 && x < 0.52) { // joystick not moved - we use ± 0.02 to take account of fluctuation in joystick tolerance and noice on ADC
          enemy.draw(lcd); // draw enemy
          lcd.refresh();
          wait(0.3);
       // Preform kick move if user presses button A
        if (buttonA.read() == 1) {
            enemy.kick_right(lcd);  // draw kick on same coordinates as the standing sprite
            lcd.refresh();
            wait(0.3);
        }
        // Preform punch move if user presses button B
        if (buttonB.read() == 1) {
            enemy.sword_right(lcd);  // draw sword move on same coordinates as the standing sprite
            lcd.refresh();
            wait(0.3);
        }
    }
    else if(x < 0.48) { //  joystick moved to the right
        enemy.add_x(5);           // increment by 5
        // print  the  move_right animation, refresh, then print the 2nd move_right animation (toggling animations to create moving legs!)
        enemy.move_right(lcd); // draw standing fighter, multiply by speed -69 (negative to correct for direction!)
        lcd.refresh();
        wait(0.1);
        enemy.move_right2(lcd);
        lcd.refresh();
        wait(0.08);
        
        if (x_pos >= 65) {   // code to stop enemy moving out of lcd screen
            enemy.add_x(-5);
        }
        
        // kick if user presses button A
        if (buttonA.read() == 1) {
            enemy.kick_right(lcd);
            lcd.refresh();
            wait(0.3);
        }
        // Preform punch move if user presses button B
        if (buttonB.read() == 1) {
            enemy.sword_right(lcd);  // draw kick on same coordinates as the sprite
            lcd.refresh();
            wait(0.3);
        }
    }
    else if(x > 0.52) { // joystick moved to the left
        enemy.add_x(-5);           // decrement by 5
        enemy.move_left(lcd);
        lcd.refresh();
        wait(0.1);
        enemy.move_left2(lcd);
        lcd.refresh();
        wait(0.08);
    
    
    if (x_pos <= 6) {   // code to stop enemy moving out of lcd screen
            enemy.add_x(5);
        }

    // kick if user presses button A
        if (buttonA.read() == 1) {
            enemy.kick_left(lcd);
            lcd.refresh();
            wait(0.3);
        }
        if (buttonB.read() == 1) {
            enemy.sword_left(lcd);  // draw kick on same coordinates as the sprite
            lcd.refresh();
            wait(0.3);
        }
    }
}

/*

int get_user_input(int &input) {
    while (1) {
        if (buttonA.read() == 1) {
            input = 1;
            break;
        }
        if (buttonB.read() == 1) {
            input  = 2;
            break;
        }
        if (buttonC.read() == 1) {
            input  = 3;
            break;
        }
        if (buttonD.read() == 1) {
            input  = 4;
            break;
        }
    }
    return input;
}



void abandoned_function() {
    // getting joystick coordinates using Vector2D
    // joystick centered at 0 with (1,0) being utmost right and (-1,0) being utmost left
    Vector2D coord = joystick.get_coord(); 
    printf("Coord = %f | %f\n", coord.x, coord.y);
    float x = coord.x;
    float y = coord.y;

loop idea:
while nothing pressed, display standsprite
while moving right, toggle between runright and midrunright
while moving left, toggle between runleft and midrunleft

    while (x > -0.02 && x < 0.02) { // joystick not moved - we use ± 0.02 to take account of fluctuation in joystick input
        fighter.draw(lcd, x, 34); // we write 34 as the y-coordinate to place sprite exactly on ground ( 46 - 12(height of sprite) = 34 )
        printf("*Coord = %f | %f\n",x, y);
        lcd.refresh();
        }

    while (x > 0.02) { // Joystick moved to the right
    // toggle between the 2 move_right animations with a small delay in between to make it smooth
        fighter.update_forward(x);
        printf("**Coord = %f | %f\n", x, y);
        fighter.move_right(lcd, x, 34);
        wait(0.2);
        fighter.update_forward(x);
        fighter.move_right2(lcd, x, 34);
        wait(0.2);
        lcd.refresh();
    }
    while (x < -0.02) { // Joystick moved to the left
    // toggle between the 2 move_left animations with a small delay in between to make it smooth
    fighter.update_backward(x);
    printf("***Coord = %f | %f\n", x, y);
        fighter.move_left(lcd, x, 34);
        wait(0.2);
        fighter.update_backward(x);
        fighter.move_left2(lcd, x, 34);
        wait(0.2);
        lcd.refresh();
    }
}


const int logo[17][19] =   {

    { 1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,1 }, 
    { 0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0 },
    { 0,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,0,0,0 },
    { 0,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,0,0 },
    { 0,0,0,1,0,1,1,0,0,1,1,1,1,0,0,0,1,0,0 },
    { 0,0,1,0,1,1,1,0,1,1,1,1,1,1,0,0,0,1,0 },
    { 0,0,1,0,1,1,1,1,1,1,1,1,0,1,0,0,0,1,0 },
    { 0,0,1,0,1,1,1,0,0,0,1,1,1,1,1,0,0,1,0 },
    { 0,0,1,0,1,1,1,1,0,0,0,0,0,1,1,1,0,1,0 },
    { 0,0,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0 },
    { 0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0 },
    { 0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0 },
    { 0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0 },
    { 0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0 },
    { 0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0 },
    { 0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0 },
    { 1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1 },

};
*/

/*
void menu_select() {
    char button = get_user_input();
    switch (button) {
    case 'A':
      menu.play(lcd);
      break;
    case 'B':
      menu.tutorial(lcd);
      break;
    case 'C':
      menu.options_menu(lcd);
      break;
    default:
      menu.homescreen(lcd); 
      break;
  }
}

char get_user_input() {
    char button;
    while (buttonA.read() == 1) {
        button = 'A';
        wait(0.2);
    }
    while (buttonB.read() == 1) {
        button = 'B';
        wait(0.2);
    }
    while (buttonC.read() == 1) {
        button = 'C';
        wait(0.2);
    }
    while (buttonD.read() == 1) {
        button = 'D';
        wait(0.2);
    }
    pc.printf("Value is %c", button);
    return button;
}
*/

/*
// function - gets user input from buttons A B C D
int Menu::get_user_input(int &input, DigitalIn &buttonA, DigitalIn &buttonB, DigitalIn &buttonC, DigitalIn &buttonD) {
    // we use address-of operator for int input to pass the actual reference for the input value not just a copy of it
    while (1) {
        if (buttonA.read() == 1) { 
            input = 1;
            break;
        }
        if (buttonB.read() == 1) {
            input  = 2;
            break;
        }
        if (buttonC.read() == 1) {
            input  = 3;
            break;
        }
        if (buttonD.read() == 1) {
            input  = 4;
            break;
        }
    }
    printf("input is %i", input);
    return input;
}
*/

/*
void Menu::menu_selection(N5110 &lcd, DigitalIn &buttonA, DigitalIn &buttonB, DigitalIn &buttonC, DigitalIn &buttonD) {
    // this function takes the user input and selects the relevant menu item
    
    while (1) {
        // working code
        if (buttonA.read() == 1) { // we use if statement instead of while loop so that button input do not interfere with the next menu, only this one!
            play(lcd);
            break;
        }
        if (buttonB.read() == 1) {
            tutorial(lcd);
            break;
        }
        if (buttonC.read() == 1) {
            options_menu(lcd, buttonA, buttonB, buttonC);
            break;
        }
        if (buttonD.read() == 1) { // user can click button D to return to main menu
            homescreen(lcd);
            continue;
        }
    }
}
*/

    /*
    if (input == 1){ // button A pressed
        play(lcd);
    }
    else if (input == 2) { // button B pressed
        tutorial(lcd);
    }
    else if (input == 3) { // button C pressed
        options_menu(lcd, buttonA, buttonB, buttonC, buttonD);
    }
    else if (input == 4) { // button D pressed - return back to main menu
        homescreen(lcd);
    }
    */
// ******************************************************************************************************************************
