#include <iostream>
using namespace std;
int main()
{
    int number,totaldigs,i;
    cout<<"Enter any number : ";
    cin>>number;
   for( i=1; i!= 0; i++){
     number = number / 10 ;
     if(number == 0){break;}

   }
   cout<<i;
  
    }
