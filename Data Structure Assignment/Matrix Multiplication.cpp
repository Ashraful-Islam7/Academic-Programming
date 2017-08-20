/**This program is to multiply two matrix**/



#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int i,j,k,l,r1,c1,r2,c2;
    char check;
    do
    {
        cout<<"Enter row & column of first matrix\n";
        cin>>r1>>c1;
        int a[r1][c1];
        cout<<"Enter the matrix row wise\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter row & column of second matrix\n";
        cin>>r2>>c2;
        int b[r2][c2],c[r1][c2];
        cout<<"Enter the matrix row wise\n";
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cin>>b[i][j];
            }
        }
        if(c1==r2)
        {
            int sum;
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                {
                    sum=0;
                    for(k=j,l=0;l<c1;l++)
                    {
                        sum+=a[i][l]*b[l][k];
                    }
                    c[i][j]=sum;
                }
            }
            cout<<"Result\n";
            for(i=0;i<40;i++)
                cout<<"*";
            cout<<endl;
            for(i=0;i<r1;i++)
            {
                cout<<"|";
                for(j=0;j<c2;j++)
                {
                    printf("%4d ",c[i][j]);
                }
                cout<<"|"<<endl;
            }
        }
        else{
            cout<<"Matrix multiplication Impossible\n";
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
