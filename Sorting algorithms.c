/* -------------BUBBLE SORT ALGORITHM---------------*/
//Bubble sort algorithm to sort an array in ascending order
#include <stdio.h>
void bubblesort(int [],int);

int main() {
    int arr1[6] = {6,5,4,3,2,1};//array with unsorted elements
    int n = sizeof(arr1)/sizeof(int);
    printf("Before sorting elements of the array are:\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",arr1[i]);
    }
    bubblesort(arr1,n);
    printf("\n");
    printf("After sorting elements of the array are:\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",arr1[i]);
    }
    return 0;
}

void bubblesort(int arr[], int size)
{
    int temp;
    for(int i = 0 ; i < size-1 ; i++)
    {
        for(int j = 0 ; j < size-i-1 ; j++)
        {
            if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        
        }
    }
    
}
