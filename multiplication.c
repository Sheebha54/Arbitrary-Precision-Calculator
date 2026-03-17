#include "dll.h"

int mul(Dlist **head1, Dlist **tail1,
        Dlist **head2, Dlist **tail2,
        Dlist **Rhead, Dlist **Rtail)
{
    Dlist *temp2 = *tail2;
    int count = 0;

    while (temp2 != NULL)
    {
        Dlist *temp1 = *tail1;
        Dlist *row_head = NULL;
        Dlist *row_tail = NULL;

        int carry = 0;

        // Shift zeros
        for (int i = 0; i < count; i++)
            insert_first(&row_head, &row_tail, 0);

        // Multiply full row
        while (temp1 != NULL)
        {
            int prod = temp1->data * temp2->data + carry;
            carry = prod / 10;

            insert_first(&row_head, &row_tail, prod % 10);

            temp1 = temp1->prev;
        }

        if (carry)
            insert_first(&row_head, &row_tail, carry);

        // First row
        if (*Rhead == NULL)
        {
            *Rhead = row_head;
            *Rtail = row_tail;
        }
        else
        {
            Dlist *new_head = NULL;
            Dlist *new_tail = NULL;

            addition(Rtail, &row_tail, &new_head, &new_tail);

            *Rhead = new_head;
            *Rtail = new_tail;
        }

        temp2 = temp2->prev;
        count++;
    }

    return SUCCESS;
}