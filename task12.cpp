#include<iostream>
using namespace std;
void rates(int a,int b,int c,int d,int e,int f);
main()
{
int a,b,c,d,e,f;
cout<<"Number of Red roses:";
cin>>a;
cout<<"Number of White roses:";
cin>>b;
cout<<"Number of Tulips:";
cin>>c;
cout<<"Rate of each Red rose is:";
cin>>d;
cout<<"Rate of each white rose is:";
cin>>e;
cout<<"Rate of each tulip is:";
cin>>f;
rates(a,b,c,d,e,f);
}
void rates(int a,int b,int c,int d,int e,int f)
{
int j,k,l;
int totalPrice;
j=a*d;
cout<<"Rate of Red roses according to quantity:"<<j<<endl;
k=b*e;
cout<<"Rate of white roses according to quantity:"<<k<<endl;
l=c*f;
cout<<"Rate of tulips according to quantity:"<<l<<endl;
totalPrice=j+k+l;
cout<<"Total price is:"<<totalPrice<<endl;
if(totalPrice>200)
{
int dis=totalPrice*0.20;
int dis2=totalPrice-dis;
cout<<"Price after discount is:"<<dis2;
}
}