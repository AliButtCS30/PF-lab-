#include <iostream>
using namespace std;
main()
{
    int number,check,digit,n1=1,freq=0;
    cout<<"Enter Number : ";
    cin>>number;
    cout<<"Enter digit to check : ";
    cin>>check;
    for(int i=1 ; number != 0; i++){
        digit = number % 10 ;
        number = number / 10 ;


        if(digit == check){freq = n1 + freq ;}
    }
    cout<<freq;
}