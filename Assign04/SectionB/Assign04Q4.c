#include <stdio.h>

int fibonacci(int n) {
    if (n == 0){
    
        return 0;
    }
    
    if (n == 1){
    
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibonacci_series(int n) {
    
    for (int i = 0; i < n; i++) {
    
        printf("%d ", fibonacci(i));
    
    }
    printf("\n");
}

int main() {
    int t;


    printf("Enter the n number of terms to print in Fibonacci series: ");
    scanf("%d", &t);

    printf("First %d terms of Fibonacci series: ", t);
    fibonacci_series(t);

    return 0;
}
