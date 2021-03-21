#include <stdio.h>
#include <unistd.h>         //Used for UART
#include <fcntl.h>          //Used for UART
#include <termios.h>        //Used for UART

#define INTERN_TEMPERATURE  0xC1
#define POTENTIOMETER_TEMPERATURE  0xC2

void open_uart();
float get_intern_temperature(char code);
int get_potentiometer_value();
int write_on_uart(char code);
float get_temperature();
