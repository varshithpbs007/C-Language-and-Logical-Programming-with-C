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

18. // Program to swap two variables using pointers from taking input from the user
#include <stdio.h>
void swap(int*,int*); //Function prototype must have a semicolon at the end

int main() {
    
    int a = 0 ,b = 0 ;
    printf("Enter the values to be swapped :\n");
    scanf("%d %d", &a, &b);
    int *x, *y;
    x = &a;
    y = &b;
    swap(x,y);
    printf("Values after swapping are : %d %d",a,b);
    
  return 0;  

}
void swap(int* x,int* y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}



19. /* Demonstrate difference between:
   1) Constant pointer
   2) Pointer to a constant

   GOLDEN RULE: Look where "const" is placed.
   - If "const" is after '*'  => pointer is constant:  int *const p;
   - If "const" is before '*' => value is constant:    const int *p;
*/

#include <stdio.h>

int main(void) {
    int a = 5, b = 7;

    /* 1) Constant pointer (pointer itself is constant, value can change) */
    int *const q = &b;   // q always points to b; q cannot be reassigned
    *q = 8;              // allowed: modifies the value at the pointed location (b)

    // q = &a;           // error if uncommented: assignment of read-only variable 'q'

    /* 2) Pointer to a constant (value is protected via this pointer; pointer can change) */
    const int *p = &a;   // p points to a value that cannot be modified through p
    a = 6;               // allowed: modifying 'a' directly is fine

    // *p = 7;           // error if uncommented: assignment of read-only location '*p'
    // p = &b;           // allowed: p can be repointed to another int

    printf("a = %d, b = %d\n", a, b);
    return 0;
}



20. // Demonstration of malloc(), realloc(), free()

//Inlcuding all the necessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining a structure to store employee details
struct employee {
    int empid ;
    char empname[20];
    float empsal ;
    
};

//using typedef for convinience to create an alias name for the userdefined data type
typedef struct employee emp;

// main function
int main(void)
{
    
    emp *p = NULL;
    int current_size = 4;
    int new_size = 5;
    
    // --- 1. malloc() Demonstration: Allocate memory for 4 employees ---
    printf("--- 1.using malloc() ---\n");
    // Allocating memory for 4 employees
    p = (emp*)malloc(current_size*sizeof(emp));
    
    //  Checking if allocation was successful
    if(p == NULL)
    {
        perror("Initial malloc failed");
        return EXIT_FAILURE;
    }
    
    // Initializing the first element (p[0]) 
    p[0].empid = 101;
    strncpy(p[0].empname,"Sameer",sizeof(p[0].empname)-1);
    p[0].empname[sizeof(p[0].empname)-1] = '\0'; //ensuring null termination for the empname string
    p[0].empsal = 50000;
    
    // Initializing the second element (p[1])
    p[1].empid = 102;
    strncpy(p[1].empname, "Rajeev", sizeof(p[1].empname)-1);
    p[1].empname[sizeof(p[1].empname)-1] = '\0';
    p[1].empsal = 50000;
    
    // Initializing the third element (p[2])
    p[2].empid = 103;
    strncpy(p[2].empname, "Mayank", sizeof(p[2].empname) -1);
    p[2].empname[sizeof(p[2].empname - 1)] = '\0';
    p[2].empsal = 50000;
     
    // Initializing the fourth element (p[3])
    p[3].empid = 104;
    strncpy(p[3].empname, "Apoorva" , sizeof(p[3].empname) -1);
    p[3].empname[sizeof(p[3].empname -1)] = '\0';
    p[3].empsal = 50000;
    
    printf("Initial allocation size = %d elements\n",current_size);
    printf("Employee 1 (p[0]) : ID = %d, Name = %s, Salary = %.2f\n",p[0].empid, p[0].empname, p[0].empsal);
    printf("Employee 2 (p[1]) : ID = %d, Name = %s, Salary = %.2f\n",p[1].empid, p[1].empname, p[1].empsal);
    printf("Employee 3 (p[2]) : ID = %d, Name = %s, Salary = %.2f\n",p[2].empid, p[2].empname, p[2].empsal);
    printf("Employee 4 (p[3]) : ID = %d, Name = %s, Salary = %.2f\n",p[3].empid, p[3].empname, p[3].empsal);
    
    // --- 2. realloc() Demonstration: Resize memory to 5 employees
    printf("\n --- 2. Using realloc() ---\n");
    printf("Resizing memory to %d elements...\n",new_size);
    
    // reallocating memory for 5 'emp' structures
    emp* temp = (emp*)realloc(p, new_size*sizeof(emp));
    
    // Checking if reallocation is successful
    if(temp == 0)
    {
        perror("Reallocation failed");
        // if reallocation fails, the original pointer 'p' is still valid, so we free it.
        free(p);
        return EXIT_FAILURE;
    }
    
    // if realloc successful, update the pointer 'p'
    p = temp;
    
    // Initializing the newly allocated 5th element (p[4])
    p[4].empid = 105;
    strncpy(p[4].empname, "Lakshmi", sizeof(p[4].empname) -1);
    p[4].empname[sizeof(p[4].empname)-1] = '\0';
    p[4].empsal = 50000;
    
    printf("Memory successfully reallocated.\n");
    printf("Checking if old data is preserved...\n");
    printf("Employee 1 (p[0]) : ID = %d, Name = %s, Salary = %.2f\n",p[0].empid, p[0].empname, p[0].empsal);
    printf("Checking newly initialized element...\n");
    printf("Employee 5 (p[4]) : ID = %d, Name = %s, Salary = %.2f\n",p[4].empid, p[4].empname, p[4].empsal);
    
    // --- 3. free() Demonstration: Release the allocated memory ---
    printf("\n --- 3. Using free() ---\n");
    free(p); //If we wont free it may become a dangling pointer
    p = NULL; //After freeing we need to make it null to avoid it becoming a wild pointer
    printf("Memory Seccessfully freed.\n");
    
    return EXIT_SUCCESS;
    
    
}



21. /* C program to reverse an user inputted number  */

#include<stdio.h>

int main()
{   
   int num;
   int rem=0,reverse_num=0;
   
   printf("Enter a number:\t");
   scanf("%d",&num);
   
    while(num > 0)
   {
       rem = num % 10;
       reverse_num = reverse_num*10 + rem;
       num = num / 10;
   }
   printf("Reveresed number:\t%d",reverse_num);
   return 0;
}


22. // malloc() and free() for dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    ptr = (int*)malloc(10*sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    
    ptr[0] = 50;
    ptr[1] = 12;
    
    printf("Base address of dynamically allocated memory is: %p\n",(void*)ptr);
    
    printf("%d\n",ptr[0]);
    printf("%d\n",*(ptr+1));
    printf("%d\n",ptr[1]);
    
    
    free(ptr);
    

    return 0;
}


23. // to insert element 30 at location 2 of arr
#include<stdio.h>
int main()
{
    int arr[5] = {2,4,6,8};
    int current_size = 4;
    
    int loc = 2;
    int ele = 30;
    
    if(current_size >=5)
    {
        printf("Array is Full");
        return 1;
    }
    
    
    for ( int i = current_size ; i >= loc ; i--)
    {
        arr[i+1] = arr[i];
    }
    
    arr[loc] = ele;
    
    current_size++;
    
    for(int i = 0 ; i < current_size ; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}






    






































































































































