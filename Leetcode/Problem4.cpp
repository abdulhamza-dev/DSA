// Pallindrome 121 = 121
#include <iostream>
using namespace std;
int main()
{
    int x;
cout<<"Enter the number: ";
cin>>x;
    if (x < 0)
        return 0;
    int num = x, rem, ans = 0;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        if (ans > INT32_MAX / 10)
            return 0;
        ans = ans * 10 + rem;
    }
    if (x == ans)
        cout<<"yes a pallindrone : "<<ans;
    else
        return 0;
}