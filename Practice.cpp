//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//class Node{
//    int data;
//    Node *Next;
//public:
//    void set_data(int adata)
//    {
//        data=adata;
//    }
//    void set_Next(Node *aNext)
//    {
//        Next=aNext;
//    }
//    int get_data()
//    {
//       return data;
//    }
//    Node* get_Next()
//    {
//        return Next;
//    }
//
//};
//
//class List{
//    Node *Head;
//public:
//    List(){
//        Head=NULL;
//    }
//    void AddNode();
//    void DeleteNode();
//    void DisplayNode();
//    void SearchNode();
//};
//
//
//void List::AddNode()
//{
//    int data;
//    Node *newnode=new Node;
//    cout<<"Enter the Data: ";
//    cin>>data;
//    newnode->set_data(data);
//    newnode->set_Next(NULL);
//    Node *temp=Head;
//    if(temp!=NULL)
//    {
//        while(temp->get_Next()!=NULL)
//        {
//            temp=temp->get_Next();
//        }
//        temp->set_Next(newnode);
//    }
//    else
//        Head=newnode;
//
//    system("cls");
//
//}
//
//
//void List::DeleteNode()
//{
//    int data;
//    Node *pre,*temp=Head;
//    if(temp==NULL){
//        cout<<"List is Empty\n";
//        system("pause");
//        system("cls");
//        return;
//    }
//    if(temp->get_Next()==NULL){
//        cout<<"Enter the data You want to delete: ";
//        cin>>data;
//        delete temp;
//        Head=NULL;
//        system("cls");
//        cout<<"Data Successfully Deleted\n";
//        system("pause");
//        system("cls");
//    }
//    else
//    {
//        cout<<"Enter the data You want to delete: ";
//        cin>>data;
//        system("cls");
//        if(temp->get_data()==data){
//            Head=temp->get_Next();
//            delete temp;
//            cout<<"Data Successfully Deleted\n";
//            system("pause");
//            system("cls");
//        }
//        else{
//            while(temp->get_data()!=data && temp!=NULL)
//            {
//                pre=temp;
//                temp=temp->get_Next();
//                if(temp==NULL)
//                    break;
//            }
//            if(temp!=NULL)
//                pre->set_Next(temp->get_Next());
//            else
//                pre->set_Next(NULL);
//            delete temp;
//            cout<<"Data Successfully Deleted\n";
//            system("pause");
//            system("cls");
//        }
//
//    }
//}
//
//
//void List::DisplayNode()
//{
//    Node *temp=Head;
//    if(temp==NULL)
//    {
//        cout<<"List is Empty\n";
//        system("pause");
//        system("cls");
//    }
//    else
//    {
//        cout<<"List is ";
//        while(temp!=NULL)
//        {
//            cout<<temp->get_data()<<" ";
//            temp=temp->get_Next();
//        }
//        cout<<endl;
//        system("pause");
//        system("cls");
//    }
//}
//
//
//void List::SearchNode()
//{
//    Node *temp=Head;
//    if(temp==NULL)
//    {
//        cout<<"List is Empty\n";
//        system("pause");
//        system("cls");
//        return;
//    }
//    int data,f=0;
//    cout<<"Enter data you want to search: ";
//    cin>>data;
//    system("cls");
//    while(temp!=NULL)
//    {
//        if(temp->get_data()==data){
//            f++;
//            break;
//        }
//        temp=temp->get_Next();
//    }
//    cout<<endl;
//    system("cls");
//    if(f!=0){
//        cout<<"\nData Found\n";
//        system("pause");
//        system("cls");
//    }
//    else
//    {
//        cout<<"\nData Not Found\n";
//        system("pause");
//        system("cls");
//    }
//}
//
//void show()
//{
//    cout<<"\n\n**************Enter Your Choice****************\n\n";
//    cout<<"\t\t1.Add Node\n";
//    cout<<"\t\t2.Delete Node\n";
//    cout<<"\t\t3.Search Node\n";
//    cout<<"\t\t4.Display List\n";
//    cout<<"\t\t5.Exit\n";
//}
//
//int main()
//{
//    List start;
//    char c;
//    while(1)
//    {
//        show();
//        cin>>c;
//        system("cls");
//        switch(c)
//        {
//            case '1':
//                start.AddNode();
//                break;
//            case '2':
//                start.DeleteNode();
//                break;
//            case '3':
//                start.SearchNode();
//                break;
//            case '4':
//                start.DisplayNode();
//                break;
//            case '5':
//                exit(1);
//                break;
//            default :
//                cout<<"Wrong Choice\n";
//                system("pause");
//                system("cls");
//                break;
//        }
//    }
//    return 0;
//}

#include <iostream>

using namespace std;

void re(int data)
{
    if(data==0)
        return;
    re(data-1);
    cout<<data<<" ";
}
int main()
{
    re(10);
    return 0;
}


void create()
{
    struct node *temp,*new_node;
    char ch;
    while(1)
    {
        temp=head;
        new_node=new node;
        cout<<"Enter data:";
        cin>>new_node->data;
        if(temp==NULL)
        {
            new_node->link=NULL;
            head=new_node;
        }
        else{
            while(temp->link!=NULL){
                temp=temp->link;
            }
            temp->link=new_node;
            new_node->link=NULL;
        }
        cout<<"Y for yes OR N for no?\n";
        scanf("%*c%c",&ch);
        if(ch=='N')
            break;
    }
}
