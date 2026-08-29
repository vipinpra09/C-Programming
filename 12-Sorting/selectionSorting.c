#include <stdio.h>
void selectionSort(int arr[] , int n){
    int min = arr[0];
    int loc;
    for(int i = 0 ; i < n ; i++){
        min = arr[i];
        loc = i;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < min){
                min = arr[j];
                loc = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }
}
int main() {
    int arr[] = {1,5,3,4,7};
    selectionSort(arr,5);

    for(int i = 0 ; i < 5 ; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}
