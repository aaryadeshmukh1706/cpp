#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int x;
    cout << "Enter 2 Numbers : \n";
    cin >> i;
    cin >> j;
    try
    {
        if (j == 0)
        {
            throw runtime_error("Division by 0");
        }
        x = i / j;
    }
    catch (exception &e)
    {
        cerr << "Exception : " << e.what() << endl;
        
    }
    cout << "Division is x = " << x;
    return 0;
}