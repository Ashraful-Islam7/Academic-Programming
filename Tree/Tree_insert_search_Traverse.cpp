#include <iostream>
#include <cstdlib>

using namespace std;

struct bst_node{
    int data;
    bst_node* left;
    bst_node* right;
};

bst_node* get_node(int data){
    bst_node *new_node = new bst_node;
    new_node->data=data;
    new_node->left=new_node->right=NULL;
    return new_node;
}

bst_node* insert_node(bst_node* root,int data)
{
    if(root==NULL){
        root=get_node(data);
    }
    else if(data<=root->data){
        root->left=insert_node(root->left,data);
    }
    else{
        root->right=insert_node(root->right,data);
    }
    return root;
}

bool search(bst_node *root,int data)
{
    if(root==NULL)
        return false;
    else if(root->data==data)
        return true;
    else if(data<=root->data)
        return search(root->left,data);
    else
        return search(root->right,data);
}

void preorder(bst_node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(bst_node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder(bst_node* root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void menu()
{
    cout<<"\n\n*****************Enter Your Choice*******************\n\n";
    cout<<"\t\t1.Insert\n";
    cout<<"\t\t2.Search\n";
    cout<<"\t\t3.Preorder\n";
    cout<<"\t\t4.Inorder\n";
    cout<<"\t\t5.Postorder\n";
    cout<<"\t\t6.Exit\n";
}

int main()
{
    bst_node *root=NULL;
    int c,data;
    while(1)
    {
        menu();
        cin>>c;
        system("cls");
        switch(c){

        case 1:
            cout<<"Enter data to insert: ";
            cin>>data;
            root=insert_node(root,data);
            system("cls");
            break;
        case 2:
            cout<<"Enter data to search: ";
            cin>>data;
            system("cls");
            if(search(root,data))
                cout<<"Data Found\n";
            else
                cout<<"Data Not Found\n";
            system("pause");
            system("cls");
            break;
        case 3:
            preorder(root);
            cout<<endl;
            system("pause");
            system("cls");
            break;
        case 4:
            inorder(root);
            cout<<endl;
            system("pause");
            system("cls");
            break;
        case 5:
            postorder(root);
            cout<<endl;
            system("pause");
            system("cls");
            break;
        case 6:
            exit(1);
            break;
        }
    }
    return 0;
}
