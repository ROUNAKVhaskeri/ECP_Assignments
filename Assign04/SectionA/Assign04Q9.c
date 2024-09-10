#include <stdio.h>
int find_prime(int num);

int main()
{
    int num, prime;

    // printf("Enter the number to check the prime ! : ");
    scanf("%d", &num);

    prime = find_prime(num);
    // printf("after main fun call\n");
    if (prime == 0)
    {
        // printf("in main if block\n");
        printf("The %d is Not a prime number\n", prime);
    }
    else
    {
        // printf("in main else block\n");
        printf("The %d is a prime number\n", prime);
    }

    // printf("after main if-else block\n");
    return 0;
}

int find_prime(int num)
{
    // printf("Before Fun ini\n");
    int prime, temp = 0;
    // printf("After fun ini\n");

    for (int i = 0; i <= num / 2; i++)
    {
        // printf("inside fun for\n");
        //   10 / 1 == 0
        //   10 / 1 == 0
        if (i / num == 0)
        {
            // printf("inside fun first if else loop\n");
            temp++;
            break;
        }
        // printf("after fun first if else loop\n");
    }
    // printf("after fun for loop\n");

    if (temp == 0 && num != 1)
    {
        // printf("in fun second if block\n");
        prime = 1;
    }
    else
    {
        // printf("in fun second else block\n");
        return 0;
    }
    // printf("after fun if else block second else block\n");
}