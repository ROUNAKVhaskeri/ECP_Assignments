#include <stdio.h>

int Pascle_Tri(int n);
int main()
{
    int num;
    printf("Enter the number of Rows : ");
    scanf("%d", &num);

    Pascle_Tri(num);

    return 0;
}

int Pascle_Tri(int num)
{
    int c = 1;
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= num - i; j++)
            printf(" ");

        for (int k = 0; k <= i; k++)
        {
            if (k == 0 || i == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - k + 1) / k;
            }
            printf("% 4d", c);
        }
        printf("\n");
    }
}