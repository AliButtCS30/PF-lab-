#include<iostream>
using namespace std;
main()
{
 int population;
cout<<" Enter the current world population :";
cin>>population;
int monthlybirthrate;
cout<<" Enter the monthly birth rate (number of births per month):";
cin>>monthlybirthrate;
int yearlyBR;
yearlyBR = monthlybirthrate * 12 ;
int threedecades;
threedecades = (yearlyBR * 30) + population ;
cout<<" Population in three decades will be "<<threedecades ;
}