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


2. /*-------- Checking if entered number is even or odd number ------ */
#include <stdio.h>

int main() {
    
    int a;
    
    printf("Enter a number to check if its even or odd:");
    scanf("%d",&a);
    
    if(a % 2 != 0) //works for both positive and negative integers
    {
        printf("The number a = %d is an ODD number",a);
    }
    else
    {
        printf("The number a = %d is an EVEN number",a);
    }
    

    return 0;
}


3.
