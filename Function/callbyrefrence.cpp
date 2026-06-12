#include<iostream>
using namespace std;
void incr(int&n)
{
n++;
}
int main()
{
int a;
cout<<"Enter the number: ";
cin>>a;
incr(a);
cout<<a;
}