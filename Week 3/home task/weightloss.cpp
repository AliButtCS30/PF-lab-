#include<iostream>
using namespace std;
main()
{
 string patientname;
 cout<<" Enter the name of the person :";
cin>>patientname;
float targetloss;
cout<<" Enter the target weight loss in kilograms :";
cin>>targetloss;
float totaldays;
totaldays = targetloss * 15 ;
cout<< patientname<<" will need "<<totaldays<<" days to lose "<<targetloss<<" kg of weight by following the doctor's suggestions.";
}
