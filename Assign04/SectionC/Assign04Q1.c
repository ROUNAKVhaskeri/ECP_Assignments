//Using Global Variables

#include<stdio.h>
/*

int sum, product;

void calculate(int a, int b) {
    sum = a+b;
    product = a*b;

}

int main() {

	int num1, num2;
    
	printf("Enter two numbers: ");
    scanf("%d %d", &num1,&num2);
    
	calculate(num1 , num2);
    
	printf("sum: %d\n", sum);
    
	printf("product: %d\n", product);
    
	return 0;
}

*/

//Without using Global variables

int calculate(int a, int b,int *sum) {
	int product;

	*sum = a+b;
	return product = a*b;

}


int main() {

	int num1, num2,sum;
    
	printf("Enter two numbers: ");
    scanf("%d %d", &num1,&num2);
    
	int product = calculate(num1 , num2,&sum);
    
	printf("sum: %d\n", sum);
    
	printf("product: %d\n", product);
    
	return 0;
}
