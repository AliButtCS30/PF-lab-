#include <iostream>
using namespace std;
int main()
{
    int num, n, count=0, dig;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter digit:";
    cin>>dig;
    for(int i = num; i>0; i=i/10){ 
    n = i % 10;
    if(n == dig){count = count + 1;}  
    }
    cout<<"Frequency of " <<dig<<" is "<<count <<endl;
}