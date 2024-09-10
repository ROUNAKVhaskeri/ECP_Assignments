#include <stdio.h>


void print_binary(int num) {
    
    if (num == 0) {
        printf("0");
        return;
    }
    
    
    if (num > 1){
     
		print_binary(num / 2);
    
	}
   
    printf("%d", num % 2);
}

int main() {
    int num;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("-");
        num = -num;
    }

    
    printf("Binary Converted: ");
    print_binary(num);
    printf("\n");

    return 0;
}
