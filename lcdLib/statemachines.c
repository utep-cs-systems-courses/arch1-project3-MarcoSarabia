#include <msp430.h>
#include "libTimer.h"
#include "led.h"
#include "buzzer.h"
#include "statemachines.h"


void __interrupt_vec(WDT_VECTOR) WDT(){ /* 250 interrupts/sec */
  static int interrutCount = 0;
  interruptCount ++;
  
  if(interruptCount >= 250){
    interruptCount = 0;
    
     switch(currentStateMachine){
     case 1:
       clearScreen(COLOR_BLUE);
       drawSquare(10, 10, COLOR_BLACK);
       break;
     case 2:
    
       break;
     case 3:
    
       break;
     case 4:
       clearScreen(COLOR_RED);
       break;
     }
  }
 
} 
