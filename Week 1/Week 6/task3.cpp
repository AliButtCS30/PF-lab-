#include <iostream>
using namespace std;
int main()
{
    string word;
    cout<<"ENter :";
    cin>>word;
    int idx,length=0;
    for (idx = 0 ; word[idx] != '\0' ; idx++){
        length++;
    }
    for(int i = length-1; i>=0 ; i--){
        cout<<word[i];
    }
}