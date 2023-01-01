#include<iostream>
#include<windows.h>
using namespace std;
void truefalse(int x,int y);
int main()
{
int num1;
int num2;
cout<<"first num is:";
cin>>num1;
cout<<"second num is:";
cin>>num2;
truefalse(num1,num2);
}
void truefalse(int x,int y)
{
if(x==y)
{
cout<<"True";
}
if(x!=y)
{
cout<<"False";
}
}