#include<stdio.h>


int Calc_Add();
int Calc_Sub();
int Calc_Div();
int Calc_Mod();
int Calc_Mul();



int main(){
	
	int add, mul, div, mod, sub;
	int num1, num2;
	enum MENU {ADD=1, SUB, MUL, DIV, MOD}menu;
	enum MENU ch;
	while (1){

		printf("\n1 : ADD, 2 : SUB, 3 : MUL, 4 : DIV, 5 : MOD\n");
		printf("\n");
	
		printf("Enter Num 1 : ");
		scanf("%d", &num1);

    	printf("Enter Your Choice : ");
    	scanf("%d",(int*)&ch);

		printf("Enter Num2 : ");
	 	scanf("%d", &num2);


		switch(ch){

			case ADD : add = Calc_Add(num1, num2);
					   printf("The Addition of %d and %d is %d\n", num1, num2, add);
				   	   break;

			case SUB : sub = Calc_Sub(num1, num2);
					   printf("The subtraction of %d and %d is %d\n", num1, num2, sub);
					   break;

			case MUL : mul = Calc_Mul(num1, num2);
				   	   printf("The Multiplication of %d and %d is %d\n", num1, num2, mul);
				   	   break;
				
			case DIV : div = Calc_Div(num1, num2);
					   printf("The Division between %d & %d is %d\n", num1, num2, div);
					   break;

			case MOD : mod = Calc_Mod(num1, num2);
					   printf("The Reminder for %d / %d is %d\n", num1, num2, mod);
					   break;
		
			default : printf("Invalid Operator Selected!\n");
					  break;
	}
	
	char choice;
	printf("Do you want to continue? [Y / N] : ");
	scanf("%*c%c", &choice);

	if (choice == 'N' || choice == 'n'){
		break;
	}
}



	return 0;
}



int Calc_Add(int a, int b){
	return a+b;

}

int Calc_Sub(int a, int b){
	return a-b;
}

int Calc_Div(int a, int b){
	float x ,y;
	x = a;
	y = b;
	int res;
       if (y==0){
          printf("Cant Divide by 0!\n");
       }  
       else{
          res = x/b;
          return res;
     }  
}

int Calc_Mod(int a, int b){
      int res;
	  if (b==0){
         printf("Cant Divide by 0!\n");
      }
      else{
         res = a%b;
		 return res;
	}
}

int Calc_Mul(int a, int b){
	return a*b;
}


