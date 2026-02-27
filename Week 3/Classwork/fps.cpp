#include<iostream>
using namespace std;
main()
{
 int frame;
int min;
cout<<" Enter minutes :";
cin>>min;
cout<<" Enter frames per second :";
cin>>frame;
int totalframes;
totalframes = min * 60 * frame ;
cout<<" Total frames = "<<totalframes;
}