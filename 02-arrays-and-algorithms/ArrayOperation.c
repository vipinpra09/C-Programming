#include <stdio.h>

void create(int a[], int *n)
{
    int i;

    printf("Enter size: ");
    scanf("%d", n);

    printf("Enter elements:\n");
    for(i = 0; i < *n; i++)
        scanf("%d", &a[i]);
}

void insert(int a[], int *n)
{
    int pos, value, i;

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);

    for(i = *n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    (*n)++;
}

void delete(int a[], int *n)
{
    int pos, i;

    printf("Enter position: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < *n - 1; i++)
        a[i] = a[i + 1];

    (*n)--;
}

void traverse(int a[], int n)
{
    int i;

    printf("Array elements:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[100], n;

    create(a, &n);

    printf("\nOriginal array:\n");
    traverse(a, n);

    insert(a, &n);
    printf("\nAfter insertion:\n");
    traverse(a, n);

    delete(a, &n);
    printf("\nAfter deletion:\n");
    traverse(a, n);

    return 0;
}