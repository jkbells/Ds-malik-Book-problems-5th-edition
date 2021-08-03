/* Design an algorithm to convert the change given in quarters, dimes, nickels,
and pennies into pennies. */

#include<iostream>
using namespace std;
int main()
{
    int change;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0; 

    cout << "Enter the change" << endl;
    cin >> change;

    do
        {
            if (change >= 25 && change <= 99)
            {
                change = change - 25;
                quarters++;
                cout << quarters << endl;
            }
            else if (change <= 24 && change > 9)
            {
                change = change - 10;
                dimes++;
                cout << dimes << endl;
            }
            else if (change == 5)
            {
                change = change - 5;
                nickels++;
                cout << nickels << endl;
            }
            else if (change <=4)
            {
                change = change - 1;
                pennies++;
                cout << pennies << endl;
            }

        } while (change > 0);

    
    return 0;
}

