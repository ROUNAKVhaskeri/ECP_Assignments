#include <stdio.h>

int a = 0;
int b = 1;

int Fibonacci_Series();

int main()
{
    int a;
    printf(":");
    printf("%-4d", Fibonacci_Series()); // 0
    printf(":");
    printf("%-4d", Fibonacci_Series()); // 1
    printf(":");
    printf("%-4d", Fibonacci_Series()); // 1
    printf(":");
    printf("%-4d", Fibonacci_Series()); // 2
    printf(":");
    printf("%-4d", Fibonacci_Series()); // 3
    printf(":");
    printf("%-4d", Fibonacci_Series()); // 5
    printf(":");
    printf("%-4d", Fibonacci_Series()); // 8
    printf(":");
    printf("%-4d\t", Fibonacci_Series()); // 13
    printf("and so on....");

    return 0;
}

int Fibonacci_Series()
{

    int fibo = a;
    a = b;
    b = fibo + b;

    return fibo;
}