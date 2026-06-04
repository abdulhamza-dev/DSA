#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        char n = 'a' + (i - 1);
        for (j = 1; j <= 5; j++)
        {
            cout << n << ' ';
        }
        cout << '\n';
    }
}