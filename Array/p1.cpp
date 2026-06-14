#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    cout << "Enter the number: ";
    cin >> n;
    int a[1000]; //should not put the size of array as variable
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }
    cout << ans;
}