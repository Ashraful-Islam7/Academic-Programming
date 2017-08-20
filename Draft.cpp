#include <iostream>
#include <stdlib.h>

using namespace std;

class node{
public:
    int data;
    node *next;
};


class List{
public:
    node* head;
    List(){
        head=NULL;
    }
    void insert_node();
    void delete_node();
    void search_node();
    void updated_list();
    void menu();
    int count_node();

};


void List::insert_node(){

    updated_list();
    int counter=0,pos;
    counter=count_node();
    cout<<"\n\nEnter Position: ";
    cin>>pos;
    if(pos<=counter+1)
    {
        node *pre,*temp=head,*new_node=new node;
        int data;
        cout<<"\nEnter Data :";
        cin>>data;
        new_node->data=data;
        if(pos==1){
            if(temp==NULL){
                new_node->next=NULL;
                head=new_node;
            }
            else{
                new_node->next=temp;
                head=new_node;
            }
        }
        else if(pos==counter+1)
        {
            new_node->next=NULL;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new_node;
        }
        else
        {
            int c=1;
            while(c!=pos)
            {
                pre=temp;
                temp=temp->next;
                c++;
            }
            pre->next=new_node;
            new_node->next=temp;
        }
    }
    else{
        cout<<"\n\nPOSITION NOT AVAILABLE\n\n";
        system("pause");
    }
    system("cls");

}


void List:: delete_node(){

    updated_list();
    int counter=0,pos;
    counter=count_node();
    cout<<"\n\nEnter Position: ";
    cin>>pos;
    if(pos<=counter)
    {
        node *pre,*temp=head;
        if(pos==1){
            if(temp->next==NULL){
                delete temp;
                head=NULL;
            }
            else{
                pre=temp;
                temp=temp->next;
                head=temp;
                delete pre;
            }
        }
        else if(pos==counter)
        {
            while(temp->next!=NULL)
            {
                pre=temp;
                temp=temp->next;
            }
            pre->next=NULL;
            delete temp;
        }
        else
        {
            int c=1;
            while(c!=pos)
            {
                pre=temp;
                temp=temp->next;
                c++;
            }
            pre->next=temp->next;
            delete temp;
        }
    }
    else{
        cout<<"\n\nPOSITION NOT AVAILABLE\n\n";
        system("pause");
    }
    system("cls");
}


void List:: search_node(){

    updated_list();
    node* temp=head;
    int data,flag=0;
    cout<<"Data you want to search: ";
    cin>>data;
    while(temp!=NULL)
    {
        if(temp->data==data){
            flag++;
            break;
        }
        temp=temp->next;
    }
    if(flag==1)
        cout<<"\n\nDATA FOUND\n\n";
    else
        cout<<"\n\nDATA NOT FOUND\n\n";
    system("pause");
    system("cls");
}


void List:: updated_list(){
    cout<<"\n................................................................................\n\n";
    cout<<"Updated List: ";
    node* begin_node=head;
    if(begin_node==NULL)
        cout<<"Empty";
    else{
        while(begin_node!=NULL){
            cout<<begin_node->data<<" ";
            begin_node=begin_node->next;
        }
    }
    cout<<endl;
    cout<<"\n\n................................................................................";
}


void List:: menu(){
    cout<<"\n\n************** Enter Your Choice *******************\n\n";
    cout<<"\t\t1.Insert\n";
    cout<<"\t\t2.Delete\n";
    cout<<"\t\t3.Search\n";
    cout<<"\t\t4.Exit\n";
}


int List:: count_node(){
    node* st=head;
    int c=0;
    while(st!=NULL){
        c++;
        st=st->next;
    }
    return c;
}


int main()
{
    List start;
    int choice;
    while(1)
    {
//        {
//            int data;
//            char c='9';
//            data=c-'0';
//            cout<<data;
//        }
        start.updated_list();
        start.menu();
        cin>>choice;
        system("cls");
        switch(choice){

        case 1:
            start.insert_node();
            break;
        case 2:
            start.delete_node();
            break;
        case 3:
            start.search_node();
            break;
        case 4:
            start.updated_list();
            exit(1);
            break;
        }

    }
    return 0;
}
