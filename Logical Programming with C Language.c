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


3. /*-------- swapping of two numbers with and without using a temporary variable ------ */
#include <stdio.h>

int main() {
    
    int a,b,temp;
    printf("Enter two numbers to swap them:");
    scanf("%d %d",&a,&b);
    
    printf("Before swapping: a = %d , b = %d\n",a,b);
    
    /* using a temp variable
     temp = a;
     a = b;
     b = temp; */
    
    /* Method 1 of without using a temp variable
     a = a + b;
     b = a - b;
     a = a -b; */ // But this method is dangerous coz numbers can overflow
     
     // Method 2 of without using a temp variable
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
    
    printf("After Swapping: a = %d ,  b = %d",a,b);
    
    return 0;
}


4. /*-------- Biggest of two integers ------ */
#include <stdio.h>

int main() {
    
    int a,b;
    printf("Enter two integers to check which is bigger (a b) :");
    scanf("%d %d",&a,&b);
    
    if (a == b)
    {
        printf(" a = %d and b = %d are equal\n",a,b);
    }
    else if (a > b)
    {
        printf("a = %d is bigger than b = %d\n",a,b);
    }
    else
    {
        printf("b = %d is bigger than a = %d\n",b,a);
    }
    
    return 0;
}


5. /*-------- Sum of first N numbers ------ */
#include <stdio.h>

int main() {
    int n,temp, sum = 0;
    printf("Enter n :");
    scanf("%d",&n);
    temp = n;

    if (n < 1)
    {
        printf("Please enter positive integers\n");
        return 0; // to stop execution to go futher if n < 1
    }
    /* while(n > 0)
    {
        sum = sum + n;
        n--;
    } */
    
    /* solution can be done in o(1) by using the sum of 1st n integers formula... sum = n * (n + 1) / 2      */
    
    sum = temp * (temp + 1) / 2 ;
    
    printf("Sum of 1st  %d integers is = %d", temp,sum);
    
    return 0;
}


6.
