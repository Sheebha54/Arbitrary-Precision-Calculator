#include "dll.h"

int sub(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **Rhead,Dlist **Rtail)
{
    
    Dlist *temp1=*tail1;
    Dlist *temp2=*tail2;
    int borrow=0;
    int subt;
    while(temp1!=NULL || temp2!=NULL)
    {
        if(temp1!=NULL&&temp2!=NULL)
            subt=temp1->data-temp2->data-borrow;
        else if(temp1!=NULL&&temp2==NULL)
            subt=temp1->data+0-borrow;
        else if(temp1==NULL&&temp2!=NULL)
            subt=0+temp2->data-borrow;
        borrow=0;
        if(subt<0){
            subt+=10;
            borrow=1;
        }
        insert_first(Rhead,Rtail,subt);
        if(temp1!=NULL)
            temp1=temp1->prev;
        if(temp2!=NULL)
            temp2=temp2->prev;
    }
    if(borrow==1){
        insert_first(Rhead,Rtail,1);
    }
    
    return SUCCESS;
}