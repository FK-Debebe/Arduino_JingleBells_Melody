/*
  jINGLE bELL mELODY
  bY fK dEBEBE
  dEC 30'2017

  sOURCE cODE rESIDES iN aRDUNIO wEB sITE. 
  http://www.arduino.cc/en/Tutorial/Tone
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  //Dash  -   ing         through   the   snow 
    NOTE_A4, NOTE_FS5, NOTE_E5, NOTE_D5, NOTE_A4,
  
  // in         a       one     hor- se   o -   pen       sleigh
    NOTE_A4, NOTE_A4, NOTE_A4, NOTE_FS5, NOTE_E5, NOTE_D5, NOTE_B4,

  //  over   the        fields     we       go
    NOTE_B4, NOTE_G5, NOTE_FS5, NOTE_E5, NOTE_CS5, 

  // laugh- ing         all    the      way
  NOTE_A5, NOTE_A5, NOTE_G5, NOTE_E5, NOTE_FS5, 0,
  
  // Bells    on        bob      tail    ring
    NOTE_A4, NOTE_FS5, NOTE_E5, NOTE_D5, NOTE_A4,
    
  // mak     ing       spir     its     bright
    NOTE_A4, NOTE_A4, NOTE_FS5, NOTE_E5, NOTE_D5, NOTE_B4,

  // What       fun     it          is      to      ride    and     sing        a       sleigh  ing     song      to       night!
    NOTE_B4, NOTE_B4, NOTE_G5, NOTE_FS5, NOTE_E5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_G5, NOTE_E5, NOTE_D5, 0,
 

  // Jin-       gle       Bells,      Jin-      gle     Bells,    jin-      gle     all       the     way
    NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_A5, NOTE_D4, NOTE_E5, NOTE_FS5, 

  //    Oh,   what       fun      it      is      to        ride-       in      a
    NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5,

  // one       hor- se   o-      pen       sle-    igh!-
   NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_A5,

  // Jin-       gle       Bells,      Jin-      gle     Bells,    jin-      gle     all       the     way
    NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_A5, NOTE_D4, NOTE_E5, NOTE_FS5, 

  //    Oh,   what       fun      it      is      to        ride-       in      a
    NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_FS5,

 // one       hor- se   o-      pen       sle-  
   NOTE_A5, NOTE_A5, NOTE_G5, NOTE_E5, NOTE_D5
};

// note durations: 4 = quarter note, 4 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 2,
  4, 4, 4, 4, 2, 2,
  4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2,
   
  4, 4, 2, 4, 4, 2, 4, 4, 4, 4, 1, 
  4, 4, 2, 4, 4, 4, 4, 4, 4, 
  4, 4, 4, 4, 2, 2,
  4, 4, 2, 4, 4, 2, 4, 4, 4, 4, 1, 
  4, 4, 2, 4, 4, 4, 4, 4, 4, 
  4, 4, 4, 4, 2
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 100; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/4, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    // USE PIN 9 ON THE ARDUINO
    tone(10, melody[thisNote], noteDuration);
 

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(10);

  }
}

void loop() {
  // no need to repeat the melody.
}
