#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

void show()
{
    cout<<"\n\n\t******************** Enter Your Choice ***********************\n"<<endl;
    cout<<"\t\t\t1.Linear search\n\n";
    cout<<"\t\t\t2.Exit\n\n";
}

void l_search()
{
    int i=0,arr[100];
    char c='\0';
    cout<<"Enter the element of the array & Press Enter key to Terminate the Input\n";
    while(c!='\n')
        scanf("%d%c",&arr[i++],&c);
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
                    l_search();
                    break;
            case 2:
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
