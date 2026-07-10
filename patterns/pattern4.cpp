#include <iostream>
using namespace std;
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
int main()
{
    int x;
    cout << "Enter the number of rows : ";
    cin >> x;
    pattern4(x);
    return 0;
}