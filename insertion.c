#include<stdio.h>
int insertEnd(int arr[], int n, int key)
{
    arr[n] = key;
    return (n + 1);
}
int insertanypos(int arr[], int n, int x, int pos)
{
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = x;
    return (n + 1);
}
void insertBeg(int arr[], int n, int x)
{

    for (int i = n - 1; i >= 0; i--)
        arr[i + 1] = arr[i];

    arr[0] = x;

}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    int  key;
    printf("Enter value to add:");
    scanf("%d",&key);
    printf("Before Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ",arr[i]);
    n = insertEnd(arr, n, key);

    printf("\n After Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ",arr[i]);

    int  pos;
    printf("\nEnter position to add:");
    scanf("%d",&pos);
    printf("Enter value to add:");
    scanf("%d",&key);
    n=insertanypos(arr, n, key, pos);

    printf("\n After Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ",arr[i]);

    printf("\nEnter value to add:");
    scanf("%d",&key);
    insertBeg(arr,n,key);
    printf("\n After Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ",arr[i]);
    return 0;
}
