#include<stdio.h>
int main()
{
    int array[100],size,i,pos,element;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Hello\n");
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Elements of array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d \n",array[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&element);
    int beg=0,end=size-1;
    while(beg<=end)
    {
        int mid = (beg+end)/2;
        if(array[mid]==element)
        {
            printf("%d found at index %d",element,mid);
            return 0;
        }
        else if(element>array[mid])
        {
            beg = mid+1;
        }
        else
            end = mid-1;
    }
    printf("%d not found in array!",element);
    return 0;
}