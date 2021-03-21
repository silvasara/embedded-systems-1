#include "i2c.h"

void init_i2c(){
    bme280Init(1, BME_ADDR);
}

float get_external_temperature(){
    int tempreature, pressure, humidity;
	
	init_i2c();

    bme280ReadValues(&tempreature, &pressure, &humidity);

    return tempreature/100.0;
}
