#include<iostream>
#include<cstdlib>

using namespace std;

void Merge(int arr1[],int arr2[],int arr[],int l,int r)
{
    int i=0,j=0,k=0;
    while(i<l && j<r){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<l){
        arr[k]=arr1[i];
        i++;
        k++;
    }
     while(j<r){
        arr[k]=arr2[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int n)
{
    if(n<2)
        return;
    int l,r;
    l=n/2;
    r=n-l;
    int arrl[l],arrr[r];
    merge_sort(arrl,l);
    merge_sort(arrr,r);
    Merge(arrl,arrr,arr,l,r);

}

int main()
{
    cout<<"Enter 10 integer\n";
    int l,arr[8];
    for(int i=0;i<8;i++)
    {
        cin>>arr[i];
    }
    l=sizeof(arr)/4;
    merge_sort(arr,l);
    cout<<"Now Array is\n";
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
