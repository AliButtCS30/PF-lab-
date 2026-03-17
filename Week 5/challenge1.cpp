#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cout<<"which number table you want?"<<endl;
    cin>>t;
    cout<<"Multiplication table of <<t<<"<<endl;
    for(int i = 1; i <= 10; i=i+1)
    {n = t * i ;
    cout<<t<< "x"  <<i<< "="<<n<<endl;}


}