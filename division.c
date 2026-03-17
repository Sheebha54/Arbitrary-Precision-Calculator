#include "dll.h"

int division(Dlist **head1, Dlist **tail1,
             Dlist **head2, Dlist **tail2,
             Dlist **Rhead, Dlist **Rtail)
{
    // Divide by zero check
    if (*head2 == NULL)
    {
        printf("Division by zero not possible\n");
        return FAILURE;
    }

    // Copy dividend into remainder
    Dlist *rem_head = NULL;
    Dlist *rem_tail = NULL;

    Dlist *temp = *head1;
    while (temp)
    {
        insert_last(&rem_head, &rem_tail, temp->data);
        temp = temp->next;
    }

    int count = 0;

    while (1)
    {
        // -------- Compare remainder and divisor --------
        int len1 = 0, len2 = 0;

        Dlist *t1 = rem_head;
        Dlist *t2 = *head2;

        while (t1) { len1++; t1 = t1->next; }
        while (t2) { len2++; t2 = t2->next; }

        if (len1 < len2)
            break;

        if (len1 == len2)
        {
            t1 = rem_head;
            t2 = *head2;

            int smaller = 0;

            while (t1 && t2)
            {
                if (t1->data < t2->data)
                {
                    smaller = 1;
                    break;
                }
                else if (t1->data > t2->data)
                {
                    break;
                }

                t1 = t1->next;
                t2 = t2->next;
            }

            if (smaller)
                break;
        }

        // -------- remainder >= divisor → subtract --------
        Dlist *new_head = NULL;
        Dlist *new_tail = NULL;

        sub(&rem_head, &rem_tail,
            head2, tail2,
            &new_head, &new_tail);

        rem_head = new_head;
        rem_tail = new_tail;

        // -------- Remove leading zeros --------
        while (rem_head != NULL &&
               rem_head->data == 0 &&
               rem_head->next != NULL)
        {
            Dlist *temp_zero = rem_head;
            rem_head = rem_head->next;
            rem_head->prev = NULL;
            free(temp_zero);
        }

        count++;
    }

    // Convert quotient (count) into linked list
    if (count == 0)
    {
        insert_first(Rhead, Rtail, 0);
    }
    else
    {
        while (count > 0)
        {
            insert_first(Rhead, Rtail, count % 10);
            count /= 10;
        }
    }

    return SUCCESS;
}