#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Delete(struct node *b);
void display(struct node *d);

int main()
{
    struct node *prev, *head, *p;
    int n, i, pos;

    printf("Number of elements: ");
    scanf("%d", &n);
    head = NULL;
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL)
        {
            head = p;
            prev = head;
        }
        else
        {
            prev->next = p;
            prev = p;
        }
    }
    display(head);
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    p = head;
    i = 1;
    if (p->next == NULL || pos == 1)
    {
        head = p->next;
        free(p);
    }
    else
    {
        while (i < pos - 1)
        {
            p = p->next;
            i++;
        }
        Delete(p);
    }
    display(head);

    return 0;
}

void Delete(struct node *b)
{
    struct node *temp;
    temp = b->next;
    b->next = temp->next;
    free(temp);
}

void display(struct node *d)
{
    if (d == NULL)
        printf("Null\n");
    else
    {
        printf("%d->", d->data);
        display(d->next);
    }
}

