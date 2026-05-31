#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[100];
    int n;
    scanf("%s", s);
    n = atoi(s);
    if(n < 1 || n > 100)
    {
        printf("OUT OF RANGE");
        return 0;
    }
    printf("VALID INPUT");
    return 0;
}
