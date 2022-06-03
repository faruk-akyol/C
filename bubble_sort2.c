#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
	
	printf("Enter 10 numbers:");
	int i;
	int j;
	int a;
	int o;
	int array[10];
	for(o=0;o<10;o++){
		scanf("%d",&array[o]);
	}
	
	
	
	int array2[10];
	int n;
	for(n=0;n<10;n++){
		
		array2[n]=array[n];
	}
	
	
	
	int array3[10];
	int g;
	for(g=0;g<10;g++){
		
		array3[g]=array[g];
	}
	
	
	// ascending
	for(i=0;i<10;i++){
		
		
		for(j=i+1;j<10;j++){
			
			if(array2[i]>array2[j]){
			
			a= array2[i];
			array2[i]=array2[j];
			array2[j]=a;	
				
				
			}
			
			
			
		}
	}
	
	int l;
	int k;
	//descending
	int b;
	for(l=0;l<10;l++){
		
		for(k=l+1;k<10;k++){
			if(array[k]>array[l]){
			
			
			b= array[l];
			array[l]=array[k];
			array[k]=b;
			
				
			}
			
			
		}
	}
	
	int h;
	printf("Original Array:");
	for(h=0;h<10;h++){
		printf(" %d",array3[h]);
		if(h==9){
			printf("\n");
		}
	}
	
	int f;
	printf("Sorted Array(Ascending):");
	for(f=0;f<10;f++){
		printf(" %d",array2[f]);
		
		if(f==9){
			printf("\n");
		}
	}
	
	
	int d;
	
	printf("Sorted Array(Descending):");
	for(d=0;d<10;d++){
		printf(" %d",array[d]);
		if(d==9){
			printf("\n");
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
