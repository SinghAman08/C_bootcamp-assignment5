// 5. Write a program to print the first N odd natural numbers in reverse order.

// Date-> 11/14/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n, num = 1;
    printf("Enter a number N to print the first N odd natural numbers in reverse orders:\n");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        num += 2;
    }
    while (num >= 1)
    {
        printf("%d ", num);
        num -= 2;
    }

    return 0;
}