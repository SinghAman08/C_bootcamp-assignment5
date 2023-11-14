// 6. Write a program to print the first N even natural numbers

// Date-> 11/14/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n, num = 2;
    printf("Enter a number N to print the first N even natural numbers:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num);
        num += 2;
    }

    return 0;
}