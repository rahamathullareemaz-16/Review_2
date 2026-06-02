#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[100], t[100];
    int i, j = 0;
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++)
    {
        if(isalnum(s[i])){
            t[j++] = tolower(s[i]);
    }
    }
    t[j] = '\0';
    printf("%s", t);
    return 0;
}
