#include <stdio.h>

void print_hexadecimal(int num)
{

    if (num == 0)
        return;

    print_hexadecimal(num / 16);

    int remainder = num % 16;
    if (remainder < 10)
    {

        printf("%d", remainder);
    }
    else
    {

        printf("%c", remainder - 10 + 'A');
    }
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("0\n");
        return 0;
    }

    if (num < 0)
    {
        printf("-");
        num = -num;
    }

    // hexadecimal
    printf("Hex number of given decimal: 0x");
    print_hexadecimal(num);
    printf("\n");

    return 0;
}
