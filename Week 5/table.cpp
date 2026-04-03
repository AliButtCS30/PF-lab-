#include <iostream>
using namespace std;
main()
{
    int table,product;
    cout<<"Enter a number : ";
    cin>>table;
    for(int i=1; i<=10; i++){
    product = table * i;
    cout<<table<<" x "<<i<<" = "<<product<<endl;
    }
}