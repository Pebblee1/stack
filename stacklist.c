#include <stdio.h>
#include <stdlib.h>

typedef struct s
{
    int info;
    struct node *next;
}node;

struct node *top = NULL;

void push(int data)
{
    struct node *new_node;
    struct node *p
    p = (*node)malloc(sizeof(node));
    p->info = data;
    p->next = top;
}

void pop()
{
    if (top == NULL)
        printf("Stack underflow");
    else
    {
        
    }
}

void display()
{
    if (top == NULL)
        printf("Stack underflow");
    return -1;
    else
    {
    }
}

int main()
{
    push();
    pop();
    printf();
    return = 0;
}