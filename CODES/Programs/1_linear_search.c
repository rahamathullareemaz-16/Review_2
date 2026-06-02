#include <stdio.h>
int main()
{
    int n, i, target, f = 0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
}
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(a[i] == target)
        {
            printf("Found at position %d",i+1);
            f = 1;
            break;
        }
    }
    if(f == 0){
        printf("Not Found");
}
    return 0;
}
