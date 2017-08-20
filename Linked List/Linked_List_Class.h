class node{
    int data;
    node* next;
public:
    void set_data(int ddata){
        data=ddata;
    }
    void set_next(node* anext){
        next=anext;
    }
    int get_data(){
        return data;
    }
    node* get_next(){
        return next;
    }
};


class linked_list{
    node* head;
public:
    linked_list(){
        head=NULL;
    }
    void insert_node();
    void insert_nth_node();
    void delete_node();
    void search_node();
    void display_list();
    void reverse_list();
    void sort_list();
    void choice();
};
