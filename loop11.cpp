#include<iostream>
using namespace std;
int main()
{
int fact = 1,i,n;
cout<<"enter the number for the factorial : ";
cin>>n;
for(i = 1; i <= n; i++)
{
fact = fact*i;
}
cout<<fact;
}
