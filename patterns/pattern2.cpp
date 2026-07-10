#include <iostream>
using namespace std;
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
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
    pattern2(x);
    return 0;
}