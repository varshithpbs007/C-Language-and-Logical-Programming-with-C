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
    if(a == b) return; /* 1st disadvantage of swap with out temp is data is lost if both variables point to the same address, and 2nd disadvantage is we can only swap integers and cannot swap char or float values without temp */
    
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}




