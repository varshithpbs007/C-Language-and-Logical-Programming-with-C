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


/* 2. Finding the length of a string */

