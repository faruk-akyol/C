#include <stdio.h>
#include <math.h>


int main()
{
	double height,weight,bsa;
	
	printf("Height (cm):");
	scanf("%lf",&height);
	
	printf("Weight (g):");
	scanf("%lf",&weight);
	
	bsa=0.0003207*pow(height,0.3)*pow(weight, (0.7285-0.0188*log(weight)));
	
	printf("BSA (m*2): %f",bsa);
	
   	return 0;
}
