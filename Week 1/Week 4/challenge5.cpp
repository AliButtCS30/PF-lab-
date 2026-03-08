#include<iostream>
using namespace std;
main()
{
    string broname1,broname2,broname3;
    int age1,age2,age3;
    cout<<" Enter the name of first brother: ";
    cin>>broname1;
    cout<<"Enter age of first brother: ";
    cin>>age1;
     cout<<" Enter the name of second brother: ";
    cin>>broname2;
    cout<<"Enter age of second brother: ";
    cin>>age2;
     cout<<" Enter the name of third brother: ";
    cin>>broname3;
    cout<<"Enter age of third brother: ";
    cin>>age3;
    if(age1 > age2 ){if(age2 > age3){cout<< broname3<<" is youngest";}}
    if(age1 < age2 ){if(age2 < age3){cout<< broname1<<" is youngest";}}
    if(age1 > age3 ){if(age2 > age3){cout<< broname3<<" is youngest";}}
    if(age2 > age3 ){if(age2 > age3){cout<< broname3<<" is youngest";}}
    if(age2 < age3 ){if(age2 > age3){cout<< broname3<<" is youngest";}}
    
}