#include <iostream>
using namespace std;

void pattern20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int x;

    cout << "Enter the number of rows : ";
    cin >> x;

    pattern20(x);

    return 0;
}