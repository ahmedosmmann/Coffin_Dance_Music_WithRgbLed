//This Code Edited by Ahmed Osman the original code you will find here https://github.com/geek-samim/COFFIN_DANCE_MUSIC_ARDUINO thanks to him.

// output pin is 8, you can change it down in the void setup.
//connect your Rgb led to pin 6 , 11 and 10 , Doesen't matter which color to which pin 
#include "pitches.h"

int melody[] = {
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5,
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, 
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, 
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5,
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, 
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, 
  NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_F4,
  NOTE_G4, 0, NOTE_G4, NOTE_D5,
  NOTE_C5, 0, NOTE_AS4, 0,
  NOTE_A4, 0, NOTE_A4, NOTE_A4,
  NOTE_C5, 0, NOTE_AS4, NOTE_A4, 
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4, 0, NOTE_G4, NOTE_D5,
  NOTE_C5, 0, NOTE_AS4, 0,
  NOTE_A4, 0, NOTE_A4, NOTE_A4,
  NOTE_C5, 0, NOTE_AS4, NOTE_A4, 
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5
 };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  };

void setup() {
  //connect your Rgb led to pin 6 , 11 and 10 , Doesen't matter which color to which pin
  pinMode(6,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  
  Serial.begin(9600);
  
  for (int thisNote = 0; thisNote < 112; thisNote++) {

    int noteDuration = 750 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
     delay(pauseBetweenNotes);
     
     //Used serial moniter to know the freq value of each note
    //  Serial.println(melody[thisNote);
      Serial.println(pauseBetweenNotes);
      
    //light every led with amount of voltage that represent the frquancie of note
    if(melody[thisNote]>400&&melody[thisNote]<500){
     analogWrite(6,melody[thisNote]);
     delay(15);
     analogWrite(6,0);
     delay(15);
     analogWrite(6,melody[thisNote]);
     analogWrite(11,0);
     analogWrite(10,0);}
     
     if(melody[thisNote]>100&&melody[thisNote]<400){
     analogWrite(10,melody[thisNote]);
     delay(15);
     analogWrite(10,0);
     delay(15);
     analogWrite(6,melody[thisNote]);
     analogWrite(11,0);
     analogWrite(10,0);}
     
     if(melody[thisNote]>500&&melody[thisNote]<600){
     analogWrite(6,0);
     analogWrite(11,melody[thisNote]);
     delay(15);
     analogWrite(10,0);
     delay(15);
     analogWrite(11,melody[thisNote]);
     analogWrite(10,0);}
     
     if(melody[thisNote]>600&&melody[thisNote]<700){
     analogWrite(6,0);
     analogWrite(11,0);
     analogWrite(10,melody[thisNote]);
     delay(15);
     analogWrite(10,0);
     delay(15);
     analogWrite(10,melody[thisNote]);}
     
     if(melody[thisNote]>700&&melody[thisNote]<1000){
     analogWrite(6,0);
     analogWrite(11,melody[thisNote]);
     analogWrite(10,melody[thisNote]);
     delay(15);
     analogWrite(11,0);
     analogWrite(10,0);
     delay(15);
     analogWrite(11,melody[thisNote]);
     analogWrite(10,melody[thisNote]);}
     
     if(melody[thisNote]=0){
     analogWrite(6,0);
     analogWrite(11,0);
     analogWrite(10,0);}
     noTone(8);}
}

void loop() {
 //This Code Edited by Ahmed Osman the original code you will find here https://github.com/geek-samim/COFFIN_DANCE_MUSIC_ARDUINO thanks to him.
}
