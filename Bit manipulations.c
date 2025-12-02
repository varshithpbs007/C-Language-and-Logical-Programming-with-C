/* -----------------------------------IMPORTANT PROGRAMS ON BIT MANIPULATIONS------------------------------------- */

1. /* Program to check if the entered number is a power of 2 */

#include<stdio.h>

void check_if_poweroftwo(int num)
{
    if((num>2) && (num &(num-1)) == 0)
    {
        printf("number %d is a power of 2\n");
    }
    else
    {
        printf("number %d is NOT a power of 2\n");
    }
}

void main()
{
    int n;
    
    printf("Enter a number = ");
    scanf("%d",&n);
    check_if_poweroftwo(n);
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


8. /* Adding two numbers using bitwise operators */

#include<stdio.h>

int main()
{
    int a,b;
    int carry;
    
    printf("Enter a = \n");
    scanf("%d",&a);

    printf("Enter b = \n");
    scanf("%d",&b);
    
    while(b != 0)
    {
        carry = a & b; //finds carry whenever both bits are 1 and these postions generate carry
        a = a ^ b; // performs addition without carry
        b = carry << 1; //shift carry to correct position to add in next iteration. The carry must be added in the next most significant bit position
    }
    
    printf("Sum = %d",a);
    return 0;
}


9. /* To print a number in binary on to the screen */

/* Summary of the logic:

1. Loop over each bit from MSB to LSB

2. Right-shift the number so the target bit comes to position 0

3. Mask with & 1 to isolate the bit

4. Print it
*/

#include <stdio.h>
void printbinary(int num)
{
   printf("Number %d in binary is:\t",num);
   for(int i = 7 ; i >= 0 ; i-- )
   {
       printf("%d",(num>>i) & 1); //right shifting moves the ith bit to lsb and exposes it, and then bitwise and(&) with 1 extracts the lowest bit
   }
}

int main()
{
    int number;
    printf("Enter a number to print in binary:\t");
    scanf("%d",&number);
 
    printbinary(number);
    return 0;
}




10. /* To set every alternate bit in a 8-bit number */


11. /* To reset any bit --> CONCEPT: 
    

