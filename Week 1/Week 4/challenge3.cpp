#include<iostream>
using namespace std;
main()
{
   int no1,no2;
   char plus;
   cout<<"Enter first number: ";
   cin>>no1;
   cout<<"Enter second number: ";
   cin>>no2;
   cout<<"Enter operator: ";
   cin>>plus;
   if(plus == '+'){cout<< no1<< "-" <<no2<<" = "<<no1 - no2 ;}
   if(plus == '-'){cout<< no1<< "+" <<no2<<" = "<<no1 + no2 ;} 
   if(plus == '/'){cout<< no1<< "x" <<no2<<" = "<<no1 * no2 ;} 
   if(plus == '*'){cout<< no1<< "/" <<no2<<" = "<<no1 / no2 ;} 
}

