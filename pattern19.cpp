#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
{ 
        for (j = 1; j <= i; j++)
        {
            char name = 'A' + (j - 1);
            cout << name;
        }
        cout << '\n';
    }
}
