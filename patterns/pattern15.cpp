#include <iostream>
using namespace std;

void pattern15(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
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

    pattern15(x);

    return 0;
}