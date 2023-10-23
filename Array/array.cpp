// Sahil Narde
#include <iostream>
using namespace std;

int main()
{
    int rows1, column1;
    cout << "Enter Number of Rows in Matrix 1 :" << endl;
    cin >> rows1;
    cout << "Enter Number of Columns in Matrix 1 :" << endl;
    cin >> column1;
    cout << "Enter the values in Matrix 1 " << endl;
    int arr1[rows1][column1];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    int rows2, column2;
    cout << "Enter Number of Rows in Matrix 2 :" << endl;
    cin >> rows2;
    cout << "Enter Number of Columns in Matrix 2 :" << endl;
    cin >> column2;
    cout << "Enter the values in Matrix 2 " << endl;
    int arr2[rows2][column2];
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int sum[rows1][column1];
    if (rows1 == rows2 && column1 == column2)
    {
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
}