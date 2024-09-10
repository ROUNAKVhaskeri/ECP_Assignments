#include <stdio.h>

void Print_Char(char ch, int lim);

int main()
{
    char ch;
    int lim;
    printf("Enter the Charecter : ");
    scanf("%c", &ch);

    printf("Enter the limit : ");
    scanf("%d", &lim);

    Print_Char(ch, lim);

    printf("\n End of Program!\n");

    return 0;
}

void Print_Char(char ch, int lim)
{
    int i = 0;
    for (i=0; i < lim; i++)
    {
        printf("The Character %d time : %c\n", i, ch);
    }
}