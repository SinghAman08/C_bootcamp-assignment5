// 1. Write a program to print iNeuron N times on the screen

// Date-> 11/14/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number n to print ""iNeuron"" number of n times:\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("iNeuron\n");
    }
    

    return 0;
}