//Groupe 7
//configuration de la facon dont sont allumer les LEDs 



//une LED sur deux allumè 
//*----------------------------------------------------------------------------------------------------------------------------------------------------*//

void setup() {
  
pinMode(2,OUTPUT);// les led seront en sortie 
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
digitalWrite(2,LOW);// les led seront ètainte en dèbut du programme pour plus de sècuritè car on ne sait pas dans quelle etat seront les LEDS au dèbut du programme 
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
}

void loop() {
digitalWrite(2,HIGH);
digitalWrite(4,HIGH);
digitalWrite(6,HIGH);
digitalWrite(8,HIGH);
digitalWrite(10,HIGH);
delay(1000);


  
}
