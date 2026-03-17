#include <iostream>
using namespace std;
int main()
{
    int rows,i,j;
    cout<<"enter no of rows: ";
    cin>>rows;
    for(int i=1; i<=rows; i=i+1)
    {cout<<endl;
    for(j=1; j<=i; j++)
    cout<<"*";}
}