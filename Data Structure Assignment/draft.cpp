#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
//    int j,ar[10],i=0;
//    char c;
//    while(c!='\n'){
//        scanf("%d%c",&ar[i++],&c);
//    }
//    j=0;
//    while(j<i)
//        printf("%d ",ar[j++]);
    int num,flag;
    for(int i=0;i<30;i++)
    {
        flag=0;
        cout<<"Enter number: ";
        cin>>num;
        if(num<2)
            cout<<"Not Prime\n";
        else if(num==0)
            cout<<"Prime\n";
        else{
            for(int a=2;a<=num/2;a++){
                if(num%a==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"Prime\n";
            else
                cout<<"Not Prime\n";
        }
    }
 }

