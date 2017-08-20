#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

void show()
{
    cout<<"\n\n\t******************** Enter Your Choice ***********************\n"<<endl;
    cout<<"\t\t\t1.Binary search\n\n";
    cout<<"\t\t\t2.Linear search\n\n";
    cout<<"\t\t\t3.Exit\n\n";
}

void l_search()
{
    int i=0,arr[100];
    char c='\0';
    cout<<"Enter the element of the array & Press Enter key to Terminate the Input\n";
    while(c!='\n')
        scanf("%d%c",&arr[i++],&c);
    again:
    cout<<"Enter the data you want to search: ";
    int f=0,data;
    cin>>data;
    for(int j=0;j<i;j++)
    {
        if(arr[j]==data){
            f++;
            break;
        }
    }
    if(f!=0){
        cout<<"Data Found\n";
        system("pause");
        system("cls");
    }
    else{
        cout<<"Data Not Found\n";
        system("pause");
        system("cls");
    }

}


void b_search()
{
    int i=0,arr[100],arrOr[100];
    char c='\0';
    cout<<"Enter the element of the array & Press Enter key to Terminate the Input\n";
    while(c!='\n'){
        scanf("%d%c",&arr[i++],&c);
        arrOr[i-1]=arr[i-1];
    }
    again:
    cout<<"Enter the data you want to search: ";
    int f=0,data;
    scanf("%d%*c",&data);
    sort(arr,arr+i);
    int mid,start=0,end=i-1;
    mid=(start+end)/2;
    if(arr[mid]==data)
        f++;
    else{
        while(start<=end){
            if(arr[mid]>data){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+end)/2;
            if(arr[mid]==data){
                f++;
                break;
            }
        }
    }
    if(f!=0){
        cout<<"Data Found\n";
        system("pause");
        system("cls");
    }
    else{
        cout<<"Data Not Found\n";
        system("pause");
        system("cls");
    }
}

int main()
{
    while(1)
    {
        show();
        int i;
        cin>>i;
        system("cls");
        switch(i)
        {
            case 1:
                    b_search();
                    break;
            case 2:
                    l_search();
                    break;
            case 3:
                    exit(1);
                     break;
            default :
                    cout<<"Wrong choice\n";
                    system("pause");
                    system("cls");
                    break;
        }
    }
    return 0;
}
