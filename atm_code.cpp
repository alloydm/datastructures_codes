
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class Bank {

	// Private variables used inside class
private:
	string name;
	int accnumber;
	char type[10];
	int amount = 0;
	int tot = 0;

	// Public variables
public:
	// Function to set the person's data
	void setvalue()
	{
		cout << "Enter name\n";
	
		// getline(cin, name);
        cin>>name;
		cout << "Enter Account number\n";
		cin >> accnumber;
		cout << "Enter Account type\n";
		cin >> type;
		cout << "Enter Balance\n";
		cin >> tot;
	}

	// Function to display the required data
	void showdata()
	{
		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
		cout << "Balance:" << tot << endl;
	}

	// Function to deposit the amount in ATM
	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
        tot = tot + amount;
	}

	// Function to show the balance amount
	void showbal()
	{
		
		cout << "\nTotal balance is: " << tot;
	}

	// Function to withdraw the amount in ATM
	void withdrawl()
	{
		int a;
		cout << "Enter amount to withdraw\n";
		cin >> a;
        if(tot>0 && ((tot -a)>=0))
           {
               
		cout << "Available Balance is " << tot - a;
           }
        else
        {
            cout<<"Balance insufficient you can only withdraw maximum of "<<tot<<endl;
        }
	
	}
};

// Driver Code
int main()
{
	// Object of class
	Bank b;

	int choice;

	// Infinite while loop to choose
	// options everytime
	while (1) {
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~WELCOME~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account "
			<< "number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
		cout << "\t4. Show Total balance\n";
		cout << "\t5. Withdraw Money\n";
		cout << "\t6. Cancel\n";
		cin >> choice;

		// Choices to select from
		switch (choice) {
		case 1:
			b.setvalue();
			break;
		case 2:
			b.showdata();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showbal();
			break;
		case 5:
			b.withdrawl();
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}
