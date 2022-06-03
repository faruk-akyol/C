#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int fac(int x);

int main(){
	
	printf("Enter n and r: ");
	int n,r;
	scanf("%d %d",&n,&r);
	
	int com = fac(n)/(fac(r)*fac(n-r));
	printf("%d\n",com);
	
	
	
	
	return 0;
}

int fac(int x){
	int i;
	int result=1;
	for(i=1;i<=x;i++){
		result=result*i;
	}
	return result;
}
