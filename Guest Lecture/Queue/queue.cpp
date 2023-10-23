#include <iostream>
using namespace std;
#define SIZE 5

class Queue
{
    int front, rear;
    int arr[SIZE];
    int size;

public:
    Queue()
    {
        front = rear = -1;
    }
    void EnQueue(int item);
    int DeQueue();
    void display();
};

void Queue ::EnQueue(int element)
{
    if (rear == SIZE - 1)
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        arr[rear] = element;
        // arr[rear++]=element;
    }
}

int main()
{
}