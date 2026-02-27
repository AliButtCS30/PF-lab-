#include<iostream>
using namespace std;
main()
{
   float Mbsize = 8388608;
float Mb;
cout<<" Enter the size in megabytes (Mb): ";
cin>>Mb;
float bits;
bits = Mb * Mbsize ;
cout<< Mb<<" Mb is equivalent to "<<bits<<" bits ";
}
