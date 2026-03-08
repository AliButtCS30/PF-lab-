#include<iostream>
using namespace std;
main()
{
    int input;
    cout<<"enter the no";
    cin>>input;
    int digit,final;
    digit=input%10;
    digit=digit+7;
    digit=digit%10;
    final=digit;
    input=input/10;
     digit=input%10;
    digit=digit+7;
    digit=digit%10;
    final=final+(digit*10);
    input=input/10;
    digit=input%10;
    digit=digit+7;
    digit=digit%10;
    final=final+(digit*100);
    input=input/10;
    digit=input%10;
    digit=digit+7;
    digit=digit%10;
    final=final+(digit*1000);
    cout<<final;
    



}