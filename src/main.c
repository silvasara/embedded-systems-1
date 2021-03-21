#include <stdio.h>
#include "uart.h"
#include "i2c.h"

int main(){
    open_uart();

	float internal_temperature = -1;
	float potentiometer = -1;
	float external_temperature = -1;

    internal_temperature = get_temperature(INTERNAL_TEMPERATURE);
	printf("TI = %f\n", internal_temperature);
    
	potentiometer = get_temperature(POTENTIOMETER_TEMPERATURE);
	printf("TR = %f\n", potentiometer);
   
    external_temperature = get_external_temperature();
	printf("TE = %f\n", external_temperature);
	close_uart();

	return 0;
}
