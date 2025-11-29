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
    for(i =n; i >= 0; i--)
    {
        for(int j = 0 ; j <= n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
             temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i = 0; i <= n; i++)
    {
    printf("%d\n",arr[i]);
    }
    return 0;
}