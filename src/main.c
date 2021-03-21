#include <stdio.h>
#include "uart.h"

int main(){
    open_uart();

	float temperature = -1;
	float potentiometer = -1;

    temperature = get_temperature(INTERN_TEMPERATURE);
	printf("TI = %f\n", temperature);
    
	potentiometer = get_temperature(POTENTIOMETER_TEMPERATURE);
	printf("TR = %f\n", potentiometer);
   
	close_uart();

	return 0;
}
