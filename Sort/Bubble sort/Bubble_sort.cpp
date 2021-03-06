#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

void show()
{
    cout<<"\n\n\t******************** Enter Your Choice ***********************\n"<<endl;
    cout<<"\t\t\t1.Bubble Sort with given Input\n\n";
    cout<<"\t\t\t2.Bubble Sort with Random data\n\n";
    cout<<"\t\t\t3.Exit\n\n";
}

void bubble()
{
    int arr[500],i=0,j,k,l;
    char c='\0';
    cout<<"Enter the element of the array & Press Enter key to terminate Input\n\n\n";
    while(c!='\n')
        scanf("%d%c",&arr[i++],&c);
    for(k=0;k<i-1;k++)
    {
        for(j=0,l=1;l<i-k;j++,l++)
        {
            if(arr[j]>arr[l]){
                int temp;
                temp=arr[j];
                arr[j]=arr[l];
                arr[l]=temp;
            }
        }
    }
    cout<<"\n\nAfter Sorting Data Become\n\n";
    for(j=0;j<i;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    system("pause");
    system("cls");


}

void bubble_ran(){

    int arr[500],i=0,j,k,l,len;
    cout<<"Enter the Number of random Data for sorting(Number should be <=500)\n";
    cin>>len;
    while(i<len)
        arr[i++]= 1 + rand()%500;
    cout<<"\nBefore Sorting Data\n\n";
    for(j=0;j<i;j++){
        //cout<<arr[j]<<" ";
        printf("%3d ",arr[j]);
    }
    for(k=0;k<i-1;k++)
    {
        for(j=0,l=1;l<i-k;j++,l++)
        {
            if(arr[j]>arr[l]){
                int temp;
                temp=arr[j];
                arr[j]=arr[l];
                arr[l]=temp;
            }
        }
    }
    cout<<"\n\nAfter Sorting Data Become\n\n";
    for(j=0;j<i;j++){
        //cout<<arr[j]<<" ";
        printf("%3d ",arr[j]);
    }
    cout<<endl<<endl;
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
                bubble();
                break;
            case 2:
                bubble_ran();
                break;
            case 3:
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
