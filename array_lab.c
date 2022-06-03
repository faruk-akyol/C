#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>



int main(){
	
	int wanted_array=3;
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
	
	 
	
		
	
	
	
	int i;
	int y;
	
	double cumulative_array[size];
	
	double cum_average;
	
	for(y=0;y<size;y++){
		double sum=0;
		for(i=0;i<=y;i++){
		sum +=array[i];
		
		
		
		}
		cum_average= sum /(double) (y+1);
		cumulative_array[y]=cum_average;
	
		
	}
	
	int a;
	
	double sum1=0;
	double moving_average[size];
	
	
	double moving_array[size];
	int m;
	int j;
	for(m=wanted_array-1;m<size;m++){
		sum1=0;
		for(j=m;j>m-wanted_array;j--){
			sum1 += array[j];
		}
		moving_array[m]=  sum1/  wanted_array;
	}
	
	
	
	
	
	int l;
	printf("Rate Changes:");
	for(l=0;l<size;l++){
		printf("%d ",array[l]);
	}
	printf("\n");

	
	
	
	printf("Cumulative Averages:");
	for(l=0;l<size;l++){
		printf("%.2lf ",cumulative_array[l]);
	}
	printf("\n");
	
	
	printf("Simple moving averages:");
	for(l=0;l<size;l++){
		printf("%.2lf ",moving_array[l]);
	}
	printf("\n");
	
	

	return 0;
	
}
