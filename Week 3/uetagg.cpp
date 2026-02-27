#include<iostream>
using namespace std;
main()
{
 float matricmarks;
float intermediatemarks;
float Ecatmarks;
string name;
cout<<" Enter Student name :";
cin>>name;
cout<<" Enter Matriculation marks (out of 1100) :";
cin>>matricmarks;
cout<<" Enter Intermediate marks (out of 550) :";
cin>>intermediatemarks;
cout<<" Enter Ecat marks (out of 400) :";
cin>>Ecatmarks;
float Aggregate;
Aggregate = ((matricmarks / 1100 * 0.1) + (intermediatemarks / 550 * 0.4) + (Ecatmarks / 400 * 0.5)) * 100 ;
cout<<" Aggregate score for "<<name<<" is "<<Aggregate<<"%";


}