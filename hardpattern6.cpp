#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        
            cout << "  ";
            for (k = i; k >= 1; k--)
                cout << k<<" ";
        
        cout << "\n";
    }
}