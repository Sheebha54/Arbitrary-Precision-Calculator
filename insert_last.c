#include "dll.h"
int insert_last(Dlist **head, Dlist **tail, int data)
{
    
    Dlist *temp=*head;
    Dlist *new1=malloc(sizeof(Dlist));
    if(new1==NULL)
        return FAILURE;
    new1->data=data;
    new1->next=NULL;
    if(*head ==NULL){
        *head=new1;
        *tail=new1;
        return SUCCESS;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new1;
    new1->prev=temp;
    *tail=new1;
    return SUCCESS;

}