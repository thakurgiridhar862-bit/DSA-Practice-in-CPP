#include <iostream>
using namespace std;
void pattern8(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int x;
    cout << "Enter the number of rows : ";
    cin >> x;
    pattern8(x);
    return 0;
}