#include<iostream>
using namespace std;
main()
{
 int frame;
int min;
cout<<" Number of minutes :";
cin>>min;
cout<<" Frames per second :";
cin>>frame;
int totalframes;
totalframes = min * 60 * frame ;
cout<<" Total Number of frames = "<<totalframes;
}