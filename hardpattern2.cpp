#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, n;
    cout << "input the number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            cout << "  ";
        for (j = 1; j <= i; j++)
        
            cout << setw(2) << i;
        
        cout << endl;
    }
}