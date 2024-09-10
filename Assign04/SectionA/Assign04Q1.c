//Write a function to calculate factorial of a given number.

#include<stdio.h>

int Factorial(int);

int main(){

	int a,num;

	printf("Enter num = ");
	scanf("%d",&num);
	
	a = Factorial(num);
	
	printf("The Factorial of %d! is %d\n",num, a );
	return 0;
}
				// 5
int Factorial(int num){
				
	int fact=1, temp,i;
	i=num;
	while(i!=0){
		// 1 != 5
		temp = i;
		fact = fact * temp;
		i--;

	}	
	return fact;
}
