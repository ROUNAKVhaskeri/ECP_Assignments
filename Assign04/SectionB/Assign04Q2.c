// Power using recurssion
#include <stdio.h>

int Power(int num, int expo);

int main()
{
    int num, expo, Pow;

    printf("Enter the Number : ");
    scanf("%d", &num);

    printf("Enter the Exponent or Power : ");
    scanf("%d", &expo);

    Pow = Power(num, expo);

    printf("The %d to the power of %d is %d", num, expo, Pow);
    return 0;
}

int Power(int num, int expo)
{

    if (expo == 0)
    {
        return 1;
    }
    else if (expo == 1)
    {
        return num;
    }
    else
    {
        return num * Power(num, expo - 1);
    }
}