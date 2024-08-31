#include<stdio.h>
int main()
{

	int num1, num2,res;

	printf("Enter the 1st number : ");
	scanf("%d", &num1);

	printf("Enter the 2nd  number : ");
	scanf("%d", &num2);

	if (num2 == 0){
		printf("Cannot Devide by 0!\n");
	}
	else{
		res = num1/num2;
		printf("The Result is : %d\n", res);
	}	

	return 0;
}
