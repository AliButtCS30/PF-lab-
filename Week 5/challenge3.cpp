#include <iostream>
using namespace std;
int main()
{
  int n1, n2,i,lcm; 
  cout<<"Enter first number: ";
  cin>>n1;
  cout<<"Enter second number: ";
  cin>>n2;
  int org1=n1, org2=n2 ;
  while(n2 != 0)
  { i = n1 % n2 ;
    n1 = n2 ;
    n2 = i ;
    }
    int gcd = n1 ;
    lcm = org1 * org2 / gcd;
cout<<"GCD is " <<n1<<endl;
cout<<"LCM is "<<lcm<<endl;

}