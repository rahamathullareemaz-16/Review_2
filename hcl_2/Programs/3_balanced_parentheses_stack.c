#include <stdio.h>

char st[100];
int top = -1;

void push(char ch)
{
    st[++top] = ch;
}

char pop()
{
    return st[top--];
}

int main()
{
    char s[100];
    int i,f= 1;
    scanf("%s",s);
    for(i = 0; s[i]!='\0';i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            push(s[i]);
}
        else
        {
            if(top == -1)
            {
                f = 0;
                break;
            }
            char x = pop();
            if((s[i] == ')' && x != '(') ||
               (s[i] == ']' && x != '[') ||
               (s[i] == '}' && x != '{'))
            {
                f = 0;
                break;
            }
        }
    }

    if(top != -1){
        f = 0;
}
    if(f){
        printf("Balanced");
        }
    else{
        printf("Not Balanced");
}
    return 0;
}
