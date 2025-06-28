#include <stdio.h>
#include <math.h> // Needed for sqrt()

int main()
{
    int n, i;
    int isNotPrime = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    // Numbers less than 2 are not prime
    if (n < 2)
    {
        isNotPrime = 1;
    }
    else
    {
        // Check for divisors from 2 to sqrt(n)
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isNotPrime = 1;
                break;
            }
        }
    }

    if (isNotPrime)
        printf("%d is not a prime number\n", n);
    else
        printf("%d is a prime number\n", n);

    return 0;
}
