#include <iostream>
using namespace std;
int main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            s = j * j;
            cout << s;
        }
        cout << "\n";
    }
}