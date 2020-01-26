/* GripY Box
 *  CPSC 599 Assignment 1
 *  RAPHAEL RAIN Wang
 *  Jan 25 2020
 */

/*Potentiometer value*/
int ptnValue = 0;

void setup() {

  /* LED lights setup*/
  pinMode(7,OUTPUT);
   /* 6 was not working properly*/
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  
}

/* read the potentiometer, and update the LED output
 *  LED 1 lights up if value is <= 595
 *  LED 2 lights up if value is <= 635
 *  LED 3 lights up if value is <= 700
 *  LED 4 lights up if value is <= 750
 */
void loop() {

/* read value of potentiometer */
  ptnValue = analogRead(0);

/* LED 1 */
if(ptnValue <= 595){

  digitalWrite(7,HIGH);

} else { digitalWrite(7,LOW); }

/* LED 2 */
if(ptnValue <= 635){

  digitalWrite(5,HIGH);

} else { digitalWrite(5,LOW); }
  
/* LED 3 */
if(ptnValue <= 700){

  digitalWrite(4,HIGH);

} else { digitalWrite(4,LOW); }

/* LED 4 */
if(ptnValue <= 750){

  digitalWrite(3,HIGH);

} else { digitalWrite(3,LOW); }

  
}
