#include<iostream>
using namespace std;
main()
{
    int bill,discount;
    cout<<" Enter your bill: ";
    cin>>bill;
    if(bill <= 5000){discount = 0.05 * bill;}
    else{discount = 0.1 * bill;}
    cout<<"Your discounted bill is " <<bill - discount;
}
