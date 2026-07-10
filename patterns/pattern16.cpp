#include <iostream>
using namespace std;

void pattern16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;

        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }

        cout << endl;
    }
}

int main()
{
    int x;

    cout << "Enter the number of rows : ";
    cin >> x;

    pattern16(x);

    return 0;
}