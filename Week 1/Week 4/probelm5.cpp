#include<iostream>
using namespace std;
main()
{
    int holidays,workingdays,gametime,differ;
    cout<<"Enter Holidays:";
    cin>>holidays;
    workingdays = 365 - holidays;
gametime = (holidays * 127)+(workingdays * 63);
differ = 30000 - gametime ;
if (differ < 30000){cout<<"Tom sleeps well "<<endl;
                   cout<< differ<<"minutes less for play";}
 else{cout<<"Tom runs away" <<endl;
      cout<< differ<<"minutes for play"; }                  
 }