#include<iostream>
using namespace std;
int sum(int a , int b) // multiple parameter
{
int ans;
ans = a + b;
return ans;
}
int main()
{
int m,n;
cout<<"Enter the number a for sum: ";
cin>>m;
cout<<"Enter the number b for sum: ";
cin>>n;
sum(m,n);
cout<<"sum of number's: "<<sum(n,m);
}