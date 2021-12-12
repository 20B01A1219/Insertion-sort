#include <stdio.h>
#include <stdlib.h>
void display(int[], int);
void insert_sort(int[], int);
int main()
{
    int a[10], i, size;
    printf("\nEnter the size of array       :");
    scanf("%d",&size);
    printf("\nEnter the elements of array   : ");
    for(i = 0;i < size;i++)
    {
        printf("\nEnter %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nElements before sorting\t:");
    display(a,size);
    insert_sort(a,size);
    printf("\nElements after sorting\t:");
    display(a,size);

    return 0;
}
// Display function
void display(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
}

//InsertionSort function
void insert_sort(int arr[],int size)
{
    int i, j,key;
    for(i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j] = key;
    }
}
