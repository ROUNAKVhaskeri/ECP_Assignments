#include <stdio.h>

void Fibonacci_Series(int n);

int main()
{
    int num;
    printf("Enter the n for n-fibonacci Searies : ");
    scanf("%d", &num);

    Fibonacci_Series(num);

    return 0;
}

void Fibonacci_Series(int num)
{
    int fibo, a = 0, b = 1;
    fibo = a + b;
    printf("%d ", a);
    printf("%d ", b);
    for (int i = 3; i <= num; i++)
    {
        printf("%d ", fibo);
        a = b;
        b = fibo;
        fibo = a + b;
    }
    printf("%d ", fibo);
}