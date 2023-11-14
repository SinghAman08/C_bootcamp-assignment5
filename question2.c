// 2. Write a program to print the first N natural numbers.

// Date-> 11/14/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number N to print first N natural numbers\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}