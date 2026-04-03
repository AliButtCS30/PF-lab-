#include <iostream>
using namespace std;
main()
{
    int length,n1=0,n2=1,next;
    cout<<"Enter the length of fibonacci series : ";
    cin>>length;
    cout<<n1<<" , ";
    cout<<n2;

    for(int i=1; i <= length-2; i++){
        next = n1 + n2 ;
        cout<< " , "<<next;
        n1 = n2 ;
        n2 = next ;
}

        
    
        
        
    }
