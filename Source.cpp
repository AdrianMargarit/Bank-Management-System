/***********************************
Bank management system
***********************************/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <limits>
using namespace std;

class bank
{
	double balance;
	char name[100], add[100], y;
public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};
void bank::open_account()
{
	cout << "Enter your full name: ";
	cin.ignore();
	cin.getline(name, 100);
	cout << "Enter your address: ";
	cin.getline(add, 100);
	cout << "What type of account you want to open saving(s) or current(c)?";
	cin >> y;
	cout << "Enter amount for deposit: ";
	cin >> balance;
	cout << "Your account is created \n";
}
void bank::deposit_money()
{
	cout << "Enter how much you deposit: ";
	double a;
	cin >> a;
	balance += a;
	cout << "Total amount you deposit: \t" << balance;
}
void bank::display_account()
{
	cout << "Your full name: \t" << name << endl;
	cout << "Your address: \t" << add << endl;
	cout << "Type of account that you opened: \t" << y << endl;
	cout << "Amount you deposit: \t" << balance << endl;
}
void bank::withdraw_money()
{
	double amount;
	cout << "\nWithdraw: ";
	cout << "Enter amount to withdraw: ";
	cin >> amount;
	balance -= amount;
	cout << "Total amount that is left: " << balance;
}

int main()
{
	int ch, x;
	bank obj;
	do {
		cout << "1. Open account \n";
		cout << "2. Deposit money \n";
		cout << "3. Withdraw money \n";
		cout << "4. Display account \n";
		cout << "5. Exit \n";
		cout << "Select the option from above \n";
		cin >> ch;
		system("cls");
		switch (ch)
		{
		case 1:
			cout << "1. Open account \n";
			obj.open_account();
			break;
		case 2:
			cout << "2. Deposit money \n";
			obj.deposit_money();
			break;
		case 3:
			cout << "3. Withdraw money \n";
			obj.withdraw_money();
			break;
		case 4:
			cout << "4. Display account \n";
			obj.display_account();
			break;
		case 5:
			if (ch == 5)
			{
				exit(1);
			}
		default:
			cout << "This is not the exit. Try again. \n";
		}
		cout << "\nDo you want to select next option then press: Y/N";
		cout << "\nIf you want to exit then press: N";
		x = _getch();
		if (x == 'n' || x == 'N')
			exit(0);
	} while (x == 'y' || x == 'Y');
	_getch();
	return 0;
}