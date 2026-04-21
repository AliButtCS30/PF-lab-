#include <iostream>
using namespace std;
int main()
{
    int pass;
    
    for(int i=1; i<=3; i++)
    {
        cout<<"Enter password: "<<endl;
    cin>>pass;
        if(pass==1234){cout<<"Login successful"<<endl; break;}
        else{cout<<"Incorrect pin. Try again"<<endl;}
        if(i==3 && !(pass == 1234))
        {cout<<"Too many attempts. Card Blocked"<<endl;}
         }
         int balance = 1000, deposit, withdraw;
         while(true){
    cout<<"--------Main Menu--------"<<endl;
    cout<<" 1. Check Balance"<<endl;
    cout<<" 2. Deposit Money"<<endl;
    cout<<" 3. Withdraw Money"<<endl;
    cout<<" 4. Exit"<<endl;
    int choice;
cout<<" Enter Choice";
cin>>choice;

if(choice==1){cout<<"Current Balance : "<<balance<<endl ;}
else if(choice==2){cout<<"Enter the deposit amount: ";
cin>>deposit;
balance = balance + deposit ;
cout<<"Deposit successful. Your New balance is "<<balance<<endl;
}

else if(choice==3){cout<<"Enter amount you want to withdraw";
cin>>withdraw;

if(withdraw > balance){cout<<"Balance is insufficient for this transaction "<<endl;}
else{cout<<"Transaction successfull Your new balance is" <<balance - withdraw<<endl;
    
}
balance = balance - withdraw ;}

else if(choice==4){cout<<"Thank you for using ATM"<<endl;break;}
else{cout<<"Invalid choice. Prgram ended. "; break;}
}

}