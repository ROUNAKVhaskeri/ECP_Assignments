/*

	Dept No		Dept		 Desig Code	   Desig
   	  
	  10	  Marketing			'M'		  Manager
	  20	  Management		'S'		  Supervisor
	  30	  Sales				's'		  Security Officer
	  40	  Designing			'C'		  Clerk

*/


#include<stdio.h>
int main(){

	int Dept_no, Emp_id;
	char Desig_c; 	

	
	printf(" Dept No "
	       "`"
	       ""
	       ""
	       "");
	
	printf("Enter your Employee ID : ");
	scanf("%d",&Emp_id);

	printf("Enter Your Designation Code : ");
	scanf("%*c%c",&Desig_c);

	printf("Enter your Department No : ");
	scanf("%d", &Dept_no);
	
	switch(Desig_c){
	
		case 'M' : printf("Employee %d is Working as Manager in ",Emp_id);
			   break;
		case 'S' : printf("Employee %d is Working as Supervisor in ",Emp_id);
			   break;
		case 's' : printf("Employee %d is Working as Security Officer in ",Emp_id);
			   break;
		case 'C' : printf("Employee %d is Working as Clerk in ",Emp_id);
			   break;
		default : printf("Invalid Designation Code Entered !\n");
			  break;
	}
	
	switch (Dept_no){
		
		case 10 : printf("Marketing Department\n");
			  break;
		case 20 : printf("Management Department\n");\
			  break;
		case 30 : printf("Sales Department\n");
			  break;
		case 40 : printf("Designing Department\n");
			  break;
		default : printf("Wrong Department Code Entered!\n");
			  break;
	}
	return 0;
}
