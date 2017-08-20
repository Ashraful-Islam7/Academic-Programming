#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
    int data;
    struct node* next;
};


void display(struct node** temp)
{
    for(int i=0;i<80;i++)
        cout<<"*";
    cout<<"\n\nUpdated Queue: ";
    struct node *p=*temp;
    if(p==NULL){
        cout<<"Empty\n";
        cout<<"\n\n";
        for(int i=0;i<80;i++)
            cout<<"*";
        return;
    }
    else{
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<"\n\n";
    }
    cout<<"\n";
    for(int i=0;i<80;i++)
        cout<<"*";

}


void push(struct node** temp)
{
    int data;
    struct node* new_node= new node;
    struct node *p;
    p=*temp;
    display(&p);
    cout<<"Enter data :";
    cin>>data;
    new_node->data=data;
    new_node->next=NULL;
    if(p!=NULL){
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=new_node;
    }
    else{
        p=new_node;
        *temp=p;
    }
    cout<<"Enqueue successful\n";
    system("pause");
    system("cls");

}

void pop(struct node** temp)
{
    struct node *tmp,*p=*temp;
    display(&p);
    if(p==NULL){
        cout<<"Empty\n\n";
        system("pause");
        system("cls");
        return;
    }
    else if(p->next==NULL){
        delete temp;
        *temp=NULL;
    }
    else
    {
        tmp=p->next;
        *temp=tmp;
        delete p;

    }
    cout<<"Dequeue successful\n";
    system("pause");
    system("cls");
}


void show()
{
    cout<<"\n\n\t******************** Enter Your Choice ***********************\n"<<endl;
    cout<<"\t\t\t1.Enqueue\n\n";
    cout<<"\t\t\t2.Dequeue\n\n";
    cout<<"\t\t\t3.Exit\n\n";
}

int main()
{
    struct node* head=NULL;
    int i;
    while(1)
    {
        display(&head);
        show();
        cin>>i;
        system("cls");
        switch(i)
        {
            case 1:
                    push(&head);
                    break;
            case 2: pop(&head);
                    system("cls");
                    break;
            case 3:
                    display(&head);
                    exit(1);
                    break;
            default :
                    display(&head);
                    cout<<"Wrong choice\n";
                    system("pause");
                    system("cls");
                    break;
        }
    }
    return 0;
}
