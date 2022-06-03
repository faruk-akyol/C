#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
	
{
	double temperature;
	char unit;
	double afterTemperature;
	double meter;
	double afterMeter=  meter/300.0;
	printf("Enter temperature (end with F for Fahrenheit or C for Celsius): ");
	
	
	scanf("%lf %c",&temperature, &unit);

	printf("Enter altitude in meters: ");

	

	scanf("%lf",&meter);

	
	
	
	if(unit=='F'){
		afterTemperature=(5.0/9.0)*(temperature-32);
		
		
	}
	else if (unit=='C'){
		afterTemperature=temperature;
	}
	else{
		printf("Please enter temperature unit as either C or F.\n");
		return 1;
	
	}
	
	if(afterTemperature<=(0-afterMeter)){
		printf("Water is Solid (Ice) at %.2lf degrees %s\n",temperature,unit=='C' ? "Celsius": "Fahrenheit");
	}
	else if(afterTemperature>=(100+afterMeter)){
		printf("Water is Gas (Vapor) at %.2lf degrees %s\n",temperature,unit=='C' ? "Celsius": "Fahrenheit");
	}
	else{
		printf("Water is Liquid at %.2lf degrees %s\n",temperature,unit=='C' ? "Celsius": "Fahrenheit");
		
	}

	
	
	
   	return 0;
}
