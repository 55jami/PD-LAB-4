#include<iostream>
using namespace std;
void games(int a,int b,int c,int d,int e);
main()
{
int a,b,c,d,e;
cout<<"Number of total days:";
cin>>a;
cout<<"Number of holidays:";
cin>>b;
c=a-b;
cout<<"Number of working days:"<<c<<endl;
cout<<"Playing minutes in working days(Per day):";
cin>>d;
cout<<"Playing minutes in holidays(Per day):";
cin>>e;
games(a,b,c,d,e);
}
void games(int a,int b,int c,int d,int e)
{
int time;
time=c*d+b*e;
int diff;
diff=30000-time;
cout<<"Time for games:"<<diff;
}

