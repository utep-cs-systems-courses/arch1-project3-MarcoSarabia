Lab Project 3: LCD Screen
==================================
# Description
This project code implements leds, buzzer sounds, and statemachines in the
MS430's LCD screen. It utilizes the buttons on the greenboard to switch states.

# Files

The following are source files for this project. They are located in the
folder named "project"
- main.c: Initializes every component in the project by calling all other files, including the periodic interrupts
- wdt_handler.s: Handles the periodic interrupts. Implemented in Assembly.

# How to run

Once you are located in the main folder, go to "project"
    $ cd project/

Then run the command
    $ make

Then run the command
    $ make load
 
