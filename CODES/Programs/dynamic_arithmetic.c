#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, sum = 0, max, min;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        }
    max = min = arr[0];
    for(i = 0; i < n; i++)
    {
        sum += arr[i];
        if(arr[i] > max){
            max = arr[i];
}
        if(arr[i] < min){
            min = arr[i];
            }
    }
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    free(arr);
    return 0;
}
