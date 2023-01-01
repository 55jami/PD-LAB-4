#include<iostream>
using namespace std;
void DiscountPrize(string a,string b,string c,string d,string e);
main()
{
string a,b,c,d,e;
while(true){
cout<<"Enter first country name:";
cin>>a;
cout<<"Enter second country name:";
cin>>b;
cout<<"Enter third country name:";
cin>>c;
cout<<"Enter fourth country name:";
cin>>d;
cout<<"Enter fifth country name:";
cin>>e;
DiscountPrize(a,b,c,d,e);}
}
void DiscountPrize(string a,string b,string c,string d,string e)
{
int num;
cout<<"Amount in dollars:";
cin>>num;
string country;
cout<<"Enter country:";
cin>>country;
if(country==a)
{
int dis=num*0.05;
int dis2=num-dis;
cout<<"After discount on pakistan ticket,price is:"<<dis2<<endl;
}
cout<<"Enter country:";
cin>>country;
if(country==b)
{
int dis=num*0.10;
int dis2=num-dis;
cout<<"After discount on Ireland ticket,price is:"<<dis2<<endl;
}
cout<<"Enter country:";
cin>>country;
if(country==c)
{
int dis=num*0.20;
int dis2=num-dis;
cout<<"After discount on India ticket,price is:"<<dis2<<endl;
}
cout<<"Enter country:";
cin>>country;
if(country==d)
{
int dis=num*0.30;
int dis2=num-dis;
cout<<"After discount on England ticket,price is:"<<dis2<<endl;
}
cout<<"Enter country:";
cin>>country;
if(country==e)
{
int dis=num*0.40;
int dis2=num-dis;
cout<<"After discount on Canada ticket,price is:"<<dis2;
}
}


