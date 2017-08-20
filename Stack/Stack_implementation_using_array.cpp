#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;


int top=0,stack_a[5];


HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD coord;

void show()
{
    cout<<"\n\n\t******************** Enter Your Choice ***********************\n"<<endl;
    cout<<"\t\t\t1.Stack Push\n\n";
    cout<<"\t\t\t2.Stack Pop\n\n";
    cout<<"\t\t\t3.Exit\n\n";
}

void show_stack()
{
    cout<<"\n*******************************************************************************\n"<<endl;
    cout<<" Updated Stack : ";
    if(top==0) cout<<"Empty\n";
    else{
        for(int j=0;j<top;j++){
            cout<<stack_a[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n*******************************************************************************\n"<<endl;
}

void push()
{
    if(top<5){


        show_stack();
        int num;
        cout<<"Enter element u want to insert?\n";
        cin>>num;
        system("cls");
        stack_a[top]=num;
        top++;
    }
    else{
        show_stack();
        cout<<"Overflow\n";
        Sleep(2000);
        system("cls");
    }

}

void pop()
{

    if(top-1>=0){

        top--;
        show_stack();
        Sleep(2000);
        system("cls");
    }
    else{
        show_stack();
        cout<<"Underflow\n";
        Sleep(2000);
        system("cls");
    }
}

void gotoxy(int x,int y)
 {
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(console,coord);
 }

int main ()
{
    while(1)
    {
        int i;
        show_stack();
        show();
        gotoxy(24,18);
        cin>>i;
        system("cls");
        switch(i)
        {
            case 1:
                    push();
                    break;
            case 2: pop();
                    system("cls");
                    break;
            case 3:
                    show_stack();
                    exit(1);
                     break;
            default :
                    show_stack();
                    cout<<"Wrong choice\n";
                    Sleep(2000);
                    system("cls");
                    break;
        }
    }
    return 0;
}
