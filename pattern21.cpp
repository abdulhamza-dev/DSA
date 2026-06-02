#include<iostream>
using namespace std;
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
for(j=1;j<=4-(i-1);j++)
{
char name = 'A' + (j-1);
cout<<name;
}
cout<<"\n";
}
}