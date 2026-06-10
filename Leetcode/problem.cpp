#include <iostream>
using namespace std;
int main()
{
    int num, rem, ans = 0;
    cout << "enter the number: ";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        if (ans > INT32_MAX / 10 || ans < INT32_MIN / 10)
            return 0;
        ans = ans * 10 + rem;
    }
    cout << ans;
}