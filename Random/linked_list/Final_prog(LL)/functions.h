#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int ch_del = 0;
int ch = 0, counting = 0;
int pos;
int pos1;
int con = 0;
int data_del, data_del2;
int pos_del = 0;
int n = 1;
int ch_in = 0;
int cout_deletion = 0;
int run = 0;
int r = 0;

void see_data();
void del_data();
void in_data();
void menu();
void choice();

struct node
{
    int data;
    struct node *next;
    // int node_no;
} *head = 0, *temp, *temp2, *newnode, *temp3;

void menu()
{

    /* printf("\n\n\n");

    printf(" c->  %d", counting);
    printf(" d->  %d", cout_deletion);

    printf("\n\n\n");
    */
    printf("What do you want to do ?\n\n");
    printf("1)   Enter data \n2)   Delete data \n3)   Traverse  \n4)   Exit\n\n");
    printf("input :- ");
    scanf("%d", &ch);

    choice();
}

void in_data()
{
    printf("\n\nwhere do you want to insert the data ?\n");
    printf(" 1) start new / next node\n 2) In between\n 3) at the end\n\n");
    printf("Input :- ");
    scanf("%d", &ch_in);

    switch (ch_in)
    {
    case 1:
        //SIMPLE INSERTION / At start

        do
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (head == 0)
            {
                head = temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
            printf("Enter data :-   ");
            scanf("%d", &newnode->data);
            counting++;
            //temp->next = NULL;
            printf("\nDo you want to enter the data again ?(1/0) :- ");
            scanf("%d", &con);
        } while (con == 1);
        menu();
        break;
    case 2:
        // in between
        if (counting > 0)
        {
            printf("\n\nEnter the position you want to add the node :- ");
            scanf("%d", &pos1);
            temp = head;

            for (int i = 1; i <= pos1; i++)
            {
                temp = temp->next;
            }

            if (temp->next == 0)
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                temp->next = newnode;
                temp = newnode;
                printf("Enter data :- ");
                scanf("%d", &temp->data);
            }
            else
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                temp3 = temp->next;
                temp->next = newnode;
                temp = newnode;
                printf("Enter data :- ");
                scanf("%d", &temp->data);
            }
            counting++;
            menu();
        }
        else
        {
            printf("\n      please create a linked list first .!!\n\n");
        }

        break;

    case 3:
        // insertion at end;
        if (counting > 0)
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            newnode = (struct node *)malloc(sizeof(struct node));
            temp->next = newnode;
            temp = newnode;

            printf("Enter data :- ");
            scanf("%d", &temp->data);
            counting++;
            menu();
        }
    }
}

void del_data()
{

    printf("\nHow you want to delete \n");
    printf("1) Delete Specific data\n2) Delete a node according to position\n3) Delete last node\n4) Delete Head");
    printf("\nInput :- ");
    scanf("%d", &ch_del);

    switch (ch_del)
    {
    case 1:
        //  detetion after searching for data
        temp = temp2 = head;
        data_del = 0;
        data_del2 = temp->data;

        printf("\n\n");

        printf("Enter the data :- ");
        scanf("%d", &data_del);

        while (data_del2 != data_del)
        {
            temp2 = temp;
            temp = temp->next;
            data_del2 = temp->data;
        }
        if (temp->next == 0)
        {
            temp2->next = NULL;
            free(temp);
            printf("\n\nDeleted..!!");
        }
        else
        {
            temp2->next = temp->next;
            free(temp);
            printf("\n\nDeleted..!!");
        }
        cout_deletion++;
        menu();
        break;
    case 2:
        //for deletion at position

        temp = head;
        printf("********    The node after HEAD node will be at postion 1   ********\n");
        printf("Enter the node position to delete :- ");
        scanf("%d", &pos);

        for (int i = 1; i <= pos; i++)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = temp->next;
        free(temp);
        cout_deletion++;
        printf("\n\nDeleted..!!");
        menu();
        break;

    case 3:
        // for deletion of head
        printf("How do you want to change the Head node ?");
        printf("1) Change Head to next node \n2) change head to a specific node number\n\n");
        printf("input :- ");
        scanf("%d", &ch_del);

        switch (ch_del)
        {
        case 1:
            temp = head;
            head = head->next;
            free(temp);
            printf("\n\nHead node changed !");
            cout_deletion++;
            printf("\n\nDeleted..!!");
            menu();
            break;

        case 2:

            printf("Enter at what postion you want to set the Head node :- ");
            scanf("%d", &pos_del);
            temp3 = temp = head;

            for (int i = 0; i <= pos_del; i++)
            {

                temp3 = temp;
                free(temp3);
                temp = temp->next;
            }

            head = temp;
            cout_deletion++;
            printf("\n\nDeleted..!!");
            menu();
            break;

        default:
            printf("Invalid input");
            menu();
            break;
        }

    default:
        printf("Invalid input");
        menu();
        break;
    }
}

void see_data(void)
{
    printf("\n\n");
    run = counting - cout_deletion;
    temp = head;
    //  printf("see data");
    for (int i = run; i > 0; i--)
    {
        printf("Data :- %d\n", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
    menu();
}

void choice()
{
    switch (ch)
    {

    case 1:
        in_data();
        break;
    case 2:
        del_data();
        break;
    case 3:
        see_data();
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid input\n");
    }
}
