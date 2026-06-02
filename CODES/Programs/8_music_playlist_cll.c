#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct n
{
    char song[50];
    struct n *next;
};

struct n *head = NULL;

void add(char s[])
{
    struct n *newnode = malloc(sizeof(struct n));
    strcpy(newnode->song, s);

    if(head == NULL)
    {
        head = newnode;
        newnode->next = head;
        return;
    }

    struct n *temp = head;
    while(temp->next != head){
        temp = temp->next;
}
    temp->next = newnode;
    newnode->next = head;
}

void show(int k)
{
    struct n *temp = head;
    int i = 0;
    while(i < k)
    {
        printf("%s\n", temp->song);
        temp = temp->next;
        i++;
    }
}

int main()
{
    add("Song1");
    add("Song2");
    add("Song3");
    add("Song4");
    add("Song5");

    show(10);

    return 0;
}
