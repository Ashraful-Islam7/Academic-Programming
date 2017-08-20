#include <iostream>

using namespace std;

int main()
{
    char check,n;
    int  i,index,new_index,new_element;
    do{

        read:
        cout<<"How many elements\n";
        cin>>n;
        if(n<'1' || n>'9'){
            cout<<"Wrong Input\n";
            goto read;
        }
        index=n-'0';
        int arr[index];
        cout<<"Enter the elements\n";
        for(i=0;i<index;i++){
            cin>>arr[i];
        }
        read1:
        cout<<"Enter Index to delete an element from the array\n";
        cin>>new_index;
        if(new_index<0 || new_index>index-1){
            cout<<"Wrong Index\n";
            goto read1;
        }
       // i=index;
        for(new_index;new_index<index;new_index++){
            arr[new_index]=arr[new_index+1];
        }
        for(i=0;i<index-1;i++){
            cout<<arr[i]<<" ";
        }
        read2:
        cout<<"\nTo continue press y OR To exist press n\n";
        cin>>check;
        if(check!='y' && check!='Y' && check!='N' && check!='n'){
            cout<<"Wrong Input\n";
              goto read2;
        }

    }while(check!='N' && check!='n');
    return 0;
}
