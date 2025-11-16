1. /*-------- Biggest of two numbers using a conditional operator ------ */
#include <stdio.h>

int main() {
    
    int a,b;
    while(1)
    {
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    if(a == b)
    {
        printf("Both the numbers a = %d, b = %d are equal.\n",a,b);
    }
    else
    {
        (a>b)? printf(" a = %d > b = %d\n",a,b) : printf(" a = %d < b = %d\n",a,b) ;
    }
    // syantax --> condition ? expr1 : expr2
    // In the conditional operator if condition is true expr1 will be executed and if false expr2 is executed.
    
    }

    return 0;
}


2. 
