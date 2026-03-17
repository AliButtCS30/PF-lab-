#include <iostream>
using namespace std;
int main()
{
  int rows=5,j,i;
  for(int i=1; i<=rows; i++)
  { cout<<endl;
    for(j=1; j<=i; j++)
    {cout<<"*";}
  }
  for(int i=rows; i>=1; i--)
  {
    cout<<endl;
  for(int j=1; j<=i; j++)
{cout<<"*";}}

}