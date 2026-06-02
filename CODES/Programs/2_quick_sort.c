#include <stdio.h>

void quick(int arr[], int low, int high)
{
    int i, j, p, temp;

    if(low < high)
    {
        p = low;
        i = low;
        j = high;

        while(i < j)
        {
            while(arr[i] <= arr[p] && i < high)
                i++;

            while(arr[j] > arr[p])
                j--;

            if(i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[p];
        arr[p] = arr[j];
        arr[j] = temp;

        quick(arr, low, j - 1);
        quick(arr, j + 1, high);
    }
}

int main()
{
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quick(arr, 0, n - 1);

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
