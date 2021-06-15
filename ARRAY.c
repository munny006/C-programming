#include<stdio.h>
void insert(int arr[],int pos,int n,int item)
{
    int i;
    for(i=n; i>pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = item;
}

void del(int arr[], int deletepos, int n)
{
    int i;
    for(i=deletepos; i<n; i++)
        arr[i] = arr[i+1];
}

void update(int arr[], int n, int olditem, int newitem)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==olditem)
            arr[i] = newitem;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[100], n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int item;
    printf("Enter the item to insert in the array: ");
    scanf("%d", &item);
    printf("Enter the position to insert the item: ");
    int pos;
    scanf("%d", &pos);
    insert(arr, pos, n++, item);
    printf("\nAfter Inserting: ");
    printArray(arr, n);

    int deletepos;
    printf("Enter the position to delete: ");
    scanf("%d", &deletepos);
    del(arr, deletepos, n--);
    printf("\nAfter Deleting: ");
    printArray(arr, n);

    int olditem, newitem;
    printf("Enter two items to update: ");
    scanf("%d %d", &olditem, &newitem);
    update(arr, n, olditem, newitem);
    printf("\nAfter Updating: ");
    printArray(arr, n);

}
