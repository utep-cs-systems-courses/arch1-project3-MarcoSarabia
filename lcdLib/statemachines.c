#include <msp430.h>
#include <libTimer.h>
#include "led.h"
#include "buzzer.h"
#include "lcddraw.h"
#include "lcdutils.h"
#include "statemachines.h"


void __interrupt_vec(WDT_VECTOR) WDT(){ /* 250 interrupts/sec */
  
} 
