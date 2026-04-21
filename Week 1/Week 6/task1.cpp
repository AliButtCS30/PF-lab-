#include <iostream>
using namespace std;
int main()
{
    bool isfound = false ;
    
    string word;
    char letter;
    int idx = 100;
    char alpha[idx];
    cout<<"Enter a word";
    cin>>word;
    cout<<"letter find";
    cin>>letter;
    int sum=0;
    for(int i=0; i<idx; i++)
     { 
        if(word[i] == letter){
            isfound = true ;
            sum++ ;
        }
       
     }
      if ( isfound = true){
        cout<<letter<<" is found "<<sum<<" times.";}
      else{cout<<letter<<" not found";}

    }
        /* code */
    
    
        
    
