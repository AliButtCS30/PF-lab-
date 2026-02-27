#include<iostream>
using namespace std;
main()
{
  int nsides;
  cout<<" Enter number of sides of Polygon :";
cin>>nsides;
int totalangles;
totalangles = ( nsides - 2 ) * 180;
cout<<" The total sum of internal angles of a "<<nsides<<"-sided polygon is : "<<totalangles<<" degrees";
}