#include <iostream>
using namespace std;

class vehicle
{
    private:
    int pro = 12;
    public:
    int pub = 15;
    protected:
    int protec = 20;
    public:
    vehicle()
    {
        cout<< "This is a vehicle class"<<endl;
    }
    protected:
    void display()
    {
        cout<<"Protected function in class vehicle"<<endl;
    }
};

class car : private vehicle
{
    int i,j;
    public:
    car()
    {
        display();
        cout<<"This is a car"<<endl;
        cout<<"Private : "<<pro<<" Public : "<<pub<<" Protected : "<<protec<<endl;
    }
};

int main()
{
    car c;
    // c.display();
    return 0;
}