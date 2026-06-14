// Search Element
#include <iostream>
using namespace std;
int main()
{
    int  arr[6] = {1, 5, 7, 9, 10, 12};;
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 9)
        {
            index = i;
            break;
        }
    }
    cout << index;
}