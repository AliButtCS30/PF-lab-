#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter :";
    cin>>word;
    char number;
    int length=0;
    for(int idx=0; word[idx] !='\0'; idx++){
        if (word[idx] >= 'a' && word[idx] <= 'z' ){
            if(word[idx] == 'z'){word[idx] == 'a';}
            else{word[idx] = word[idx] + 1 ;}
            cout<<word[idx];
            
        }
        
    }
    
}