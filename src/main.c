#include <stdio.h>
#include "uart.h"

int main(){
    open_uart();

    float temperature = get_intern_temperature(INTERN_TEMPERATURE);
	printf("TI = %f\n", temperature);

	return 0;
}
