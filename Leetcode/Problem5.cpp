// 1009. Complement of Base 10 Integer
#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0, rem, mul = 1;
    cout << "Enter the number: ";
    cin >> n;

    while (n != 0)
    {
        rem = n % 2;
        rem ^= 1;
        n /= 2;
        ans += rem * mul;
        mul = mul * 2;
    }
    cout << ans;
}