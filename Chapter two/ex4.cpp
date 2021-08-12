/* Write a program that does the following:

a) Prompts the user to input five decimal numbers.
b) Prints the five decimal numbers.
c) Converts each decimal number to the nearest integer.
d) Adds the five integers.
e) Prints the sum and average of the five integers. */


#include <iostream>

using namespace std;

int main()
{
    double test1, test2, test3, test4, test5;
    
    cout << "Please enter 5 decimal numbers: \n";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    double total = test1 + test2 + test3 + test4 + test5;
    
    cout << "The total of all the numbers is: " << static_cast<int>(total) << endl;
    
    return 0;
}