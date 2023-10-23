#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter a number : ";
    cin >> i;
    try
    {
        if (i > 20)
        {
            cout << "Number is more than 20" << endl;
        }
        else if (i > 15)
        {
            throw(i);
        }
        else
        {
            throw("Number is less than 15");
        }
        cout << "After Exception";
    }
    catch (int x)
    {
        cout << "Exception occured for i = " << i << endl;
    }
    catch (...)
    {
        cout << "default Exception occured";
    }
    printf("\n");
    return 0;
}