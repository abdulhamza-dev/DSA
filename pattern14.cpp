#include<iostream>
using namespace std;
int main()
{
int i,j;
char name;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
name = 'a' + i-1;
cout<<name;
}
cout<<'\n';
}
}