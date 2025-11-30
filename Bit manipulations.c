/* -----------------------------------IMPORTANT PROGRAMS ON BIT MANIPULATIONS------------------------------------- */

1. /* Program to checkif the entered number is a power of 2 */

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



2. /* Program to check number of set bits (1's) in binary representation of the inputted number by the user.
---> Logic used used is we " to clear the right most set bit in n using n & (n-1) " and count how many times we had to clear right most bit until n becomes 0. */
/* Brian Kernighan's algorthm */

#include<stdio.h>
int main()
{
    int n,count = 0;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    while(n != 0)
    {
        n = n & (n-1);
        count++;
    }
    
    printf("No of set bits (1's) in the entered number is = %d",count);
}



3. /* Program to isolate the right most set bit and make remaining 0's in binary representation of the inputted number by the user.
---> Trick used is n = n & -n where (-n = ~n +1)*/

#include<stdio.h>

int rightmostsetbit(int n)
{
    return (n & -n);
}
int main()
{
    int n;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    printf("%d After the right most set bit is isoalted is %d",n, rightmostsetbit(n));
}



4. /* Program to swap two numbers without using a temporary variable.
Concept : Use XOR properties like 1. a ^ b ^ a = b ( because a^ a = 0)
                                  2. a ^ a = b ^ b = 0
                                  3. a ^ 0 = a , b ^ 0 = b */

#include<stdio.h>

void swap(int *x, int *y) //varibles are passed by reference so that the orignal values can be modified at the address passed.
{
    if (x == y) return;  // Important: avoid if both point to same location
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
    

    
}
int main()
{
    int a,b;
    
    printf("Enter numbers to swap : \n");
    scanf("%d %d",&a,&b);
    
    printf("variables before swapping : %d, %d\n",a,b);
    swap(&a, &b);
    printf("Variables after swapping : %d, %d", a,b);
    
    return 0;
}



5. /* Program to check if two entered numbers have opposite signs */

#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter numbers to check : \n");
    scanf("%d %d",&a,&b);
    
    if((a ^ b) < 0)
    {
        printf("%d and %d have DIFFERENT SIGNS",a,b);
    }
    else
    {
         printf("%d and %d have SAME SIGNS",a,b);
    }
    
     return 0;
}



6. /* Program to reset a bit at a given position */

#include<stdio.h>

int main()
{
    unsigned int num,result;
    int pos;
    
    printf("Enter a number:\n");
    scanf("%d",&num);
    
    printf("Which position to reset in the number:\n");
    scanf("%d",&pos);
    
    result =  num & ~(1<<pos);
    
    printf("After resetting result = %d",result);
    return 0;
}


7. /* To replace the nth positioned bit in a given number with digit '1' */

#include<stdio.h>

int main()
{
    unsigned int num;
    int pos;
    
    printf("Enter a number:\n");
    scanf("%u",&num);
    
    printf("Number before replacement = %u\n",num);
    
    printf("Which position to replace in the number with '1' :\n");
    scanf("%d",&pos);
    
    num =  num | (1<<pos);
    
    printf("After replacement number = %u\n",num);
    return 0;
}


8. 
    

