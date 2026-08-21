#include <stdio.h>

int main() {
    int s,pos;
    printf("Enter Size of array:");
    scanf("%d",&s);
    int arr[s];
    printf("Enter element in array:\n");
    for(int i = 0 ; i < s; i++){
        printf("Enter element at arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter position to delete:");
    scanf("%d",&pos);
    for(int i = pos -1; i < s;i++){
        arr[i] = arr[i+1];
    }
    s--;
    for(int i = 0 ; i < s; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
