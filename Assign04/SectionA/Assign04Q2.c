#include<stdio.h>


int Pow(int, int);

int main(){

	int num,exp,catch;

	printf("Enter a Value : ");
	scanf("%d",&num);

	printf("Enter The Exponent : ");
	scanf("%d",&exp);

	catch = Pow(num,exp);
	printf(" %d to the power of %d is %d\n", num,exp,catch);

	return 0;

}


int Pow(int num, int exp){
	
	int temp = 1, i=1;
	while (i <= exp){
		// 1 <= 2
		// 2 <= 2
			
		if (exp == 0){
			return 1;
		}		
		else if (exp == 1){
			return num;
		}
		else {
		//    5 = 5 * 5;
		//	  5  = 1 * 5;
			temp = temp * num;
		  // 25
			i++;//2 

		}
	
	
	}

	return temp;
}
