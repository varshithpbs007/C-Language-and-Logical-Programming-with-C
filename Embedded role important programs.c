/* 1. Reversing a string using the in-built strlen() function of string.h library */
#include<stdio.h>
#include<string.h>
int main()
{
    char name[] = "Varshith";
    int len = strlen(name);
    int i=0,j=len-1;
    char temp;
    while(i<j)
    {
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
        j--;
    }
    /*
    for(int k=0; k<len ; k++)
    {
        printf("%c",name[k]);
    }
    */printf("%s",name);
    
    return 0;
}


/* 2. Finding the length of a string with out the inbuilt library function */
#include<stdio.h>
int main()
{
    int len = 0;
    int i=0;
    char name[] = "Varshith";
    while(name[i] != '\0')
    {
        i++;
        len++;
    }
    printf("Length of the string is %d",len);
    
    return 0;
}


/* 3. Swap variables without using any temp variable and by using XOR */
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a = 10;
    int b = 5;
    printf("Before swap: a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("After swap: a = %d, b = %d",a,b);
    return 0;
}

void swap(int* a, int* b)
{
    if(a == b) return; /* 1st disadvantage of swap without temp is data is lost if both variables point to the same address, and 2nd disadvantage is we can only swap integers and cannot swap char or float values without temp */
    
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}


/* 4. Stack implementation and its operations using a static array*/

#include <stdio.h>
#include<stdlib.h>

#define CAPACITY 3 //Preprocessor Macro
int stack[CAPACITY]; //Passing macro as array size
int top = -1;

void push(int);
int isFull(void);
int pop(void);
int isEmpty(void);
void peek(void);
void traverse(void);

int main(void) {
    
   int choice;
   int element;
   int item;
   while(1)
   {
       printf("1.push\n");
       printf("2.pop\n");
       printf("3.peek\n");
       printf("4.traverse\n");
       printf("5.quit\n"); 
       
       printf("Enter your choice:");
       scanf("%d",&choice);
       
       switch(choice)
       {
           case 1 : printf("Enter element to push:");
                    scanf("%d",&element);
                    push(element);
                    break;
           case 2 : item = pop();
                    if(item == 0)
                    {
                        printf("Stack is Empty");
                    }
                    else
                    {
                        printf("popped element is %d\n",item);
                    }
                    break;
           case 3 : peek();
                    break;
           case 4 : traverse();
                    break;
           case 5 : exit(0);
                    break;
           default : printf("Invalid input \n\n");
       }
   }
   
   return 0;
}

void push(int ele)
{
    if(isFull())
    {
        printf("Stack is Full\n");
    }
    else
    {
      top++;
      stack[top] = ele;
      printf("Element %d pushed onto the stack\n",ele);
    }
  
}

int isFull()
{
    if(top == CAPACITY-1)
    {
        return 1;  
    }
    else
    {
        return 0;
    }
}

int pop()
{
   if(isEmpty())
   {
       return 0;
   }
   else
   {
       return stack[top--];
   }
}

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0; 
    }
}

void peek()
{
    if(isEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {
      printf("Top element is %d\n",stack[top]);
    }
}

void traverse()
{
    if(isEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for(int i = 0 ; i <= top ; i++)
        {
            printf("%d\n",stack[i]);
        }
    }
}



/* 4. Removing duplicates from an array */
#include<stdio.h>
int main(void)
{
    int size;
    int i,j,k,n;
    
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter elements(along with duplicates) to store in the array:\n");
    
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }

   
    
    // removing duplicate elements from the array
    for(i = 0 ; i < size ; i++)
    {
        for(j = i+1 ; j < size ; j++)
        {
          if(arr[i] == arr[j])
          {
              for(k = j ; k < size-1; k++)
              {
                  arr[k] = arr[k+1];
              }
              size--; //size reduces after removing one duplicate
              j--; //to make sure new shifted element is also compared (other wise j++ will go and the element came into index from where duplicate is removed will not be checked)
          }
        }
    }
    
    printf("After removing the duplicates , the array elements are:\n");
    for(n = 0; n < size ; n++)
    {
        printf("%d\t",arr[n]);
    }
    
    return 0;
}


/* 5. Endianess check (method 1) */
#include<stdio.h>
#include<stdint.h>
int main(void)
{
    uint32_t num = 0x12345678;
    uint8_t *byte_addr = (uint8_t*)&num; //Typecasting the 32-bit variable’s address to a pointer that accesses memory as 8-bit chunks (bytes) and storing it in a uint8_t pointer.
    if(*byte_addr == 0x78)
    {
        printf("System is Little Endian.\n");
    }
    else
    {
        printf("System is Big Endian.\n");
    }
    
    return 0;
}


/* 6. Endianess check (method 2) */
#include<stdio.h>
#include<stdint.h>
int main(void)
{
    union{
        uint32_t a;
        uint8_t b;
    }u; // a and b start at the same address and they overlap completely and they point to the same address
    
    u.a = 0x1;
    if(u.b == 0x1)
    {
        printf("System is Little Endian.\n");
    }
    else
    {
        printf("System is Big Endian.\n");
    }
    
    return 0;
}


/*-----------------------------------------------------POINTERS-------------------------------------------------*/


// 1. 
#include <stdio.h>
void main()
{
    int i = 100;
    int* ptr = &i;
    printf("%d\n",i); // 100
    printf("%d\n",ptr); // address of i
    printf("%u\n",&i); // address of i, int variable
    printf("%u\n",&ptr); // address of ptr, int pointer variable
    printf("%d\n",*ptr); // 100
    printf("%u\n",*(&i)); // 100
}

//2.
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10];
    char str[] = "Linux";
    char* p = str; // p is the pointer to the first element in the character array 'L'. ~ char* p = &str[0]
    // sizeof() and strlen() return size_t (not int), so the format specifier must be preferably %zu (not %d)
    printf("Size of arr is %zu\n",sizeof(arr)); // 10
    printf("Length of str is %zu\n",strlen(str)); // 5
    printf("Size of str is %zu\n",sizeof(str)); // 6, beacause "\0" is also included in size
    return 0;
}




