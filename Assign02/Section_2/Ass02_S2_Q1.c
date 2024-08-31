#include<stdio.h>
int main(){

//Write a program to display number of days in a month
int Year, Month;
	
	printf("Jan : 1, Feb : 2, Mar : 3, Apr : 4, May : 5, June : 6, \nJuly ; 7, Aug : 8, Sept : 9, Oct : 10, Nov : 11, Dec : 12\n\n");
	printf("Enter the Month : ");
	scanf("%d",&Month);

	printf("Enter the year : ");
	scanf("%d", &Year);

	switch(Month){
	
			case 1 : printf("There are 31 Days in the month of January\n");
				break;
	
			case 2 :
				if ((Year % 400 == 0 && Year % 100 != 0) || Year % 4 == 0){
				 printf("There are 29 Days in the month of Feb as it is a Leap Year\n");
				}
				else{
				 printf("There are 28 Days in the month of Feb as it is Not a Leap Year\n");
				}
				break;
	
			case 3 : printf("There are 31 Days in the month of March\n");
				break;
	
			case 4 : printf("There are 30 Days in the month of April\n");
				break;

			case 5 : printf("There are 31 Days in the month of May\n");
				break;

			case 6 : printf("There are 30 Days in the month of June\n");
				break;

			case 7 : printf("There are 31 Days in the month of July\n");
				break;

			case 8 : printf("There are 31 Days in the month of August\n");
				break;

			case 9 : printf("There are 30 Days in the month of September\n");
				break;

			case 10 : printf("There are 31 Days in the month of Oct\n");
				break;

			case 11 : printf("There are 30 Days in the month of November\n");
				break;

			case 12 : printf("There are 31 Days in the month of December\n");
				break;

			default : printf("Invalid Month Input!\n");\
				break;

	}
	return 0;
}
