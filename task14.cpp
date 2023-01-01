#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name,int matricmarks,int intermarks,int ecatmarks);
void compareMarks(string name,int ecatmarks,string nm,int ecatmarks2);
main()
{
printMenu();
cout<<endl;
string name;
int matricmarks;
int intermarks;
int ecatmarks;
string nm;
int matricmarks2;
int intermarks2;
int ecatmarks2;
cout<<"Name of student 1:"<<endl;
cin>>name;
cout<<"Matric marks for student 1:"<<endl;
cin>>matricmarks;
cout<<"Inter marks for student 1:"<<endl;
cin>>intermarks;
cout<<"Ecat marks for student 1:"<<endl;
cin>>ecatmarks;
calculateAggregate(name,matricmarks,intermarks,ecatmarks);
cout<<endl;
cout<<"Name of student 2:"<<endl;
cin>>nm;
cout<<"Matric marks for student 2:"<<endl;
cin>>matricmarks2;
cout<<"Inter marks for student 2:"<<endl;
cin>>intermarks2;
cout<<"Ecat marks for student 2:";
cin>>ecatmarks2;
calculateAggregate(nm,matricmarks2,intermarks2,ecatmarks2);
compareMarks(name,ecatmarks,nm,ecatmarks2);
}
void printMenu()
{
cout<<"       ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: "<<endl;
cout<<"       :::                                                                           ::: "<<endl;
cout<<"       :::                                                                           ::: "<<endl;
cout<<"       :::                              UNIVERSITY MANAGEMENT                        ::: "<<endl;
cout<<"       :::                                     SYSTEM                                ::: "<<endl;
cout<<"       :::                                                                           ::: "<<endl;
cout<<"       ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: "<<endl;
}
void calculateAggregate(string name,int matricmarks,int intermarks,int ecatmarks)
{
int weihtageOfMatric;
int weihtageOfInter;
int weihtageOfEcat;
weihtageOfMatric=(matricmarks/1100.0)*30;
weihtageOfInter=(intermarks/500.0)*30;
weihtageOfEcat=(ecatmarks/400.0)*40;
int totalAgg;
totalAgg=weihtageOfMatric+weihtageOfInter+weihtageOfEcat;
cout<<"Total aggregate is:"<<totalAgg<<endl;
}
void compareMarks(string name,int ecatmarks,string nm,int ecatmarks2)
{
if(ecatmarks>ecatmarks2)
{
cout<<"Roll no.1 assigned to this first student becasuse he attained more marks than the other student";
}
if(ecatmarks2>ecatmarks)
{
cout<<"Roll no.1 assigned to this second student becasuse he attained more marks than the other student";
}
}







