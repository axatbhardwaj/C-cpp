#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;
void functions()
{
    while (1)
    {
        int x;
        printf("Enter the operations you want to perform\n");
        printf("1)PUSH\n2)POP\n3)TRAVERSE\n4)Exit");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Input\n");
        }
    }
}
void push()
{
    char ch = 'y';
    while (ch == 'y')
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data of new node\n");
        scanf("%d", &newnode->data);
        newnode->link = top;
        top = newnode;
        printf("\nDo yo want to Insert more Information (y/n)\n");
        scanf("%ch", &ch);
    }
}
void pop()
{
    int pos;
    int i = 0;
    struct node *temp;
    temp = top;
    printf("How many Element would you  POP out\n");
    scanf("%d", &pos);
    while (i != pos--)
    {
        top = top->link;
        temp->link = NULL;
        free(temp);
        i++;
    }
}
void traverse()
{
    struct node *var;
    if (top == NULL)
        printf("Stack is Empty\n");
    else
    {
        var = top;
        while (var != 0)
        {
            printf("%d", var->data);
            var = var->link;
        }
    }
}