//power of 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    if (n < 1)
    {
        cout << 0;
        return 0;
    }

    while (n != 1)
    {
        if (n % 2 == 1)
        {
            cout << 0;
            return 0;
        }
        n /= 2;
    }
    cout << n;
}
