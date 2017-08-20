#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int count_node(struct node **head){
    struct node* st=*head;
    int c=0;
    while(st!=NULL){
        c++;
        st=st->next;
    }
    return c;
}

void updated_list(struct node **head){
    printf("\n................................................................................\n\nUpdated List: ");
    struct node *begin_node=*head;
    if(begin_node==NULL)
        printf("Empty");
    else{
        while(begin_node!=NULL){
            printf("%d ",begin_node->data);
            begin_node=begin_node->next;
        }
    }
    printf("\n\n\n................................................................................");
}

void insert_node(struct node **head){
    int counter=0,pos;
    struct node *test=*head;
    counter=count_node(&test);
   // counter=count_node(&*head);
    printf("\n\nEnter Position: ");
    scanf("%d",&pos);
    if(pos<=counter+1){
        struct node *pre,*temp=*head,*new_node=(struct node*)malloc(sizeof(struct node));
        int data;
        printf("\nEnter Data :");
        scanf("%d",&data);
        new_node->data=data;
        if(pos==1){
            if(temp==NULL){
                new_node->next=NULL;
                *head=new_node;
            }
            else{
                new_node->next=temp;
                *head=new_node;
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

void delete_node(struct node **head){
    int counter=0,pos;
    counter=count_node(&*head);
    printf("\n\nEnter Position: ");
    scanf("%d",&pos);
    if(pos<=counter){
        struct node *pre,*temp=*head;
        if(pos==1){
            if(temp->next==NULL){
                free(temp);
                *head=NULL;
            }
            else{
                pre=temp;
                temp=temp->next;
                *head=temp;
                free(pre);
            }
        }
        else if(pos==counter){
            while(temp->next!=NULL){
                pre=temp;
                temp=temp->next;
            }
            pre->next=NULL;
            free(temp);
        }
        else{
            int c=1;
            while(c!=pos){
                pre=temp;
                temp=temp->next;
                c++;
            }
            pre->next=temp->next;
            free(temp);
        }
    }
    else{
        printf("\n\nPOSITION NOT AVAILABLE\n\n");
        system("pause");
    }
    system("cls");
}

void search_node(struct node **head){
    struct node* temp=*head;
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
    struct node *head=NULL;
    int choice;
    while(1){
        updated_list(&head);
        menu();
        scanf("%d",&choice);
        system("cls");
        if(choice==1)
            insert_node(&head);
        else if(choice==2)
            delete_node(&head);
        else if(choice==3)
            search_node(&head);
        else if(choice==4){
            updated_list(&head);
            exit(1);
        }
    }
    return 0;
}
