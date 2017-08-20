#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int in1,in2;
    char check;
    do
    {
        int *a,*b,k;
        cout<<"Enter Index of array\n";
        cin>>in1;
        read1:

        a=(int*)calloc(in1,sizeof(int));
        if(!(a=(int*)calloc(in1,sizeof(int))))
            goto read1;
        cout<<"Enter the elements of first array\n";
        for(int i=0;i<in1;i++){
            cin>>a[i];
        }
        cout<<"Enter Index of array u want to mers\n";
        cin>>in2;
        b=(int*)calloc(in2,sizeof(int));
        read2:

        a=(int*)calloc(in1,sizeof(int));
        if(!(b=(int*)calloc(in2,sizeof(int))))
            goto read2;
        cout<<"Enter the elements of second array\n";
        for(int i=0;i<in2;i++){
            cin>>b[i];
        }
        read3:

        a=(int*)realloc(a,in1+in2);
        if(!(a=(int*)realloc(a,5)))
            goto read3;
        for(int i=0;i<2;i++){
            cout<<a[i]<<" ";
        }
//        for(int i=0,k=in1;i<in2;k++,i++)
//        {
//            a[k]=b[i];
//        }
//        for(int i=0;i<in1+in2;i++)
//        {
//            cout<<a[i]<<" ";
//        }
        free(a);
        free(b);
        read4:
        cout<<"\nTo continue press y OR To exist press n\n";
        cin>>check;
        if(check!='y' && check!='Y' && check!='N' && check!='n'){
            cout<<"Wrong Input\n";
              goto read4;
        }

    }while(check!='N' && check!='n');
    return 0;
}
