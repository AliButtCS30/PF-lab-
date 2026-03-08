#include<iostream>
using namespace std;
main()
{  
    int speed;
    cout<<"Enter speed:";
    cin>>speed;
    if(speed <= 10){cout<<"Slow";}
     if(speed > 10){if (speed <=50){cout<< "Average speed";}}
     if(speed > 50){if (speed <=150){cout<< "Fast speed";}}
     if(speed > 150){if (speed <=1000){cout<< "Ultra Fast speed";}}
     if(speed > 1000){cout<<"Extremely fast speed";}
}