// 9. Write a program to print cubes of the first N natural numbers

// Date-> 11/14/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n, num;
    printf("Enter a number N to print cubes of the first N natrual numbers:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        printf("%d ", i * i * i);

    return 0;
}
