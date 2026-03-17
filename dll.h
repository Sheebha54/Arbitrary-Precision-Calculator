#ifndef DLL_L
#define DLL_L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1

typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}Dlist;


int insert_last(Dlist **head, Dlist **tail, int data);
int insert_first(Dlist **head, Dlist **tail, int data);
int addition(Dlist **tail1,Dlist **tail2,Dlist **Rhead,Dlist **Rtail);

void print_list(Dlist *head);

int sub(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **Rhead,Dlist **Rtail);
int mul(Dlist **head1, Dlist **tail1,
        Dlist **head2, Dlist **tail2,
        Dlist **Rhead, Dlist **Rtail);
int division(Dlist **head1, Dlist **tail1,
         Dlist **head2, Dlist **tail2,
         Dlist **Rhead, Dlist **Rtail);

#endif
