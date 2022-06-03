#include <stdio.h>

int main()
{
	
	double fahrenheit;
	double celcius;
	printf("please, give temperature value in Fahrenheit \n");
	scanf("%lf",&fahrenheit);
	celcius=(5*(fahrenheit-32))/9;
	printf("Temperature in celcius is %.1lf \n  ",celcius);
   	return 0;
}
