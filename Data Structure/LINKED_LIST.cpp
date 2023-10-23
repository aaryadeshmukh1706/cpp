#include <iostream>
using namespace std;

// struct node // This structure is known as Self Referential Structure
// {
//     int data;
//     struct node *next;
// };

struct node
{
    int data;
    struct node *next;
};

class linked_list
{
public:
    struct node *head;
    linked_list();
    ~linked_list();
    add_node_begining()
    {
        struct node *newnode;
        int x;
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "enter data for the new node: ";
        cin >> x;
        newnode->data = x;
        newnode->next = NULL;
        newnode->next = head; // 2
        head = newnode;       // 1
    }
    del_node_begining()
    {
        struct node *temp = head;
        if (head == NULL)
            return 0;
        head = head->next;
        free(temp);
    }
    add_node_end()
    {
        if (head == NULL)
        {
            add_node_begining();
            return 0;
        }
        struct node *temp;
        struct node *newnode;
        int x;
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter data for new node : " << endl;
        cin >> x;
        newnode->data = x;
        newnode->next = NULL;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    del_node_end()
    {
        if (head == NULL)
            return 0;
        if (head->next == NULL)
        {
            del_node_begining();
        }
    }
    display_all()
    {
        struct node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << NULL << endl;
    }
};

linked_list::linked_list()
{
    head = NULL;
}

linked_list::~linked_list()
{
}

int main()
{
    linked_list l1;
    int menu;
    while (1)
    {
        cout << "Menu : " << endl;
        cout << "1. Add Node at begining" << endl;
        cout << "2. delete Node at begining" << endl;
        cout << "3. Add Node at end" << endl;
        cout << "4. delete Node at end" << endl;
        cout << "5. Display All" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            l1.add_node_begining();
            break;
        case 2:
            l1.del_node_begining();
            break;
        case 3:
            l1.add_node_end();
            break;
        case 4:
            l1.del_node_end();
            break;
        case 5:
            l1.display_all();
            break;
        default:
            break;
        }
    }
}