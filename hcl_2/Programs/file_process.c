#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char s[100];
    fp = fopen("data.txt", "r");
    if(fp == NULL){
        return 0;
        }
    while(fgets(s, sizeof(s), fp))
    {
        s[strcspn(s, "\n")] = '\0';
        printf("%s\n", s);
    }
    fclose(fp);
    return 0;
}
