#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <math.h>

using namespace std;

#define size 100
int top=0,s_array[size];

void show()
{
    cout<<"\n\n\t******************** Enter Your Choice ***********************\n"<<endl;
    cout<<"\t\t\t1.Evaluate an postfix notation\n\n";
    cout<<"\t\t\t2.Exit\n\n";
}

void push(int n)
{
    if(top<size){
        s_array[top]=n;
        top++;
    }
}

int pop()
{

    if(top-1>=0){
        top--;
        return s_array[top];
    }
}

void postfix()
{
   char exp[100];
   char tem[10];
   int i=0,k=0,temp;
   cout<<"Enter the postfix expression put space after each operand only.\nThe expression may have(+,-,*,/ & ^)operators only\n\n";
   input:
   gets(exp);
   if(exp[0]=='\0')
       goto input;
   system("cls");
   while(exp[i]!='\0')
   {
       if((exp[i]>='0' && exp[i]<='9') || exp[i]==' ')
       {
            if(exp[i]!=' ')
            {
                tem[k]=exp[i];
                k++;
            }
            else
            {
                tem[k]='\0';
                if(tem[0]=='\0')
                    goto read;
                else
                {
                    push(atoi(tem));
                    tem[0]='\0';
                    k=0;
                }
            }
       }
      else
       {
           int num1,num2,num;
           if(exp[i]=='+'){
                num1 = pop();
                num2 = pop();
                num = num2 + num1;
                push(num);
           }
           else if(exp[i]=='-'){
                num1 = pop();
                num2 = pop();
                num = num2-num1;
                push(num);
           }
           else if(exp[i]=='*'){
                num1 = pop();
                num2 = pop();
                num = num2 * num1;
                push(num);
           }
           else if(exp[i]=='/'){
                num1 = pop();
                num2 = pop();
                num = num2 / num1;
                push(num);
           }
           else{
                num1 = pop();
                num2 = pop();
                num = pow(num2,num1);
                push(num);
           }
       }
       read:
       i++;
   }
   cout<<"\n\nValue of the expression : "<<pop()<<endl;
   system("pause");
   system("cls");
}

int main()
{
    while(1)
    {
        int j;
        show();
        scanf("%d%*c",&j);
        system("cls");
        switch(j)
        {
            case 1:
                postfix();
                break;
            case 2:
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
