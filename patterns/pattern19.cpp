#include <iostream>
using namespace std;
void pattern19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << " ";
        }

        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
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
}
int main()
{
    int x;
    cout << "Enter the number of rows : ";
    cin >> x;
    pattern19(x);
    return 0;
}