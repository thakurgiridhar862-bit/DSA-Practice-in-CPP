#include <iostream>
using namespace std;
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
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
    pattern18(x);
    return 0;
}