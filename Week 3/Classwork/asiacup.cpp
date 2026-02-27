#include<iostream>
using namespace std;
main()
{
  int winpoint = 3;
  int win;
  int losspoint = 0;
  int loss;
  int drawpoint = 1;
  int draw;
 int totalpoints;
 cout<<" Enter the number of wins :";
cin>>win;
cout<<" Enter the number of losses :";
cin>>loss;
cout<<" Enter the number of draws :";
cin>>draw;
totalpoints = (win * winpoint) + (loss * losspoint) + (draw * drawpoint) ;
cout<<" Pakistan has obtained "<<totalpoints<<" points in Asia Cup tournament.";

}
