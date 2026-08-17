#include <stdio.h>
int main()
{   
    printf("Bubble Sorting Algorithm:\n ");
    int n,i,temp;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++)
    {   
       printf("Enter %d index value in array:",i);
        scanf("%d",&arr[i]);
    }
    /* Optimised bubble sort: shrink the unsorted range each pass and
       stop early if no swap occurred (already-sorted input: O(n)). */
    for(i = n - 1; i > 0; i--)
    {
        int swapped = 0;
        for(int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1])
            {
             temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
             swapped = 1;
            }
        }
        if(!swapped) break;
    }
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
    printf("%d\n",arr[i]);
    }
    return 0;
}