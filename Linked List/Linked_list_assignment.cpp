#include <iostream>
#include <cstdlib>

using namespace std;


class node{
    int data;
    node* next;
public:
    void set_data(int ddata){
        data=ddata;
    }
    void set_next(node* anext){
        next=anext;
    }
    int get_data(){
        return data;
    }
    node* get_next(){
        return next;
    }
};


class linked_list{
    node* head;
public:
    linked_list(){
        head=NULL;
    }
    void insert_node();
    void insert_nth_node();
    void delete_node();
    void search_node();
    void display_list();
    void reverse_list();
    void sort_list();
    void choice();
};


void linked_list::insert_node()
{
    int dt;
    cout<<"Enter data: ";
    cin>>dt;
    node* new_node = new node;
    new_node->set_data(dt);
    new_node->set_next(NULL);
    node* temp=head;
    if(temp!=NULL)
    {
        while(temp->get_next()!=NULL)
        {
            temp=temp->get_next();
        }
        temp->set_next(new_node);
    }
    else{
        head=new_node;
    }
    system("cls");
}


void linked_list::insert_nth_node()
{
    int data;
    node* temp=head;
    if(temp==NULL)
    {
        cout<<"List is Empty\n";
        system("pause");
        system("cls");
        return;
    }
    cout<<"Enter data after which you want to insert node: ";
    cin>>data;
    node *current;
    do
    {
        if(temp->get_data()==data){
            current=temp;
            node *new_node=new node;
            cout<<"Enter data: ";
            cin>>data;
            new_node->set_data(data);
            if(temp->get_next()==NULL){
                new_node->set_next(NULL);
                temp->set_next(new_node);
            }
            else{
                temp=temp->get_next();
                new_node->set_next(temp);
                current->set_next(new_node);
            }
            break;
        }
        temp=temp->get_next();
    }while(temp!=NULL);
}


void linked_list::delete_node()
{
    int d,f=0;
    node *temp=head;
    if(head==NULL){
        cout<<"List is Empty\n";
        system("pause");
        system("cls");
        return;
    }
    cout<<"Enter the data to delete: ";
    cin>>d;
    system("cls");
    if(temp->get_next()==NULL){
        if(temp->get_data()==d){
            delete temp;
            head=NULL;
            f++;
        }
    }
    else{
        node *pre;
        if(temp->get_data()==d)
        {
            pre=temp->get_next();
            delete temp;
            head=pre;
            f++;
        }
        else
        {
            while(temp->get_data()!=d && temp!=NULL){
                pre=temp;
                temp=temp->get_next();
                if(temp==NULL){
                    goto skip;
                    break;
                }
            }
            if(temp->get_data()==d)
            {
                pre->set_next(temp->get_next());
                delete temp;
                f++;
            }
        }

    }
    skip:
    if(f!=0)
    {
        cout<<"Item has been deleted successfully\n";
        system("pause");
        system("cls");
    }
    else{
        cout<<"There is No such Data to be deleted\n";
        system("pause");
        system("cls");
    }
}


void linked_list::search_node()
{
    int data,f=0;
    node *temp=head;
    if(temp==NULL){
        cout<<"List is Empty\n";
        system("pause");
        system("cls");
        return;
    }
    cout<<"Enter the data you want to search: ";
    cin>>data;
    while(temp!=NULL)
    {
        if(temp->get_data()==data){
            f++;
            break;
        }
        temp=temp->get_next();
    }
    if(f!=0)
    {
        cout<<"Data has been found\n";
        system("pause");
        system("cls");
    }
    else
    {
        cout<<"Data has not been found\n";
        system("pause");
        system("cls");
    }
}


void linked_list::display_list()
{
    cout<<"List is: ";
    node* temp=head;
    if(temp==NULL)
        cout<<"Empty ";
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->get_data()<<" ";
            temp=temp->get_next();
        }
    }
    cout<<endl;
    system("pause");
    system("cls");
}


void linked_list::reverse_list()
{
    node *current=head;
    if(current==NULL)
    {
        cout<<"List is Empty\n";
        system("pause");
        system("cls");
        return;
    }
    else if(current->get_next()==NULL){
        cout<<"Reverse is valueless because The List contains Only one Element\n";
        system("pause");
        system("cls");
        return;
    }
    node *next,*rev=NULL;
    while(current!=NULL)
    {
        next=current->get_next();
        current->set_next(rev);
        rev=current;
        current=next;
    }
    head=rev;
    cout<<"List has been Reversed\n";
    system("pause");
    system("cls");

}


void linked_list::sort_list()
{
    int counter1=0,counter2=0;
    node *start,*current=head;
    if(current==NULL)
    {
        cout<<"List is Empty\n";
        system("pause");
        system("cls");
        return;
    }
    else if(current->get_next()==NULL){
        cout<<"Sorting is valueless because The List contains Only one Element\n";
        system("pause");
        system("cls");
        return;
    }
    node *temp,*tmp;
    int c=0;
    while(current->get_next()!=NULL){
        c++;
        current=current->get_next();
    }
    for(int i=0;i<c;i++)
    {
        start=head;
        temp=start->get_next();
        for(int j=0;j<c-i;j++)
        {
            if(start->get_data() > temp->get_data())
            {
                int data=start->get_data();
                start->set_data(temp->get_data());
                temp->set_data(data);
            }
                temp=temp->get_next();
                start=start->get_next();
        }
    }
   // cout<<counter1<<endl<<counter2<<endl;
    cout<<"List has been sorted\n";
    system("pause");
    system("cls");
}


void linked_list::choice()
{
    cout<<"\n\n*************** Enter Your Choice *******************\n\n";
    cout<<"\t\t1.Insert in the Next node\n";
    cout<<"\t\t2.Insert after any given data which is already in the List\n";
    cout<<"\t\t3.Delete\n";
    cout<<"\t\t4.Search\n";
    cout<<"\t\t5.Display List\n";
    cout<<"\t\t6.Reverse List\n";
    cout<<"\t\t7.sort List\n";
    cout<<"\t\t8.Exit\n";
}




int main()
{
    linked_list list;
    char c;
    while(1)
    {
        list.choice();
        cin>>c;
        system("cls");
        switch(c)
        {
            case '1':
                list.insert_node();
                break;
            case '2':
                list.insert_nth_node();
                break;
            case '3':
                list.delete_node();
                break;
            case '4':
                list.search_node();
                break;
            case '5':
                list.display_list();
                break;
            case '6':
                list.reverse_list();
                break;
            case '7':
                list.sort_list();
                break;
            case '8':
                exit(1);
                break;
            default :
                cout<<"Wrong Choice\n";
                system("pause");
                system("cls");
                break;
        }
    }
    return 0;
}
