/*
 * Author: Michael Ybarra
 * 
 * Project: Music buzzer
 *          Using a Trinket and buzzer. The following #defines
 * sync the piano keys. 4 songs are avalible to play
 * Happy Birthday, Jingle Bells, Twinkle twinkle little star and
 * ABC's. just uncomment the one or ones to be played repeatedly.
 * 
 * 
 * Trinket Reminder
 * -plug in trinket and within 10secs upload code, if unsuccessful
 * unplug and try again. Trinket will blink red when its ready to
 * boot.
 * 
 * -Tools -Board -> Adafruit Trinket(ATtiny85@8MHz)
 *        -Port ->"none"
 *        -Programmer -> USBtinyISP
 * 
 * 
*/




// test 1 happy birthday song.

// pins used
int ledPin = 1;      // built in led
int speakerPin = 2;  // buzzer


// time scale
int ms = 1000;             // 1s
#define half ms/2          // .5s
#define third ms/3         // .333s
#define quarter ms/4       // .25s
#define eighth ms/8        // .125s
#define sixteenth ms/16    // .0625s


// key board 
#define NOTE_B0  31     // B0
#define NOTE_C1  33     // 1
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62       
#define NOTE_C2  65     // 2
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131    // 3
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262    // 4
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523    // 5
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047   // 6  1000
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093   // 7 2100
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186   // 8 4200
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

void setup()    
{        
  pinMode(ledPin,OUTPUT);
  pinMode(speakerPin, OUTPUT);  
}        
         
void loop()     
{
  // uncomment to play
  happy_birthday();     
  //  twinkle_twinkle_little_star();              
  //  jingle_bells();       
  //  abc();
}        
         
void beep(unsigned char speakerPin, int frequency, long time)
{
    digitalWrite(ledPin, HIGH);  
   
    int i;      
    long delay_time = (long)(1000000/frequency);
    long loop_time = (long)((time*1000)/(delay_time*2));
    for (i=0; i<loop_time; i++)    
    {    
        digitalWrite(speakerPin,HIGH);
        delayMicroseconds(delay_time);
        digitalWrite(speakerPin,LOW);
        delayMicroseconds(delay_time);
    }    
   
    digitalWrite(ledPin, LOW);
   
    delay(20);
}        


// all of the above is a standard templette use this 
// then begin to write song. 

// insert song to be played 
// i.e. happy birthday 











// not working timing is off.

void happy_birthday(){
    int tempo = 65;
// time conversion     1000ms = 1s

    // Happy Birthday to you
    beep(speakerPin, NOTE_G6, 1 * tempo);
    beep(speakerPin, NOTE_G6, 1 * tempo);
    beep(speakerPin, NOTE_A6, 4 * tempo);
    beep(speakerPin, NOTE_G6, 4 * tempo); // G
    beep(speakerPin, NOTE_C7, 4 * tempo); // c
    beep(speakerPin, NOTE_B6, 8 * tempo); // B
    delay(quarter);

 
    // Happy Birthday to you
    beep(speakerPin, NOTE_G6, 1 * tempo);
    beep(speakerPin, NOTE_G6, 1 * tempo);
    beep(speakerPin, NOTE_A6, 4 * tempo);
    beep(speakerPin, NOTE_G6, 4 * tempo);
    beep(speakerPin, NOTE_D7, 4 * tempo); //d
    beep(speakerPin, NOTE_C7, 8 * tempo); //c
    delay(quarter);


    // Happy birthday to (name).
    beep(speakerPin, NOTE_G6, 1 * tempo);
    beep(speakerPin, NOTE_G6, 1 * tempo);  // here
    beep(speakerPin, NOTE_G6, 4 * tempo);  //x
    beep(speakerPin, NOTE_E6, 4 * tempo); // e
    beep(speakerPin, NOTE_C6, 4 * tempo);// c
    beep(speakerPin, NOTE_B6, 4 * tempo);
    beep(speakerPin, NOTE_A6, 8 * tempo); 
    delay(quarter);


    // Happy birthday to you
    beep(speakerPin, NOTE_F7, 1 * tempo);
    beep(speakerPin, NOTE_F7, 1 * tempo);
    beep(speakerPin, NOTE_E7, 4 * tempo);
    beep(speakerPin, NOTE_C7, 4 * tempo);
    beep(speakerPin, NOTE_D7, 4 * tempo);
    beep(speakerPin, NOTE_C7, 8 * tempo);
    delay(quarter);


}













