#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    char check;
    do{

        int n1,n2,temp;
        cout<<"Enter two number to find GCD\n";
        cin>>n1>>n2;
        if(n1<n2)
        {
            n1=n1+n2;
            n2=n1-n2;
            n1=n1-n2;
        }
        cout<<n1<<" "<<n2<<endl;
        while(n1%n2!=0){
            temp=n1%n2;
            n1=n2;
            n2=temp;
        }
        cout<<"GCD "<<n2<<endl;
        cout<<"\nTo continue press y OR To exist press n\n";
        cin>>check;
    }while(check!='N' && check!='n');
    return 0;
}
