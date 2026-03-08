#include<iostream>
using namespace std;
main()
{
    string countryname;
    int ticketprice, discount, final;
    cout<<"Enter country name:";
    cin>>countryname;
    cout<<"Enter ticket price";
    cin>>ticketprice;
    if(countryname =="Ireland"){discount = ticketprice * 0.1 ;}
    else{discount = ticketprice * 0.05 ;}
     final = ticketprice - discount ;
     cout<<"Final price of ticket after discount ="<<final;
}