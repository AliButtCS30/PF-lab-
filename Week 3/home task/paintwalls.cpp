#include<iostream>
using namespace std;
main()
{
 int area;
 int w;
int h;
cout<<" Enter paint area : ";
cin>>area;
cout<<" Enter width : ";
cin>>w;
cout<<" Enter height :";
cin>>h;
int paintedwalls;
paintedwalls = area / (w * h) ;
cout<<" Walls painted = "<<paintedwalls;
} 