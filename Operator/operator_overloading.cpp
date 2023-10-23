#include <iostream>
using namespace std;
class date {
    public:
    int month_days[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
    int d, m, y;
    date(){}
    date(int dd,int mm, int yy) //contructor
    {
        d=dd; m=mm; y=yy;
    }
    void print_date() //printing the date which is called
    {
        cout<<d<<"/"<<m<<"/"<<y<<endl;
    }
    void print_age()
    {
        cout<<y<<" Years "<<m<<" Months "<<d<<" Days "<<endl;
    }
    date operator- (date d1) //substracting two dates
    {
        date temp;
        temp.d = d - d1.d;
        temp.m = m - d1.m;
        temp.y = y - d1.y;
        return temp;
    }
    date operator+ (int days){}
    void day_of_the_year()
    {
        for (int i = 1; i < m; i++)
        {
            
        }
        
    }
};

int main()
{
    date today(28,8,2023), dob(01,8,2004);
    today.print_date();
    date age = today-dob;
    age.print_age();    
}