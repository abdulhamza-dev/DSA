#include <iostream>
using namespace std;
void Swap(int &a, int &b) // pass by refrence = &.
{
    int c;
    c = a;
    a = b;
    b = c;
}
void Swap(float &a, float &b) // Funtion overloading.
{
    float c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int a, b;
    cout << "I/P the number a: ";
    cin >> a;
    cout << "I/P the number b: ";
    cin >> b;
    Swap(a, b);
    cout << a << endl
         << b << endl;
    float c, d;
    c = 4.1, d = 3.8;
    Swap(c, d);
    cout << c << endl
         << d << endl;
}