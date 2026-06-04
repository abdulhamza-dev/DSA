#include <iostream>
using namespace std;
int main()
{
    int i, j ,n;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
n=(i-1)*5+j;
            cout << n;
        }
        cout << '\n';
    }
}