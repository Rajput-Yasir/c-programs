#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int num)
{
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits = %d\n", sumOfDigits(number));

    return 0;
}
