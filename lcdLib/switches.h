#ifndef switches_included
#define switches_included

#define SW1 BIT0		// switch1 is p2.0
#define SW2 BIT1                // switch2 is p2.1
#define SW3 BIT2                // switch3 is p2.2
#define SW4 BIT3                // switch4 is p2.3
#define SWITCHES (SW1 | SW2 | SW3 | SW4) // 4 switches on this board

void switch_init();
void switch_interrupt_handler();
void __interrupt_vec(PORT2_VECTOR) Port_2();

#endif