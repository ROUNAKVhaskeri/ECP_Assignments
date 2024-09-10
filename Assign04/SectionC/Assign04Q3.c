#include <stdio.h>


int calculator(char operator, double num1, double num2, double *result) {
    
	switch (operator) {
    
		case '+':
        		*result = num1 + num2;
            	return 0;

        case '-':
            	*result = num1 - num2;
            	return 0;

        case '*':
            	*result = num1 * num2;
            	return 0;  

        case '/':
            	if (num2 == 0) {
                	return -1;  

            } 
			else {
                
				*result = num1 / num2;
                
				return 0;  
            }

        default:
            return -2;  
    }
}

int main() {
    double num1, num2, result;
    char operator;
    int error;

    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    printf("Enter second number: ");
    scanf("%lf", &num2);


    error = calculator(operator, num1, num2, &result);

   
    if (error == 0) {
        printf("Result: %.2lf\n", result);
    } else if (error == -1) {
        printf("Error: Division by zero is not allowed.\n");
    } else if (error == -2) {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
