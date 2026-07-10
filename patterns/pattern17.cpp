#include <iostream>
using namespace std;

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << char('A' + j);
        }

        cout << endl;
    }
}

int main()
{
    int x;

    cout << "Enter the number of rows : ";
    cin >> x;

    pattern17(x);

    return 0;
}