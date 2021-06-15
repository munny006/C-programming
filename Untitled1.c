#include<stdio.h>

void insert(int arr[], int n)
{
    int item, position;
    scanf("%d %d", &item, &position);
    int i;
    for(i=n; i>position; i--)
        arr[i] = arr[i-1];
    arr[i] = item;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[100];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    insert(arr, n);
    for(i=0; i<=n; i++)
        printf("%d ", arr[i]);
    return 0;
}
