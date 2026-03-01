#include<iostream>
using namespace std;
main()
{
  int age;
cout<<" Enter your age (in years):";
cin>>age;
int moved;
cout<<" Enter moves :";
cin>>moved;
int avgyears;
avgyears = age / (moved + 1) ; 
cout<<" Average years = "<<avgyears;
}