#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float update_balance(string command, float dollars, float &balance);

void main()
{
	string command;
	float dollars,balance = 10000 ;

	cout << "--------------- \n";
	cout << "Exit with 0 \n"; 
	cout << "--------------- " << endl;
	cout << "Your balance is : " << fixed;
	cout << setprecision(2) << balance << endl;
	do
	{
		cout << "Input command(1 or withdraw, 2 deposite) : " ;
		cin >> command;
		cout << "Input amount : " << endl;
		cin >> dollars ;
		update_balance(command,dollars,balance);
		cout << "Your balance : " << balance << endl;
	}
	while(command != "0");
}

float update_balance(string command, float dollars, float &balance);
{
	if (command == "1")
	{
		balance = balance - dollars;
	}
	else
	{
		balance = balance + dollars ;
	}
	return(balance);
}