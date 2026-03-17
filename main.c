#include "dll.h"
int main(int argc,char *argv[])
{
    Dlist *head1 = NULL, *tail1 = NULL;
    Dlist *head2 = NULL, *tail2 = NULL;
    Dlist *Rhead=NULL;
    Dlist *Rtail=NULL;
    int i=0;
    if(argc<4){
        printf("Insufficient number of arguements.\n");
        return FAILURE;
    }
    while(argv[1][i]!='\0')
    {
        int num1=argv[1][i]-'0';
        insert_last(&head1,&tail1,num1);
        i++;
    }
    int j=0;
    while(argv[3][j]!='\0')
    {
        int num2=argv[3][j]-'0';
        insert_last(&head2,&tail2,num2);
        j++;
    }


    if(argv[2][0]=='+'){
         addition(&tail1, &tail2,&Rhead, &Rtail);
         print_list(Rhead);
    }
    else if(argv[2][0]=='-'){
        if(strlen(argv[1])>strlen(argv[3])){
            sub(&head1,&tail1,&head2,&tail2,&Rhead, &Rtail);
            print_list(Rhead);
    
        }
        else if(strlen(argv[1])<strlen(argv[3])){
            printf("-");
            sub(&head2,&tail2,&head1,&tail1,&Rhead, &Rtail);
            print_list(Rhead);
            
        }
         else{
        int num1=argv[1][0]-'0';
        int num2=argv[3][0]-'0';
        if(num1>num2){
            sub(&head1,&tail1,&head2,&tail2,&Rhead, &Rtail);
            print_list(Rhead);
        }
        else{
            printf("-");
            sub(&head2,&tail2,&head1,&tail1,&Rhead, &Rtail);
            print_list(Rhead);
        }
        }
    }
     else if(argv[2][0]=='*'){
         mul(&head1,&tail1,&head2,&tail2,&Rhead, &Rtail);
         print_list(Rhead);
     }
    else if(argv[2][0]=='/')
    {
    division(&head1,&tail1,
         &head2,&tail2,
         &Rhead,&Rtail);

        
         print_list(Rhead);
    }
        return SUCCESS;
}

