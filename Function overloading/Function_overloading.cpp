#include <iostream>
using namespace std;
int add(int a ,int b)
{
    cout<<"Add with 2 int"<<endl;
    return (a+b);
}
int add(int a ,float f)
{
    cout<<"Add with int and float"<<endl;
    return ((float)a+f);
}
int add(float x ,float y)
{
    cout<<"Add with 2 float"<<endl;
    return (x+y);
}
int main()
{
    int i=4, j=2;
    float x=12.5,y=11.5;
    cout<<add(i,j)<<endl;
    cout<<add(x,y)<<endl;
    cout<<add(i,y);
}