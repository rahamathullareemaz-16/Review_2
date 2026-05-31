#include <stdio.h>
int s1[100], s2[100];
int t1 = -1, t2 = -1;
void enqueue(int x)
{
    s1[++t1] = x;
}
void dequeue()
{
    while(t1 != -1)
    {
        s2[++t2] = s1[t1--];
    }

    if(t2 == -1)
    {
        printf("Empty");
        return;
    }

    printf("%d deleted\n", s2[t2--]);

    while(t2 != -1)
    {
        s1[++t1] = s2[t2--];
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    return 0;
}
