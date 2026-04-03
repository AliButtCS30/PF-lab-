#include <iostream>
using namespace std;
int main()
{
    int natural,sum = 0;
    for(int i = 1; i <= 5 ; i++){
        cout<<"Enter " <<i<< " natural number : ";
        cin>>natural; 
     sum = natural + sum ;
    
}
cout<<"Sum of these five natural numbers is "<<sum<<".";
}