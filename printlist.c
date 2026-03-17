#include "dll.h"

void print_list(Dlist *head)
{
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
	}
	else
	{
	    while (head)		
	    {
		    /* Printing the list */
		    printf("%d", head -> data);
		    head = head -> next;
		    
	    }
    	printf("\n");
    }
}