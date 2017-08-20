/**This program perform the following task
    (1)Show Even & Odd number of an array
    (2)Calculate average of Even & Odd number of an array
    (3)Calculate the sum of all elements of an array
    (4)Count the number of prime number of an array
    (5)Show the prime numbers of an array
**/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char check;
    do
    {
        int a=0,i=0,j=0,k=0,l=0,sum=0,flag=0,arr[1000]={0};
        char c='0';
        cout<<"Enter the elements of array & press Enter key to terminate Input\n";
        while(c!='\n'){
        scanf("%d%c",&arr[i++],&c);
        }
        for(a=0;a<40;a++)
            cout<<'*';
        cout<<"\nEven numbers are ";
        for(j=0;j<i;j++)
        {
            if(arr[j]%2==0)
                cout<<arr[j]<<" ";
        }
        cout<<"\n\nOdd numbers are ";
        for(j=0;j<i;j++)
        {
            if(arr[j]%2!=0)
                cout<<arr[j]<<" ";
        }
        cout<<"\n\nAverage of Even numbers is ";
        for(sum=0,a=0,j=0;j<i;j++)
        {
            if(arr[j]%2==0){
                sum+=arr[j];
                a++;
            }
        }
        cout<<(double)sum/a;
        cout<<"\n\nAverage of Odd numbers is ";
        for(sum=0,a=0,j=0;j<i;j++)
        {
            if(arr[j]%2!=0){
                sum+=arr[j];
                a++;
            }
        }
        cout<<(double)sum/a;
        cout<<"\n\nSummation of all elements is ";
        for(sum=0,j=0;j<i;j++)
            sum+=arr[j];
        cout<<sum;
        cout<<"\n\nprime numbers are ";
        for(l=0,j=0;j<i;j++)
        {
            flag=0;
            if(arr[j]<2)
                continue;
            else if(arr[j]==2){
                cout<<arr[j]<<" ";
                l++;
            }
            else{
                for(a=2;a<=arr[j]/2;a++){
                        if(arr[j]%a==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    cout<<arr[j]<<" ";
                    l++;
                }
            }
        }
        cout<<"\n\nNumber of prime number is "<<l<<endl;
        read2:
        cout<<"\nTo continue press y OR To exist press n\n";
        scanf("%c%*c",&check);
        if(check!='y' && check!='Y' && check!='N' && check!='n'){
            cout<<"Wrong Input\n";
              goto read2;
        }

    }while(check!='N' && check!='n');
    return 0;
}
