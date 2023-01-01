#include<iostream>
using namespace std;
void challenge(int speed=);
main()
{
int a;
cout<<"Enter speed is:";
cin>>a; 
challenge(a);

}
void challenge(int speed)
{
if(speed>100)
{
cout<<"HALT...YOU WILL BE CHALLENGED";
}
if(speed==100)
{
cout<<"Perfect!You are doing good";
}
}
