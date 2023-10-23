#include <iostream>
using namespace std;

class person
{ 
    char name[20];
    // person(char *n)
    // {
    //     strcpy(name,n);
    // }
    public:
    setName(char *n)
    {
        strcpy(name,n);
    }
    display_name()
    {
        cout<<"Name : "<<name;
    }
};
class student : person
{
    int prn;
    char course[20];
    public:
    student(char *n, int p)
    {
        prn = p;
        setName(n);
    }
    display_course()
    {
        cout<<"Course";
    }
};

class faculty : person
{
    int staff_id;
    display_id()
    {
        cout<<staff_id;
    }
};

int main()
{
    // person p("sahil");
    char *name = "Sahil";
    student s(name,504);
    return 0;
}