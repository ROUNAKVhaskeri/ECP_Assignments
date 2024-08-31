#include<stdio.h>
int main(){

	
	char ch;
	int num1,num2,res; 
	
Lab:

	printf("Enter Num1 : ");
	scanf ("%d",&num1);

	printf("Enter Num2 : ");
	scanf("%d", &num2);

	printf("Enter Which Operation you want to do :");
	scanf("%*c%c",&ch);
/*
	printf("Enter Num 1 : ");
	scanf("%d",&num1);

	printf("Enter num 2 : ");
	scanf("%d",&num2);
*/	
	switch(ch){

			case '+' : res = num1 + num2;
				   printf("The Addition of Both %d and %d is %d\n",num1, num2, res);
				   break;
			case '-' : res = num1 - num2;
				   printf("The Subtraction of Both %d and %d is %d\n",num1, num2, res);
				   break;
			case '/' : if (num2 == 0){
						  printf("Cannot perform Division with 0\n");
					 	  break;	  
					   }
					   else{
					   	  res = num1 / num2;
					   }
					   printf("The Division of Both %d and %d is %d\n",num1, num2, res);
					   break;

			
			case '*' : res = num1 * num2;
				   printf("The Multi of Both %d and %d is %d\n",num1, num2, res);
				   break;
			
			default : printf("Invalid Operator Input!\n");
				  break;
	}
	
	char cont;

	printf("Do you Want to continue? [ Y \\ N] : ");
	scanf("%*c%c",&cont);

	if(cont == 'y' || cont == 'Y'){
		goto Lab;
	}
/*
	printf("%d %d %d %d", '*', '+', '/', '-');
	return 0;
*/
	}
