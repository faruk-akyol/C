#include <stdio.h>

int main()
	
{
	int number=0;
	
	
	
	printf("Enter a 3 digit number:");
	scanf("%d",&number);
	
	int base_number=number;
	
	
	int first_digit=number%10;
	number=number/10;
	
	
	int second_digit=number%10;
	
	
	number= number/10;
	
	
	int third_digit=number%10;
	
	printf("Digits of number %d are %d, %d, %d respectively\n",base_number,third_digit,second_digit,first_digit);

	
	
   	return 0;
}
