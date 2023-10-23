#include <iostream>
using namespace std;
#define SIZE 5
#define ERROR -999

class stack
{
    int arr[SIZE];
    int top;

public:
    stack()
    {
        top = -1;
        arr[0] = 0;
    }
    int push(int);
    int pop();
    int peak();
    void display();
};

int stack ::push(int element) // adding element
{
    if (top == SIZE - 1)
    {
        // cout << "Full" << endl;
        return ERROR;
    }
    arr[++top] = element;
    return 0;
}

int stack ::pop()
{
    int element;
    if (top == -1)
    {
        // cout << "Empty" << endl;
        return ERROR;
    }
    element = arr[top--];
    return element;
}

int stack ::peak()
{
    // cout<<"top: "<<top<<endl;
    if (top == -1)
    {
        // cout << "Empty" << endl;
        return ERROR;
    }
    else
        return arr[top];
}

void stack :: display()
{
    if(top == -1)
    {
        cout<<"Stack is Empty"<<endl;
        return;
    }
    else 
    {
        cout<<"Stack :"<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<"-->"<<arr[i]<<endl;
        }
    }
    return;
}

int main()
{
    stack s1;
    int menu;
    bool exitLoop = false;
    while (exitLoop == false)
    {
        cout << "Select what to do with Stack : \n1. Push\n2. Pop\n3. Peak\n4. Display All\n5. Exit" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            int val;
            cout << "Enter the Value to PUSH" << endl;
            cin >> val;
            int temp;
            temp = s1.push(val);
            if (temp == 0)
            {
                cout<<"Commit Successful"<<endl;
            }
            else
            {
                cout<<"Error, Stack is Full"<<endl;
            }
            
            break;
        case 2:
            val = s1.pop();
            if (val != ERROR)
            {
                cout << "Poped value is : " << val << endl;
            }
            else
            {
                cout<< "Error, Stack is Empty"<<endl;
            }            
            break;
        case 3:
            val = s1.peak();
            if (val != ERROR)
            {
                cout << "Peaked Value is : " << val << endl;
            }
            else
            {
                cout<<"ERROR, Stack is Empty"<<endl;
            }
            break;
        case 4:
            // cout << "Sorry yet to be done" << endl;
            s1.display();
            break;
        case 5:
            exitLoop = true;
        default:
            break;
        }
    }
    return 0;
}