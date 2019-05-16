#include "Arduino.h"
#include "drive.h"

drive::drive(int enableRight=11, int forwardRight=9, int backwardRight=6, int enableLeft= 10, int forwardLeft = 3, int backwardLeft= 5){
    pinMode(enableRight,OUTPUT) ;   //we have to set PWM pin as output
    pinMode(forwardRight,OUTPUT) ;  //Logic pins are also set as output
    pinMode(backwardRight,OUTPUT) ;
    //pinMode(6,OUTPUT) ;  //Logic pins are also set as output
    pinMode(enableLeft,OUTPUT) ;   //we have to set PWM pin as output
    pinMode(forwardLeft,OUTPUT) ;  //Logic pins are also set as output
    pinMode(backwardLeft,OUTPUT) ;
    fR = forwardRight;
    bR = backwardRight;
    fL = forwardLeft;
    bL = backwardLeft;
    pwmR = enableRight;
    pwmL = enableLeft;
    
}

void drive::forwardFast(){
      digitalWrite(fR,LOW) ;  
      digitalWrite(fL,HIGH) ; 
      digitalWrite(bR,HIGH) ;
      digitalWrite(bL,LOW) ;
      analogWrite(pwmR, 100) ; 
      analogWrite(pwmL, 100) ;
    }

 void drive::backFast(){
      digitalWrite(fR,HIGH) ;  
      digitalWrite(fL,LOW) ; 
      digitalWrite(bR,LOW) ;
      digitalWrite(bL,HIGH) ;
      analogWrite(pwmR, 100) ; 
      analogWrite(pwmL, 100); 
    }
