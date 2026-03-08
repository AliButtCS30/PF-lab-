#include<iostream>
using namespace std;
main()
{
    int red,white,tulips;
    cout<<" Red Rose :";
    cin>>red;
    cout<<" White Rose:";
    cin>> white;
    cout<<" Tulips:";
    cin>>tulips;
    float redamount, whiteamount, tulipamount,total,discount;
    redamount = 2.00 * red ;
    whiteamount = 4.10 * white;
    tulipamount = 2.5 * tulips ;
    total = redamount + whiteamount + tulipamount ;
    if (total > 200){discount = 0.2 * total ;}
    else{discount = 0 ;}
    cout<<"Original price :"<<total <<endl;
    cout<<"Price after discount:"<<total - discount;
    
}