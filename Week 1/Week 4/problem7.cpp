#include<iostream>
using namespace std;
main()
{
    float area,length,width,radius,height;
    string shape;
    cout<<"Enter name of the shape :";
    cin>>shape;
    if(shape == "Square"){cout<<"Enter side length: ";
    cin>>length;
     area = length * length ;}
     if(shape == "Rectangle"){cout<<"Enter side length: ";
         cin>>length;
        cout<<"Enter width :";
    cin>>width; area = length * width ;}
     if(shape == "Circle"){cout<<"Enter radius: ";
    cin>>radius; area = 3.14 * radius * radius ;}
     if(shape == "Triangle"){cout<<"Enter Base length: ";
        cin>>length;
        cout<<"Enter height";
    cin>>height;
    area = length * height * 0.5;}
    cout<<"Area of "<<shape<< " is " <<area<< " m^2 ";  
}