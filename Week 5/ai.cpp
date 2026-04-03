#include <iostream>
using namespace std;

int main()
{
    int pass;
    bool authenticated = false;
    
    // Password authentication
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter password: " << endl;
        cin >> pass;
        
        if(pass == 1234)
        {
            cout << "Login successful" << endl;
            authenticated = true;
            break;
        }
        else
        {
            cout << "Incorrect pin. Try again" << endl;
        }
        
        if(i == 3 && !authenticated)
        {
            cout << "Too many attempts. Card Blocked" << endl;
            return 0; // Exit program
        }
    }
    
    // Only show menu if authenticated
    if(authenticated)
    {
        int balance = 1000;
        int choice, deposit, withdraw;
        
        for(int i = 1; i <= 20; i++)
        {
            cout << "\n--------Main Menu--------" << endl;
            cout << " 1. Check Balance" << endl;
            cout << " 2. Deposit Money" << endl;
            cout << " 3. Withdraw Money" << endl;
            cout << " 4. Exit" << endl;
            cout << "Enter Choice: ";
            cin >> choice;
            
            if(choice == 1)
            {
                cout << "Current Balance: $" << balance << endl;
            }
            else if(choice == 2)
            {
                cout << "Enter the deposit amount: $";
                cin >> deposit;
                balance = balance + deposit;
                cout << "Deposit successful! New balance: $" << balance << endl;
            }
            else if(choice == 3)
            {
                cout << "Enter amount you want to withdraw: $";
                cin >> withdraw;
                if(withdraw > balance)
                {
                    cout << "Balance is insufficient for this transaction" << endl;
                }
                else
                {
                    balance = balance - withdraw;
                    cout << "Transaction successful" << endl;
                }
            }
            else if(choice == 4)
            {
                cout << "Thank you for using ATM" << endl;
                break; // Exit the menu loop
            }
            else
            {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
    
    return 0;
}