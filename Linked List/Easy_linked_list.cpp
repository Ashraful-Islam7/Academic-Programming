#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head=NULL;

int count_node(){
    node* temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}

void updated_list(){
    printf("\n................................................................................\n\nUpdated List: ");
    node *temp=head;
    if(temp==NULL)
        printf("Empty");
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n\n\n................................................................................");
}

void insert_node()
{
    int pos,counter=count_node();
    printf("\n\nEnter Position: ");
    scanf("%d",&pos);
    if(pos<=counter+1){
        node *pre,*temp=head,*new_node=new node;
        int data;
        printf("\nEnter Data :");
        scanf("%d",&new_node->data);
        if(pos==1){
            if(temp==NULL){
                new_node->next=NULL;
                head=new_node;
            }
            else{
                new_node->next=temp;
                head=new_node;
            }
        }
        else if(pos==counter+1){
            new_node->next=NULL;
            while(temp!=NULL){
                pre=temp;
                temp=temp->next;
            }
            pre->next=new_node;
        }
        else{
            int c=1;
            while(c!=pos){
                pre=temp;
                temp=temp->next;
                c++;
            }
            pre->next=new_node;
            new_node->next=temp;
        }
    }
    else{
        printf("\n\nPOSITION NOT AVAILABLE\n\n");
        system("pause");
    }
    system("cls");
}

void delete_node(){
    int counter=0,pos;
    counter=count_node();
    printf("\n\nEnter Position: ");
    scanf("%d",&pos);
    if(pos<=counter){
        node *pre,*temp=head;
        if(pos==1){
            if(temp->next==NULL){
                delete temp;
                head=NULL;
            }
            else{
                pre=temp;
                temp=temp->next;
                head=temp;
                delete pre;
            }
        }
        else if(pos==counter){
            while(temp->next!=NULL){
                pre=temp;
                temp=temp->next;
            }
            pre->next=NULL;
            delete temp;
        }
        else{
            int c=1;
            while(c!=pos){
                pre=temp;
                temp=temp->next;
                c++;
            }
            pre->next=temp->next;
            delete temp;
        }
    }
    else{
        printf("\n\nPOSITION NOT AVAILABLE\n\n");
        system("pause");
    }
    system("cls");
}

void search_node(){
    node* temp=head;
    int data,flag=0;
    printf("Data you want to search: ");
    scanf("%d",&data);
    while(temp!=NULL){
        if(temp->data==data){
            flag++;
            break;
        }
        temp=temp->next;
    }
    if(flag==1)
        printf("\n\nDATA FOUND\n\n");
    else
        printf("\n\nDATA NOT FOUND\n\n");
    system("pause");
    system("cls");
}

void menu(){
    printf("\n\n************** Enter Your Choice *******************\n\n");
    printf("\t\t1.Insert\n\t\t2.Delete\n\t\t3.Search\n\t\t4.Exit\n");
}

int main(){
    int choice;
    while(1){
        updated_list();
        menu();
        scanf("%d",&choice);
        system("cls");
        if(choice==1)
            insert_node();
        else if(choice==2)
            delete_node();
        else if(choice==3)
            search_node();
        else if(choice==4){
            updated_list();
            exit(1);
        }
    }
    return 0;
}
