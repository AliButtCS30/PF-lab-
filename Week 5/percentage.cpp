#include <iostream>
using namespace std;
 int main()
{
    float count,enter,totalcount;
    float p1,p2,p3,p4,p5;
    float count1=0, count2=0, count3=0, count4=0, count5=0;
    cout<<"Enter numbers count :";
    cin>>count;
    for(float i=1; i<=count; i++){
    cout<<i<<". Enter a number :";
    cin>>enter;
    if(enter < 200){count1++ ;}
    else if(enter >= 200 && enter < 400){count2++ ;}
    else if(enter >=400 && enter < 600){count3++ ; }
    else if(enter >= 600 && enter < 800){count4++ ;}
     else if(enter >= 800){count5++ ;}
     

     }
     totalcount = count1 + count2 + count3 + count4 + count5 ;
     cout<<totalcount<<"is the totalcount"<<endl;
      p1 = (count1 *100) / totalcount  ;
      p2 = (count2 *100) / totalcount  ;
      p3 = (count3 *100) / totalcount  ;
      p4 = (count4 *100) / totalcount  ;
      p5 = (count5 *100) / totalcount  ;
     cout<<p1<<endl;cout<<p2<<endl;cout<<p3<<endl;cout<<p4<<endl;cout<<p5<<endl;


    }
    