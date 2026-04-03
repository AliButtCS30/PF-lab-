#include <iostream>
using namespace std;
 int main()
{
    int age,money=0,toys=0,wash,toyprice,Netamount;
    cout<<"Enter lily's age : ";
    cin>>age;
    cout<<"Enter cost of washing machine : ";
    cin>>wash;
    cout<<"Enter price of each toy : ";
    cin>>toyprice;
    for(int i=1; i<=age; i++){
        if(i % 2 == 0){
            int gift = (i * 10) / 2  ;
            money = money + gift - 1 ;
            
        }
        else if (i % 2 !=0){ toys = toys + 1 ;

        }

    }
    
    cout<<money<<endl;
    cout<<toys<<endl;
    Netamount = money + (toyprice * toys ) ;
    cout<<Netamount<<endl;
    if(Netamount >= wash){cout<<" Yes. Surplus amount is "<<Netamount - wash ;}
    else{cout<<"No. You need more "<<wash - Netamount ;}
}