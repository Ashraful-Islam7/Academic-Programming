#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    char check;
    do{

        unsigned long long int n1,n2,temp,i=2;
        cout<<"Enter two number to find LCM\n";
        cin>>n1>>n2;
        if(n1<n2)
        {
            n1=n1+n2;
            n2=n1-n2;
            n1=n1-n2;
        }
        temp=n1;
        while(n1%n2!=0){
            n1=temp*i;
            i++;
        }
        cout<<"LCM "<<n1<<endl;
        cout<<"\nTo continue press y OR To exist press n\n";
        cin>>check;
    }while(check!='N' && check!='n');
    return 0;
}
