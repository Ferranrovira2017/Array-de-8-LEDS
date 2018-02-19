/****************************************************************
**                                                             **
**                       Array de 8 leds                       **
**                                                             **
**  NOM: Ferran Rovira Francàs                DATA: 19/02/2018 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino

//************************* SETUP *******************************

void setup()
{
  pinMode(led0,OUTPUT);       //Definir diferents leds com a sortides
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
}



//************************* LOOP *******************************

void loop()
{
     digitalWrite(led0, LOW);    // posar a 5V el pin 5
   digitalWrite(led1, HIGH);     // posar a 0V el pin 6
   digitalWrite(led2, LOW);    // posar a 5V el pin 7
   digitalWrite(led3, HIGH);     // posar a 0V el pin 8
   digitalWrite(led4, LOW);    // posar a 5V el pin 9
   digitalWrite(led5, HIGH);     // posar a 0V el pin 10
   digitalWrite(led6, LOW);    // posar a 5V el pin 11
   digitalWrite(led7, HIGH);     // posar a 0V el pin 12
  
 
  
  delay(500);                  // es queden leds 500ms encesos
  
   digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  
  delay(500);                  // es queden leds 500ms apagats

}
                              
  



//*********************** FUNCIONS ******************************
