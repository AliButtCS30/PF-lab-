#include<iostream>
using namespace std;
main()
{
 float charge;
 float time;
 float current;
cout<<" Enter charge (Q) in Coloumbs :" <<endl;
cin>>charge;
cout<<" Enter time (t) in seconds :" <<endl;
cin>>time;
current = charge / time ;
cout<<" The current (I) is "<<current;
}