// 1. /* Program to checkif the entered number is a power of 2 */

#include<stdio.h>

int ispoweroftwo(int n)
{
    if((n & (n-1)) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int n;
    
    printf("Enter a number = ");
    scanf("%d",&n);
    
    printf("NOTE: 1 is printed below if entered number is power of 2 and 0 is printed if not.\n");
    printf("%d ",ispoweroftwo(n));
}



// 2.


