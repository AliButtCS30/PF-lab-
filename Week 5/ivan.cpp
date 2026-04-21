#include <iostream>
using namespace std;
int main()
{
    int inheritance, year, spending = 0, oddspending = 0, totalspending, Net;
     int k=17;
    cout << "Enter Inheritance money : ";
    cin >> inheritance;
    cout << "Enter year : ";
    cin >> year;
    for (int i = 1800; i <= year; i++)
    {
      k=k+1 ;

        if (i % 2 == 0)
        {
            spending = spending + 12000;
        }
        else
        {
            oddspending = oddspending + 12000 + (50 * (k));
        }
    }

    totalspending = oddspending + spending;
    Net = inheritance - totalspending;
    if (totalspending <= inheritance)
    {
        cout << "Yes! He will have "<< Net <<" remaining";
    }
    else
    {
        cout << "No! He will need " << totalspending - inheritance <<" more";
    }
}
