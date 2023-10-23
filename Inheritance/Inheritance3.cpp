#include <iostream>
using namespace std;

class rectangle
{
    int l, b;

public:
    rectangle() {}
    rectangle(int length, int breadth)
    {
        l = length;
        b = breadth;
        cout << "Values : L :" << l << " , B : " << b << endl;
    }
    setLength(int length)
    {
        l = length;
        cout << "Values : L : " << l << endl;
    }
    setBreadth(int breadth)
    {
        b = breadth;
        cout << "Values : B : " << b << endl;
    }
    int area_rectangle()
    {
        int a = l * b;
        return a;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
};

class cuboid : public rectangle
{
    int h;

public:
    cuboid(int length, int height, int breadth)
    {
        h = height;
        setLength(length);
        setBreadth(breadth);
    }
};

int main()
{
    cuboid c(2, 2, 2);
    int area = c.area_rectangle();
    cout << "Area of rect. = " << area;
    return 0;
}