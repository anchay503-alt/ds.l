#include <stdio.h>

int main()
{
    int arr[20], n, i, item, pos;

    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("Enter array:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position where value is to be inserted: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position\n");
        return 1;
    }

    printf("Enter the value to be inserted: ");
    scanf("%d", &item);

    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = item;
    n++;

    printf("Array after the insertion:\n");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}