// working song 
void jingle_bells(){

    int tempo = 150;
    
    // Jingle bells, jingle bells
    beep(speakerPin, NOTE_E5, 1 * tempo); delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo); delay(tempo / 2); 
    beep(speakerPin, NOTE_E5, 2 * tempo); delay(tempo / 2); 
    beep(speakerPin, NOTE_E5, 1 * tempo); delay(tempo / 2); 
    beep(speakerPin, NOTE_E5, 1 * tempo); delay(tempo / 2); 
    beep(speakerPin, NOTE_E5, 2 * tempo); delay(tempo / 2);


    // Jingle all the way
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2); 
    beep(speakerPin, NOTE_G5, 1 * tempo);    delay(tempo / 2); 
    beep(speakerPin, NOTE_C5, 1 * tempo);    delay(tempo / 2); 
    beep(speakerPin, NOTE_D5, 1 * tempo);    delay(tempo / 2); 
    beep(speakerPin, NOTE_E5, 4 * tempo);    delay(tempo / 2);


    // Oh, what fun it is to ride
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);


    // In a one horse open sleigh hey
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D5, 2 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G5, 2 * tempo);    delay(ms * 2);


}










// working twinkle twinkle little star.
void twinkle_twinkle_little_star(){
int tempo = 200;
    
    // A B C D E F G 
    // notes CCGGAAG
    beep(speakerPin, NOTE_C5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_C5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_A5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_A5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G5, 2 * tempo);    delay(quarter);


    // H I J K L M N O P
    // note FFEEDDC
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_C5, 2 * tempo);    delay(quarter);


    // Q R S T U V
    // notes GGFFEED
    beep(speakerPin, NOTE_G5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D5, 2 * tempo);    delay(quarter);


    // W X Y and Z
    // notes GGFFEED
    beep(speakerPin, NOTE_G5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D5, 2 * tempo);    delay(quarter);


    // Now I know my ABC's
    // notes CCGGAAG
    beep(speakerPin, NOTE_C5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_C5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_A5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_A5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G5, 2 * tempo);    delay(quarter);


    // Next time wont you sing with me.
    // notes FFEEDDC
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D5, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_C5, 2 * tempo);    delay(ms * 2);


}










void abc(){

  int tempo = 200;
    
    // A B C D E F G 
    // notes CCGGAAG
    beep(speakerPin, NOTE_C6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_C6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_A6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_A6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G6, 2 * tempo);    delay(quarter);


    // H I J K L M N O P
    // note FFEEDDC
    beep(speakerPin, NOTE_F6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_C6, 2 * tempo);    delay(quarter);


    // Q R S T U V
    // notes GGFFEED
    beep(speakerPin, NOTE_G6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D6, 2 * tempo);    delay(quarter);


    // W X Y and Z
    // notes GGFFEED
    beep(speakerPin, NOTE_G6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D6, 2 * tempo);    delay(quarter);


    // Now I know my ABC's
    // notes CCGGAAG
    beep(speakerPin, NOTE_C6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_C6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_A6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_A6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_G6, 2 * tempo);    delay(quarter);


    // Next time wont you sing with me.
    // notes FFEEDDC
    beep(speakerPin, NOTE_F6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_F6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_E6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_D6, 1 * tempo);    delay(tempo / 2);
    beep(speakerPin, NOTE_C6, 2 * tempo);    delay(ms * 2);
}
