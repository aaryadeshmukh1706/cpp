#include <iostream>
using namespace std;
class divide
{
public:
    divide()
    {
        cout << "Default Constructor was called" << endl;
    }
    int div(int a, int b)
    {
        try
        {
            if (b==0)
            {
                throw runtime_error("Invalid Number, Zero can't be denominator");
            }
            return a/b;
            
        }
        catch(exception& e)
        {
            cerr <<"Exception : "<< e.what() << endl;
            return 0;
        }
        
    }
    ~divide()
    {
        cout << "Default Destructor was called" << endl;
    }
};
int main()
{
    divide d1;
    int ans = d1.div(55555,0);
    cout<<"Division is : "<<ans<<endl;
    return 0;
}