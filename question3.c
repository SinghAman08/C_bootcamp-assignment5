// 3. Write a program to print the first N natural numbers in reverse order

// Date-> 11/14/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number N to print first N natural numbers in reverse order\n");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf("%d ", i);
    }

    return 0;
}