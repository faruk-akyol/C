#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>





double getRandomNumber(double lower_limit, double upper_limit){
	double randomNumber= ((double)rand())/RAND_MAX;
	double range=(upper_limit-lower_limit)*randomNumber;
	double number= lower_limit+range;
	
	return number;
}

double calculatePi(int max_iteration){
	int count=0;
	int i;
	double pi;
	for(i=1;i<=max_iteration;i++){
		
		   
		double x= getRandomNumber(-1,1);
		
		double y= getRandomNumber(-1,1);
		double z;
		z=1;
		if((x*x+y*y)<=z){
			count++;
		}
	
	}
	
	double ratio= (double)count/(double)max_iteration;
	pi=ratio*4.0;
	return pi;
	
}
int main(){
	
	srand(time(NULL));
	printf("Mean Value of 100 Estimated Pi's = %.1lf..",calculatePi(10000));
	
	
	
	
	
	
	
	
	
	return 0;
          }
