#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;


int partition(int arr[],int start,int end)
{
    int pivot=arr[end];
    int part_index=start;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[part_index]);
            part_index++;
        }
    }
    swap(arr[part_index],arr[end]);
    return part_index;
}

void quick_sort(int arr[],int start,int end)
{
    if(start<end)
    {
       int pindex=partition(arr,start,end);
        quick_sort(arr,start,pindex-1);
        quick_sort(arr,pindex+1,end);
    }
}

void menu()
{
    cout<<"\n\n************Enter Your Choice*******************\n";
    cout<<"\t\t1.Quick Sort\n";
    cout<<"\t\t2.Exit\n";
}

int main()
{
    int temp,c,i,arr[100];
    char ch;
    while(1)
    {
        menu();
        cin>>c;
        system("cls");
        i=0;
        if(c==1){
            ch='\0';
            cout<<"Enter Elements of the array to sort & Press Enter to terminate Input\n";
            while(ch!='\n')
                scanf("%d%c",&arr[i++],&ch);
            quick_sort(arr,0,i-1);
            cout<<"After sorting\n";
            for(int j=0;j<i;j++)
                cout<<arr[j]<<" ";
            cout<<endl;
            system("pause");
            system("cls");
        }
        else if(c==2)
            exit(1);
        else
        {
            cout<<"Wrong Choice\n";
            system("pause");
            system("cls");
        }
    }
    return 0;
}
