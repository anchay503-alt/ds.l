#include <stdio.h>

void quick(int a[], int L, int R)
{
    int i = L, j = R;
    int p = a[(L + R) / 2];
    int T;

    while (i <= j)
    {
        while (a[i] < p)
            i++;

        while (a[j] > p)
            j--;

        if (i <= j)
        {
            T = a[i];
            a[i] = a[j];
            a[j] = T;

            i++;
            j--;
        }
    }

    if (L < j)
        quick(a, L, j);

    if (i < R)
        quick(a, i, R);
}

int main()
{
    int a[30], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quick(a, 0, n - 1);

    printf("Ordered form:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}