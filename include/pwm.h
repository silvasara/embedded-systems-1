#include <wiringPi.h>
#include <softPwm.h>

#define RESISTOR_PIN 4
#define FAN_PIN 5

void enable_gpio();
void control_temperature(int value);
void disable_gpio();
