1. //WAP to check if a number is even or odd
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n % 2 == 0) // % is the remainder operator
    {
        printf("The number %d is even",n);
    }
    else
    {
        printf("The number %d is odd",n);
    }
}


 //Loop control statements
2./* Program to print even numbers between 1 - 10 */
#include<stdio.h>
void main()
{
    int i =1;
    while(i <= 10)
    {
        if(i % 2 == 0)
        {
            printf("i = %d\n",i);
        }
        ++i;
    }
}

3./* Program to print sum of first 'n' natural numbers */
#include<stdio.h>
void main()
{
    int n,i,sum = 0;//local variables n and i are initialiazed to garbage values
    
    printf("Enter 'n' to calculate sum of 'n' numbers :");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of %d natural numbers is %d",n,sum);
}

4./* Program to check if the entered number is a perfect number or not.
/* Perfect number means --> sum of factors of the given number 'except itself' is equal to the same number. */
/* Ex: if n =6,  1,2,3 are factors of 6 and 1+2+3 = 6 , So 6 is a perfect number. */
/* Logic: So to check that we check mod(remainder) of n with all the numbers and     add the numbers which give remainder 0 (because that means they are the     factors and we need to add them and check if their sum is equal to n or     not*/
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    
    printf("Enter the number 'n' to check if its a perfect number:\n");
    scanf("%d",&n);
    
    for(i =1 ; i<n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum;
        }
    }
    
    if(sum == n)
    {
        printf("The number 'n=%d' is a perfect number\n",n);
    }
    else
    {
        printf("The number 'n =%d' is NOT a perfect number\n");
    }
}


// Printing patterns 
5. /* To print the pattern *****
                        *****
                        *****
                        *****
                        *****   with 5 rows and 5 columns */
/* printing patterns using post increment operator */
                        
                        
#include<stdio.h>
void main()
{
    int i,j;
    
    for(i = 1; i <= 5; i++)
    {
          for(j = 1; j <= 5; j++)
          {
              printf("*");
          }
          printf("\n"); //if this line is not there all * will be printed in a single line
    }
      
}


6. /* To print a left right angled triangular patter */
/* printing patterns using post decrement operator */
#include<stdio.h>
void main()
{
    int i,j; //local uninitialized varables are initialized to garbage values
    
    for(i = 5 ; i >= 1; i--)
    {
        for(j = 5; j >= i; j--)
        {
            printf("%c",'*');//("%d",i) , ("%d",j) can also be used to print numbers
        }
        printf("\n");
    }
    
      
}



7./* printing patterns using both  post increment and decrement operators */
#include<stdio.h>
void main()
{
    int i,j; //local uninitialized varables are initialized to garbage values
    
    for(i = 1 ; i <= 5; i++)
    {
        for(j = i; j >= 1; j--)
        {
            printf("%c",'*');//("%d",i) , ("%d",j) can also be used to print numbers
        }
        printf("\n");
    }
    
      
}



8./* printing patterns using both  post increment and decrement operators */
#include<stdio.h>
void main()
{
    int i,j; //local uninitialized varables are initialized to garbage values
    
    for(i = 5 ; i >= 1; i--)
    {
        for(j = i; j >= 1; j--)
        {
            printf("%c",'v');//("%d",i) , ("%d",j) can also be used to print numbers
        }
        printf("\n");
    }
    
      
}


9. /* printing patterns using both  post increment and decrement operators */
#include<stdio.h>
void main()
{
    int i,j; //local uninitialized varables are initialized to garbage values
    
    for(i = 1 ; i <= 5; i++)
    {
        for(j = 5; j >= i; j--)
        {
            printf("%c",'*');//("%d",i) , ("%d",j) can also be used to print numbers
        }
        printf("\n");
    }
    
      
}


10. /* printing a pyramid using nested for loops and operators */
/* Maximum horizontal charecters allowed onto a console in a single line is 80 */
#include<stdio.h>
void main()
{
    int n,i,j,k,c=80; //lnocal uninitialized varables are initialized to garbage values
    
    for(i = 1 ; i <= n; i++) //to traverse rows
    {
        for(j = 1 ; j <= c/2 -i ; j++) //to print spaces
        {
            printf(" ");
        }
        for(k = 1 ; k <= 2*i-1 ; k++) //to print * in odd numbers
        {
            printf("*");
        }
        
        printf("\n"); //to start from the next line 
    }
    
      
}




