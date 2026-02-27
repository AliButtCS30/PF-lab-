#include<iostream>
using namespace std;
main()
{
 int u;
cout<<" Enter initial velocity (m/s) :";
cin>>u;
int a;
cout<<" Enter Acceleration :";
cin>>a;
int t;
cout<<" Enter time (s) :";
cin>>t;
int v;
v = (a * t) + u ;
cout<<" Final velocity = "<<v;
}