#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
    int data;
    int priority;
    node *next;
}*head=NULL;

void insert()
{
    int data,priority;
    node *pre,*current=head,*new_node=new node;
    cout<<"Enter priority: ";
    cin>>priority;
    cout<<"Enter Data: ";
    cin>>data;
    new_node->data=data;
    new_node->priority=priority;
    if(current==NULL){
        new_node->next=NULL;
        head=new_node;
    }
    else{
        pre=current;
        while(current!=NULL){
            if(priority>current->priority)
                break;
            pre=current;
            current=current->next;
        }
        if(head->priority<priority)
        {
            new_node->next=pre;
            head=new_node;
        }
        else{
            pre->next=new_node;
            new_node->next=current;
        }
    }
    system("cls");
}

void show()
{
    cout<<"................................................................................\nQueue contains: ";
    node* temp=head;
    if(temp==NULL){
        cout<<"Empty\n";
        cout<<"................................................................................\n";
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"................................................................................\n";
}

void remove()
{
    node* temp=head;
    if(temp==NULL)
        return;
    head=temp->next;
    delete temp;
}

int main()
{
    int c;
    while(1)
    {
        show();
        cout<<"\t\t1.Insert in the Queue\n\t\t2.Remove from the Queue\n\t\t3.Exit\n";
        cin>>c;
        system("cls");
        if(c==1)
            insert();
        else if(c==2)
            remove();
        else if(c==3)
            exit(1);
    }
    return 0;
}
