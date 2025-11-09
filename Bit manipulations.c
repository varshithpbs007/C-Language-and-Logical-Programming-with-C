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



// 2. /* Program to check number of set bits (1's) in binary representation of the inputted number by the user.
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



// 3. 


