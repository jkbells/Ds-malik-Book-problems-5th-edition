/* Newton’s law states that the force, F, between two bodies of masses M 1 and
M 2 is given by:

F = K ( M1M2 / D^2)

n which k is the gravitational constant and d is the distance between the
bodies. The value of k is approximately 6.67*10^-8 dyn. cm 2 /g 2 .
Write a program that prompts the user to input the masses of the bodies and the
distance between the bodies. The program then outputs the force between
the bodies. */

#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double M1,M2;
    double d;
    double Force;

    const double gravitational_constant = 6.67*10;
    cout <<"Enter the masses of two object" << endl;
    cin >> M1 >> M2;
    cout <<"Enter the distance between two bodies" << endl;
    cin >> d;

    Force = gravitational_constant*M1*M2/d*d;

    cout << "Newton’s law states that the force = " << Force << endl;
    return 0;
}