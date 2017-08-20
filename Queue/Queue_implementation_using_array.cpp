#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

#define size 5

int f=-1,r=-1,queue_a[size];


//HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
//COORD coord;

void show()
{
    cout<<"\n\n\t******************** Enter Your Choice ***********************\n"<<endl;
    cout<<"\t\t\t1.Insert in the Queue\n\n";
    cout<<"\t\t\t2.Delete from the Queue\n\n";
    cout<<"\t\t\t3.Exit\n\n";
}

void show_queue()
{
    cout<<"\n*******************************************************************************\n"<<endl;
    cout<<" Updated Queue : ";
    if(f==-1 && r==-1)cout<<"Queue is empty\n";
    else {
            for(int j=f;j<=r;j++){
            cout<<queue_a[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n*******************************************************************************\n"<<endl;
}

void qinsert()
{
    if(r-f==4){
        show_queue();
        cout<<"Queue is full\n\n";
        Sleep(1000);
        system("cls");
    }
    else{
        if(f==-1)
            f=0;
        show_queue();
        int num;
        r++;
        cout<<"Enter element you want insert\n";
        cin>>num;
        queue_a[r]=num;
        system("cls");
    }

}

void qdelete()
{
    if(f==-1 && r==-1){
            show_queue();
            cout<<"Queue is Empty\n\n";
            system("pause");
            system("cls");
    }
    else{
        f++;
        if(r-f==-1)
            f=r=-1;
    }
}

//void gotoxy(int x,int y)
// {
//    coord.X=x;
//    coord.Y=y;
//    SetConsoleCursorPosition(console,coord);
// }

int main ()
{
    while(1)
    {
        int i;
        show_queue();
        show();
       // gotoxy(24,18);
        cin>>i;
        system("cls");
        switch(i)
        {
            case 1:
                    qinsert();
                    break;
            case 2:
                    qdelete();
                    system("cls");
                    break;
            case 3:
                    show_queue();
                    exit(1);
                     break;
            default :
                    show_queue();
                    cout<<"Wrong choice\n";
                    Sleep(2000);
                    system("cls");
                    break;
        }
    }
    return 0;
}
