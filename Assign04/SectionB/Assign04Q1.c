// Factorial using recurssion
#include <stdio.h>

int Find_Fact(int num);

int main()
{
    int num, factorial;

    printf("Enter the Number of which u want Factorial : ");
    scanf("%d", &num);

    factorial = Find_Fact(num);
    printf("The Given Number's Factorial i.e. %d! : %d\n", num, factorial);
}
int Find_Fact(int num)
{

    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * Find_Fact(num - 1);
    }
}