#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    double sum = 0, mean, var = 0, sd=0;
    scanf("%d", &n);
    double arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
        sum += arr[i];
    }
    mean = sum/n;
    for(i =0;i<n;i++){
        var += pow(arr[i] - mean, 2);
}
    var = var/n;
    sd = sqrt(var);
    printf("Mean = %.2lf\n", mean);
    printf("Variance = %.2lf\n", var);
    printf("Std Dev = %.2lf\n", sd);
    return 0;
}
