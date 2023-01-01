#include<iostream>
using namespace std;
void truefalse(string x,string y);
int main()
{
string num1;
string num2;
cout<<"first input is:";
cin>>num1;
cout<<"second input is:";
cin>>num2;
truefalse(num1,num2);
}
void truefalse(string x,string y)
{
if(x==y)
{
cout<<"False";
}
if(x!=y)
{
cout<<"True";
}
}