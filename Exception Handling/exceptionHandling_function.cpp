#include <iostream>
using namespace std;
void function(char *str, int x)
{
    if(str == NULL)
    {
        throw(str);
    }
    if (x ==0)
    {
        throw(x);
    }
    else
    {
        cout<<"String is : "<<str<<endl;
        cout<<"Number is : "<<x<<endl;
    }
}
int main()
{
    // int i;
    // cout << "Enter a number : ";
    // cin >> i;
    try
    {
        function(NULL,0);
    }
    catch (char *str)
    {
        cout << "Exception occured (Char) str = " << str << endl;
    }
    catch (int x)
    {
        cout << "Exception occured (Number) i = " << x << endl;
    }
    catch (...)
    {
        cout << "default Exception occured";
    }
    printf("\n");
    return 0;
}