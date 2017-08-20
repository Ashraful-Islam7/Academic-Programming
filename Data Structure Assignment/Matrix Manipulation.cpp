
///This program calculate the summation of boundary,diagonal & all elements of a square Matrix



#include <iostream>
using namespace std;

int main()
{
    int i,j,k,fake,index,sum;
    char check;
    do
    {
        cout<<"Enter the row of square matrix\n";
        cin>>index;
        int m[index][index];
        cout<<"Enter the matrix row wise\n";
        for(i=0;i<index;i++)
        {
            for(j=0;j<index;j++)
            {
                cin>>m[i][j];
            }
        }
        sum=0;
        for(i=0;i<index;i++)
        {
            for(j=0;j<index;j++)
            {
                sum+=m[i][j];
            }
        }
        for(i=0;i<40;i++)
            cout<<'*';
        cout<<"\nSummation of all element is "<<sum<<endl;
        sum=0;
        for(i=0;i<4;i++)
        {
            if(i==0){
                for(k=0,j=0;j<index;j++)
                {
                    sum+=m[k][j];
                }
            }
            else if(i==1){
                for(k=index-1,j=0;j<index;j++)
                {
                    sum+=m[k][j];
                }
            }
            else if(i==2){
                for(k=1,j=0;k<=index-2;k++)
                {
                    sum+=m[k][j];
                }
            }
            else {
                for(k=1,j=index-1;k<=index-2;k++)
                {
                    sum+=m[k][j];
                }
            }
        }
        cout<<"Summation of boundary elements is "<<sum<<endl;
        sum=0;
        for(i=0;i<2;i++)
        {
            if(i==0)
            {
                for(k=0,j=0;k<index;k++,j++)
                    sum+=m[k][j];
            }
            else{
                for(k=0,j=index-1;k<index;k++,j--)
                    sum+=m[k][j];
            }
        }
        cout<<"Summation of diagonal elements is "<<sum<<endl;
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
