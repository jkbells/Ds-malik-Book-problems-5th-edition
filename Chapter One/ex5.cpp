/* To make a profit, the prices of the items sold in a furniture store are marked up
by 60%. Design an algorithm to find the selling price of an item sold at the
furniture store. What information do you need to find the selling price? */

#include<iostream>
#include<iomanip>

using namespace std;

int main ()
{
    double priceOfItem;

    cout << "Please enter the price of item: ";
    cin >> priceOfItem;

    double sellingPrice = priceOfItem + priceOfItem * 0.60;

    cout << setprecision ( 2 ) << fixed << showpoint; 
    cout << "Original Price: " << priceOfItem << endl;
    cout << "Selling Price: " << sellingPrice << endl;

    return 0;
}

