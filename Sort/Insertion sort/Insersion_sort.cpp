#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

void show()
{
    cout<<"\n\n\t******************** Enter Your Choice ***********************\n"<<endl;
    cout<<"\t\t\t1.insertion Sort with given Input\n\n";
    cout<<"\t\t\t2.Exit\n\n";
}

void insertion()
{
    int arr[500],i=0,j,k,l;
    char c='\0';
    cout<<"Enter the element of the array & Press Enter key to terminate Input\n\n\n";
    while(c!='\n')
        scanf("%d%c",&arr[i++],&c);
    for(k=1;k<i;k++)
    {
        int loc=k,temp=arr[loc];
        while(loc>0 && arr[loc-1]>temp)
        {
            arr[loc]=arr[loc-1];
            loc--;
        }
        arr[loc]=temp;
    }
    cout<<"\n\nAfter Sorting Data Become\n\n";
    for(j=0;j<i;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    system("pause");
    system("cls");


}

int main()
{
    while(1)
    {
        int j;
        show();
        cin>>j;
        system("cls");
        switch(j)
        {
            case 1:
                insertion();
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
