/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <msp430.h>
#include <libTimer.h>
#include "led.h"
#include "switches.h"
#include "buzzer.h"
#include "lcdutils.h"
#include "lcddraw.h"


/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();

  led_init();
  
  lcd_init();

  switch_init();

  buzzer_init();

  clearScreen(COLOR_RED);
  //drawString5x7(20,20, "Marco", COLOR_BLACK, COLOR_WHITE);

  //enableWDTInterrupts();
  
  or_sr(0x18);
  
  //u_char width = screenWidth, height = screenHeight;

  

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
