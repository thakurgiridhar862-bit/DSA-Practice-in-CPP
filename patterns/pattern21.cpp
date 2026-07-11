#include <iostream>
using namespace std;

void pattern21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int x;

    cout << "Enter the number of rows : ";
    cin >> x;

    pattern21(x);

    return 0;
}