
//Groupe 7 *--------------------oncept A.R----------------*
// configuration de la facon dont sont allumer les LEDs 

//Allumer le coeur en mode chenille (une seule LED a la fois )

//*---------------------------------------------------------*// 

void setup() {
  // configuration du programme arduino , void setup seras lu qu'une fois après il passe dirèctement a la boucle ( void loop) 
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
digitalWrite(2,LOW);// les led seront allumer en dèbut du programme pour plus de sècuritè car on ne sait pas dans quelle etat seront les LEDS au dèbut du programme 
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
  // configuration du mode d'allumage , void loop c'est une boucle infinie , elle vas relire le programe selon ca configuration
digitalWrite(2,HIGH);//la preumière led qui seras allumer se relie dans le pin 2 de l'arduino
delay(100);          // la led vas rester 100 ms 
digitalWrite(2,LOW); // la led vas s'èteindre 
digitalWrite(3,HIGH);// en mème temp que la led prècèdente s'eteint la led suivante qui se reliras au pin 3 s'allumeras 
delay(100);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
delay(100);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
delay(100);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(100);
digitalWrite(10,LOW);
delay(100);
}
