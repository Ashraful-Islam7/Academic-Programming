#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

#define size 5
int f=-1,r=-1,q_array[size];
void show();

void menu()
{
    cout<<"\n\n\t************ Enter Your Choice ******************\n\n";
    cout<<"\t\t1.Insert in the Queue\n";
    cout<<"\t\t2.Delete from the Queue\n";
    cout<<"\t\t3.Exit\n\n";
}

void show()
{
    cout<<"\n\nUpdated Queue : ";
    if(f==-1 && r==-1){
        cout<<"Queue is Empty\n";
    }
    else if(f==r)
        cout<<"Queue is Empty\n";
    else{
        for(int i=f;i<r;i++){
            cout<<q_array[i]<<" ";
        }
        cout<<endl;
    }
}

void enqueue()
{
    int n;
    if(r==size){
        show();
        cout<<"Queue is full\n";
        system("pause");
        system("cls");
    }
    else if(r==-1 && f==-1){
        show();
        f=r=0;
        cout<<"What to insert?\n";
        cin>>n;
        system("cls");
        q_array[r]=n;
        r++;
    }
    else{
        show();
         cout<<"What to insert?\n";
         cin>>n;
         system("cls");
         q_array[r]=n;
         r++;
    }
}

void dequeue()
{
    if(r==-1 && f==-1){
        show();
        cout<<"Queue is Empty\n";
        system("pause");
        system("cls");
    }
    else if(f==r){
         f=r=0;
         show();
         cout<<"Queue is Empty\n";
         system("pause");
         system("cls");
    }
    else
    {
        show();
        f++;
        Sleep(1000);
        system("cls");
    }

}


int main()
{
    int i;
    while(1)
    {
        show();
        menu();
        cin>>i;
        system("cls");
        switch(i)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                exit(1);
                break;
            default :
                show();
                cout<<"Wrong Choice\n";
                system("pause");
                system("cls");
                break;
        }
    }
    return 0;
}
