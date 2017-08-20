#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <math.h>

using namespace std;

struct node{
    int data;
    node* next;
};

struct node* top=NULL;

void push(int data)
{
    node *temp=top,*new_node=new node;
    new_node->data=data;
    if(temp==NULL){
        new_node->next=NULL;
        top=new_node;
    }
    else{
        new_node->next=temp;
        top=new_node;
    }
}

int pop()
{
    int data;
    node *temp=top;
    if(temp->next==NULL){
        data=temp->data;
        delete temp;
        top=NULL;
    }
    else{
        data=temp->data;
        top=temp->next;
        delete temp;
    }
    return data;
}

void prefix()
{
    char arr[100];
    int data;
    cout<<"Enter the Prefix Expression & put space after each operand\n";
    gets(arr);
    strrev(arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='0' && arr[i]<='9'){
            data=arr[i]-'0';
            push(data);
        }
        else
        {
            int n,m,res;
            if(arr[i]=='+'){
                n=pop();
                m=pop();
                res=m+n;
                push(res);
            }
            else if(arr[i]=='-'){
                n=pop();
                m=pop();
               // res=n-m;
                res=m-n;
                push(res);
            }
            else if(arr[i]=='*'){
                n=pop();
                m=pop();
                res=n*m;
                push(res);
            }
            else if(arr[i]=='/'){
                n=pop();
                m=pop();
               // res=n/m;
                res=m/n;
                push(res);
            }
            else{
                n=pop();
                m=pop();
                res=pow(m,n);
                push(res);
            }
        }
    }
    cout<<"Res = "<<pop()<<endl;
    system("pause");
    system("cls");
}

int main()
{
    int c;
    while(1)
    {
        cout<<"1.Prefix\n";
        cout<<"2.Exit\n";
        scanf("%d%*c",&c);
        system("cls");
        if(c==1)
            prefix();
        else if(c==2)
            exit(1);
        else{
            cout<<"Wrong choice\n";
            system("pause");
            system("cls");
        }
    }
    return 0;
}
