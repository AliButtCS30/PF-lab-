#include <iostream>
using namespace std;
int main()
{
    int number,digit,n=0;
    cout<<"Enter any number : ";
    cin>>number;
    for(int i=1; number !=0; i++){
        digit = number % 10;
        digit = digit + n;
        n=digit;
        
        number = number / 10 ;
        if( number == 0){break;}
        
    }
    cout<<"Sum of digits is :"<<n;
}