#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Enter string");
        return 0;
    }
    printf("%lu", strlen(argv[1]));
    return 0;
}
