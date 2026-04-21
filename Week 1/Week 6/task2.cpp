#include <iostream>
using namespace std;
int main()
{
    string word;
    cout<<"Enter any word :";
    cin>>word;
    
    for(int idx=0 ; idx < word[idx] != '\0' ; idx++){
     cout<<word[idx]<<" found at position "<<idx<<endl;
     if(word[idx] == '\0'){break;}}


}