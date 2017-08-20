#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char* lg(float m);

struct student{
    char name[30],lg[2];
    float marks;
    int roll;
};

int main()
{
    char check;
    do{
        int i,index;
        printf("How many students: ");
        scanf("%d%*c",&index);
        struct student s[index];
        for(i=0;i<index;i++)
        {
            printf("Student %d :\n",i+1);
            printf("\tName: ");
            gets(s[i].name);
            printf("\tRoll: ");
            scanf("%d",&s[i].roll);
            printf("\tMarks: ");
            scanf("%f%*c",&s[i].marks);
            strcpy(s[i].lg,lg(s[i].marks));

        }
        for(i=0;i<40;i++)
            printf("*");
        printf("\n");
        printf("Roll\tName\t\t\tGrade\n");
        for(i=0;i<index;i++){
            printf("%d\t",s[i].roll);
            printf("%-17s\t",s[i].name);
            printf("%s\n",s[i].lg);
        }
        read:
        cout<<"\nTo continue press y OR To exist press n\n";
        cin>>check;
        if(check!='y' && check!='Y' && check!='N' && check!='n'){
            cout<<"Wrong Input\n";
              goto read;
        }
    }while(check!='N' && check!='n');
    return 0;
}

char* lg(float m)
{
    if(m>79)
        return "A+";
    else if(m>74 && m<80)
        return "A";
    else if(m>69 && m<75)
        return "A-";
    else
        return "F";

}
