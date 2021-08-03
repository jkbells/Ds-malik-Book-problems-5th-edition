



/* An ATM allows a customer to withdraw a maximum of $ 500 per day. If a
customer withdraws more than $ 300, the service charge is 4% of the amount
over $ 300. If the customer does not have sufficient money in the account, the
ATM informs the customer about the insufficient fund and gives the option to
withdraw the money for a service charge of $ 25.00. If there is no money in the
account or if the account balance is negative, the ATM does not allow the
customer to withdraw any money. If the amount to be withdrawn is greater
than $ 500, the ATM informs the customer about the maximum amount that
can be withdrawn. Write an algorithm that allows the customer to enter the
amount to be withdrawn. The algorithm then checks the total amount in
the account, dispenses the money to the customer, and debits the account
by the amount withdrawn and the service charges, if any. */



#include <iostream>
using namespace std;
int main()
{

	long double total = 500;
	long double withdrawl = 0;
	double  charge = .04;

	while (total > 0)
    {
        if(total == 0){
            break;
        }
        
		cout << "Please enter an amount to withdraw from your balance of  :$ " << total << endl;
		cin >> withdrawl;

		if (withdrawl > total)
		{
			cout << " Not enough money you have :$"<< total << endl;
		}

		else if (withdrawl > 300)
        {
			long double subtotal = (withdrawl + (withdrawl*charge));
			total -= subtotal;
			cout << "There was a service charge of 4% and now you have : $" << total << "  left. " << endl;
		}

		else if (withdrawl < 300)
		{
			cout << "You withdrew:  " << withdrawl << endl;
			total -= withdrawl;
			cout << "and you have : $" << total << "  left. \n";
		}
	}
	return 0;
}


