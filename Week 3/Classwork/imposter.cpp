#include<iostream>
using namespace std;
main()
{
  float I;
  int P;
cout<<" Enter Imposter count (Imposter limit is 3) :";
cin>>I;
cout<<" Enter Player count (Player limit is 10) :";
cin>>P;
 float chance;
chance = I / P * 100 ;
cout<<" chance = "<<chance<<"%" ;
}
