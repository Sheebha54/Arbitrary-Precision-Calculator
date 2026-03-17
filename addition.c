#include "dll.h"
int addition(Dlist **tail1,Dlist **tail2,Dlist **Rhead,Dlist **Rtail)
{

     
    Dlist *temp1=*tail1;
    Dlist *temp2=*tail2;
    
    int carry=0;
    int sum;
    while(temp1!=NULL || temp2!=NULL)
    {
        if(temp1!=NULL&&temp2!=NULL)
            sum=temp1->data+temp2->data+carry;
        else if(temp1!=NULL&&temp2==NULL)
            sum=temp1->data+0+carry;
        else if(temp1==NULL&&temp2!=NULL)
            sum=0+temp2->data+carry;
        carry=0;
        if(sum>9)
            carry=1;
        insert_first(Rhead,Rtail,sum%10);
        if(temp1!=NULL)
            temp1=temp1->prev;
        if(temp2!=NULL)
            temp2=temp2->prev;
    }
    if(carry==1){
        insert_first(Rhead,Rtail,1);
    }
    
    return SUCCESS;
}

