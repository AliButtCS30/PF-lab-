#include <iostream>
using namespace std;
int main()
{
    int positive,sum=0;
    
    while(positive >= 0)
    {cout<<"Enter any positive number: ";
    cin>>positive;
    if(positive < 0){break;}
    sum = positive + sum ;
    }
    cout<<"Sum is "<<sum;
}