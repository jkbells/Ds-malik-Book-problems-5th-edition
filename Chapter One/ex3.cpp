/* Given the radius, in inches, and price of a pizza, design an algorithm to find the
price of the pizza per square inch. */

// Start Program Pizza Print "Please enter the radius, in inches" 
// Read Radius Print "Please enter the price" Read Price Area = 3.14 * Radius^2 
// Price_Per_Square_Inch = Price / Area Print "Result is: " & Price_Per_Square_Inch 

// To calculate the price-per-square-inch of a work of art is simple:
//  you multiply the length of the piece by its width to get the number of square inches,
//   and then you divide the price of the piece by the number of square inches. 
// (You can also use united inches instead of square inches.)


#include"bits/stdc++.h"
using namespace std;
int main()
{
    int length;
    int width;
    int square_inches;
    int price;
    
    cout <<"Enter the length" << endl;
    cin >> length;
    cout << "Enter the width" << endl;
    cin >> width;

    cout << "Enter the price " << endl;
    cin >> price;

    square_inches = length*width;

    int result;

    result = price / square_inches;

    cout << "the price of pizza is per square inch is " << " " << result << endl;




    return 0;
}
