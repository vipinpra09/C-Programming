Dynamic Memory Allocation (DMA) in C
1. Definition

Dynamic Memory Allocation is a method of allocating and deallocating memory at runtime, rather than at compile time.
It allows programs to use memory efficiently, especially when the size of data is not known in advance.

2. Why DMA is needed

The size of data is not fixed or known before execution.

Helps in creating dynamic data structures such as:

Linked Lists

Stacks & Queues

Trees & Graphs

Efficient memory usage: Memory is allocated only when needed.

Can expand or shrink memory during execution.

3. Memory in C

Static memory (compile-time allocation)

Fixed size arrays, global variables, local variables

Allocated in stack

Dynamic memory (runtime allocation)

Allocated using DMA functions

Allocated in heap

4. Functions for DMA (all declared in stdlib.h)
Function	Purpose	Syntax
malloc()	Allocates memory uninitialized	ptr = (datatype*) malloc(n * sizeof(datatype));
calloc()	Allocates memory and initializes it to 0	ptr = (datatype*) calloc(n, sizeof(datatype));
realloc()	Changes the size of previously allocated memory	ptr = (datatype*) realloc(ptr, new_size * sizeof(datatype));
free()	Frees allocated memory	free(ptr);
5. Syntax Details
1. malloc()
ptr = (datatype*) malloc(number_of_elements * sizeof(datatype));


Allocates a single block of memory

Memory is uninitialized

2. calloc()
ptr = (datatype*) calloc(number_of_elements, sizeof(datatype));


Allocates multiple blocks of memory

Memory is initialized to 0

3. realloc()
ptr = (datatype*) realloc(ptr, new_number_of_elements * sizeof(datatype));


Resizes previously allocated memory

Can increase or decrease size

4. free()
free(ptr);


Deallocates memory to prevent memory leaks

Always free memory after use

6. Example Program using malloc, calloc, realloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3;
    
    // malloc
    int *arr = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) arr[i] = i + 1;

    // realloc - increase size
    n = 5;
    arr = (int*) realloc(arr, n * sizeof(int));
    arr[3] = 4;
    arr[4] = 5;

    // display
    printf("Array elements: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    // free memory
    free(arr);

    return 0;
}

7. Key Points / Tips

DMA is used with pointers.

Allocated memory is in heap, static memory is in stack.

Always check if memory allocation succeeds:

if(ptr == NULL) { printf("Memory allocation failed"); }


Forgetting free() causes memory leaks.

8. Advantages of DMA

Efficient memory usage

Can handle variable-size data

Allows dynamic data structures

9. Disadvantages

Requires extra care with pointers

Can cause memory leaks if not freed

Slightly slower than static memory due to heap management

10. Short Definition (2-mark answer)

Dynamic Memory Allocation (DMA) in C is the process of allocating and deallocating memory at runtime using malloc(), calloc(), realloc(), and free() functions.
//int *arr=(int*)malloc(n*sizeof(int));
    //int *arr1=(int *)calloc(5,sizeof(int));
    // arr = (int *)realloc(arr,5*sizeof(int));
#include <stdio.h>
#include <stdlib.h>
//int *arr = (int *) malloc(5 * sizeof(int));
//ptr = (datatype *) malloc(number_of_elements * sizeof(datatype));


//ptr = (datatype *) calloc(number_of_elements, sizeof(datatype));
//int *arr = (int *) calloc(5, sizeof(int));

//arr = (int *) realloc(arr, 10 * sizeof(int));
//ptr = (datatype *) realloc(ptr, new_number_of_elements * sizeof(datatype));

int main() {
    // Write C code here
    int n = 5;
    int *arr= (int*)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed..");
        return 1;
    }
    else{
        printf("memory allocation succesfull...\n");
    }
    for(int i = 0;i<n;i++){
        arr[i]=i+1;
    }
    for(int i = 0;i<n;i++){
        printf("%d\v",arr[i]);
    }
    printf("\n");
    int *arr1 =(int *)calloc(n,sizeof(int));
    if(arr1 == NULL){
        printf("Memory allocation failed..");
        free(arr);
        return 1;
    }
    else{
        printf("memory allocation succesfull...\n");
    }
    for(int i = 0;i<n;i++){
        arr1[i]=i+1;
    }
    for(int i = 0;i<n;i++){
        printf("%d\v",arr1[i]);
    }
    /* Use a temporary pointer so arr is not lost if realloc fails */
    int *tmp = (int *)realloc(arr, n * sizeof(int));
    if(tmp == NULL){
        printf("Reallocation failed..");
        free(arr);
        free(arr1);
        return 1;
    }
    free(tmp);
    free(arr1);
    return 0;
    
}
