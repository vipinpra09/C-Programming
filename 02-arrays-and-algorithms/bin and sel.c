#include <stdio.h>

int main() {
    int arr[] = {29, 10, 14, 37, 14};
    int n = 5;

    for(int i = 0; i < n-1; i++) {
        int min_idx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int arr[] = {10, 14, 14, 29, 37};
    int n = 5;
    int key = 29;
    int low = 0, high = n - 1, mid;
    int found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found)
        printf("%d found at position %d\n", key, mid);
    else
        printf("%d not found\n", key);

    return 0;
}
