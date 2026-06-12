#include <iostream>
using namespace std;
bool prime(int n = 3) // default parameter
{
    if (n < 2)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int Factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int a, b;
    cout << "I/P the number 1: ";
    cin >> a;
    cout << "I/P the number 2: ";
    cin >> b;
    cout << "prime of a: " << prime(a) << endl;
    cout << "factorial of a: " << Factorial(a) << endl;
    cout << "prime of b:" << prime(b) << endl;
    cout << "factorial of b: " << Factorial(b);
}