11./* To find factorial of a given number */

#include<stdio.h>
void main()
{
    int n,i;
    long long int fact=1;
    printf("Enter the number to find its factorial: ");
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("Factorial is not defined for negative numbers\n");
    }
    else
    {
        for(i = 1; i <= n ; i++ )
        {
            fact *= i; 
        }
        printf("Factorial of %d is = %lld",n,fact);
    }
    
    
   
}




12. /* To find sum of digits of a given number using modulus %, and division /, operators */

#include<stdio.h>
void main()
{
    int n;
    int r;
    int sum = 0;
    
    printf("Enter the number to find sum of its digits: ");
    scanf("%d",&n);
    
    while(n > 0) //fails at 0 > 0
    {
         r = n % 10; //gets the remainder
         sum = sum + r;
         n = n / 10; //gets the quotient
    }
    
    printf("Sum of digits of the number entered is : %d",sum);
   
}


13./* To find if the entered number is a perfect number or not */

#include<stdio.h>
void main()
{
    int n;
    int i;
    int sum = 0;
    
    printf("Enter the number to find if its a perefct number: ");
    scanf("%d",&n);
    
    for(i = 1 ; i < n ; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(n == sum)
    {
        printf("The number %d is a perfect number\n",n);
    }
    else
    {
        printf("The number entered is NOT a perfect number : %d",n);
    }
   
   
}


14./* To print the fibonacci series with n elements */

#include<stdio.h>
void main()
{
    int n;
    int fibo_0 = 0, fibo_1 = 1;
    int fibo_2;
    int i = 0,sum = 0;
    
    printf("Enter how many elements of fibonacci series to print: ");
    scanf("%d",&n);
    
    for(i =1 ; i <= n ; i++)
    {
        printf("%d\n",fibo_0);
        fibo_2 = fibo_0 + fibo_1;
        fibo_0 = fibo_1;
        fibo_1 = fibo_2;
    }
}



    
15. /* To check if the entered number is a palindrome or not */

#include<stdio.h>
void main()
{
    int n, r, temp,  sum = 0;
    
    printf("Enter the number to check if its a palindrome : ");
    scanf("%d",&n);
    
    temp = n;
    
    while(n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n /10;
    }
    
    n = temp;
    
    if(n == sum)
    {
        printf("The number entered is a palindrome");
    }
    else
    {
         printf("The number entered is NOT a palindrome");
    }
   
}


16./* To check if the entered number is a STRONG number or not */
/* STRONG number --> (the sum of factorials of the digits of number) = (The number itself) 
   Ex: n = 145 --> (1!+4!+5!) = (145) => 145 is a STRONG number */

#include<stdio.h>
void main()
{
   int n, r, i, fact,temp, sum = 0 ;
   
   printf("Enter a number to check its a STRONG number or not :");
   scanf("%d",&n);
   
   temp = n;
   
   while(n>0)
   {
       r = n % 10;
       fact = 1;
       for(i = r ; i >= 1 ; i--)
       {
           fact = fact * i;
       }
       sum = sum + fact;
       n = n / 10;
   }
   n = temp;
   if(n == sum)
   {
       printf("The number %d is a STRONG number");
   }
   else
   {
       printf("The number %d is NOT a STRONG number");
   }
  
}



   

17. /* Program to check if the entered number is a Armstrong number

Armstrong number --> Sum of cubes of the digits of the number = number itself.
Ex: n =154 --> 1^3 + 5^3 + 3^3 = 1+125+27 = 153 = n , So, 153 is an Armstrong number
Ex: 0,1,153,370,371 etc, are some of the 3 digit Armstrong numbers

---NOTE: Note that for a 4 digit number like 1634,9474 to check if its an Armstrong number we have to raise each digits power to 4 and them sum them to check if its equal to the number itself.
   Ex: n = 1634 --> 1^4 + 6^4 + 3^4 + 4^4 = 1634 = n, So 1634 is an Armstrong number.
*/
#include <stdio.h>
void main() 
{
    int n,r,cube,sum=0,temp;
    
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        r = n % 10;
        cube = r * r * r;
        sum = sum + cube;
        n = n / 10;
    }
    n = temp;
    
    if(n == sum)
    {
        printf("Entered integer is an ARMSTRONG number\n");
    }
    else
    {
        printf("Entered integer is NOT an ARMSTRONG number\n");
    }

}

18.







    






































































































































