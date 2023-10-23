#include <iostream>
using namespace std;

class cube {
    public:
    double height;
    double width;
    double length;
    double volume()
    {
        double vol = height * width * length;
        disp_vol(vol);
        return vol;
    }
    double surface_area()
    {
        double surface_ar = (length*height) + (height*width) + (width*length);
        dis_surface_area(surface_ar);
    }
    private:
    void disp_vol(double vol)
    {
        cout<<"Volume = "<<vol<<endl;
    }
    void dis_surface_area(double surface_ar)
    {
        cout<<"Surface Area = "<<surface_ar<<endl;
    }
    public:
    void input()
    {
        cout << "Please enter Height " ;
        cin>>height;
        cout << "Please enter Width " ;
        cin>>width;
        cout << "Please enter length " ;
        cin>>length;
    }
};

class date {
    int date;
    int month;
    int year;
    char *month_names[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
    public:
    void input()
    {
        cout<<"Enter the Date: ";
        cin>>date;
        cout<<"Enter the Month: ";
        cin>>month;
        cout<<"Enter the Year: ";
        cin>>year;
    }
    void isLeap()
    {

    }
    void display_date()
    {
        cout<<date<<"/"<<month<<"/"<<year<<endl;
    }

    void display_month()
    {
        cout<<"Month is :"<<month_names[month-1];
    }
    void display_weekend()
    {

    }
};

int main()
{
    cube c1;
    c1.input();
    // double vol = c1.height * c1.width * c1.length;
    double vol = c1.volume();
    double surface_ar = c1.surface_area();
    // cout<<"Volume = "<<vol;
    // c1.disp_vol(vol);

    date d1;
    d1.input();

    d1.display_date();
    d1.display_month();

}