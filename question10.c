// 10. Write a program to print a table of N.

// Date-> 11/14/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n, num;
    printf("Enter a number N to print a table of N:\n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
        printf("%d ", n * i);

    return 0;
}