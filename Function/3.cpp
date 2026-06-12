#include<iostream>
using namespace std;

int mul(int a , int b)
{
int ans;
ans = a * b;
return ans;
}
void fun()
{
cout<<"hello baccho";
}
int main()
{
int m,n;
cout<<"Enter the number a for sum: ";
cin>>m;
cout<<"Enter the number b for sum: ";
cin>>n;
cout<<"sum of number's: "<<mul(n,m)<<endl;
fun();
}