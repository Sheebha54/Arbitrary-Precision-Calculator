#include "dll.h"
int insert_first(Dlist **head, Dlist **tail, int data)
{
    Dlist *temp=*head;
    Dlist *new1=malloc(sizeof(Dlist));
    if(new1==NULL)
        return FAILURE;
    new1->data=data;
    new1->prev=NULL;
    new1->next=NULL;
    if(*head==NULL){

        *head=new1;
        *tail=new1;
        
        return SUCCESS;
    }
    (*head)->prev=new1;
    new1->next=*head;
    *head=new1;
    return SUCCESS;


}