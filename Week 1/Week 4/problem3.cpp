#include<iostream>
using namespace std;
main()
{
    int temp1,temp2;
    cout<<"Temperature of city 1: ";

    cin>>temp1;
    cout<<"Temperature of city 2:"; 
    cin>>temp2;
    int differ1;
    differ1 = temp1 - temp2 ;

    if (differ1 > 10){cout<<"Difference is too big" <<endl;
                      cout<<"Program ends"<<endl;}
    else{cout<<"Program ends";}
}