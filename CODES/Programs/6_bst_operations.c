#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newnode(int x)
{
    struct node *p;

    p = malloc(sizeof(struct node));

    p->data = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}

struct node *insert(struct node *root, int x)
{
    if(root == NULL)
        return newnode(x);

    if(x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);

    return root;
}

void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int search(struct node *root, int key)
{
    if(root == NULL)
        return 0;

    if(root->data == key)
        return 1;

    if(key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

int main()
{
    struct node *root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    inorder(root);

    if(search(root, 40))
        printf("\nFound");
    else
        printf("\nNot Found");

    return 0;
}
