#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>



int main(){
	
	int d;
	int size=1;
	
	printf("Enter size of the array:\n");
	
	scanf("%d",&size);
	
	
	
	int array[size];
	
	printf("Enter the elements of the array:\n");
	
	for(d=0;d<size;d++){
		scanf("%d", &array[d]);
	}
	
	
	bool b =true; 
	
	int wanted_array;
	
	while(b){
		printf("what is wanted window?\n");
		scanf("%d",&wanted_array);
		if(wanted_array>size){
			printf("The value you give is bigger than array size\n\n");
	 	
	 }
	 else{
	 	b=false;
	 }
	 
	
		
	}
	
	
	int i;
	double sum=0;
	double cum_average;
	for(i=0;i<wanted_array;i++){
		sum +=array[i];
		
	}
	
	cum_average= sum/ (double) wanted_array;
	
	int a;
	
	double sum1=0;
	double moving_average;
	
	
	
	for(a=size-wanted_array;a<size;a++){
		sum1 += array[a];
		
	}
	moving_average= sum1/ (double) wanted_array;
	
	
	printf("Cumulative average is %.2lf.\n",cum_average);
	
	printf("Simple moving average is %.2lf.\n",moving_average);
	

	return 0;
	
}
