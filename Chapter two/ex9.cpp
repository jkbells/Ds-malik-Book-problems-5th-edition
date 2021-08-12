/* Write a program that prompts the user to input a length expressed in cen-
timeters. The program should then convert the length to inches (to the nearest
inch) and output the length expressed in yards, feet, and inches, in that order.
For example, suppose the input for centimeters is 312 . To the nearest inch,
312 centimeters is equal to 123 inches. 123 inches would thus be output as:
3 yard(s), 1 feet (foot), and 3 inch(es). */


    #include <iostream>
    using namespace std;
    int main()
    {
        int centimeters;
        int inches;
        int yards;

        cout <<"Enter total centimeters and press enter";
        cin >> centimeters;

        cout << centimeters << " centimeters = " << endl;
        cout << centimeters * .039 << " inches " << endl;
        cout << inches / 36 << " yards " << endl;
        cout << yards * 0.032 << " feet " <<endl;

        return 0;
    }