// 7. Write a program to print the first N even natural numbers in reverse order

// Date-> 11/14/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n, num;
    printf("Enter a number N to print the first N even natural numbers in reverse orders:\n");
    scanf("%d", &n);

    num = n * 2;

    while (num >= 2)
    {
        printf("%d ", num);
        num -= 2;
    }

    return 0;
}