#include <stdio.h>
int main()
{
    int n, i = 2, prime = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        prime = 1;
    }
    else
    {
        while (i < n)
        {
            if (n % i == 0)
            {
                prime = 1;
                break;
            }
            i++;
        }
    }
    if (prime)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }

    return 0;
}