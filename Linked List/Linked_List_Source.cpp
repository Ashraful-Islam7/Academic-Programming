#include <iostream>
#include <cstdlib>
#include "Linked_List_Class.h"
#include "Linked_List_Function.h"

using namespace std;


int main()
{
    linked_list list;
    char c;
    while(1)
    {
        list.choice();
        cin>>c;
        system("cls");
        switch(c)
        {
            case '1':
                list.insert_node();
                break;
            case '2':
                list.insert_nth_node();
                break;
            case '3':
                list.delete_node();
                break;
            case '4':
                list.search_node();
                break;
            case '5':
                list.display_list();
                break;
            case '6':
                list.reverse_list();
                break;
            case '7':
                list.sort_list();
                break;
            case '8':
                exit(1);
                break;
            default :
                cout<<"Wrong Choice\n";
                system("pause");
                system("cls");
                break;
        }
    }
    return 0;
}
