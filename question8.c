// 8. Write a program to print squares of the first N natural numbers

// Date-> 11/14/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number N to print squares of the first N natrual numbers:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)

        printf("%d ", i * i);

    return 0;
}