/* Suppose that the cost of sending an international fax is calculated as follows:
Service charges $ 3.00; $ .20 per page for the first 10 pages; and $ 0.10 for each
additional page. Design an algorithm that asks the user to enter the number of
pages to be faxed. The algorithm then uses the number of pages to be faxed to
calculate the amount due. */


#include<iostream>
using namespace std;

int main()
{
    float pages,cost;

    cout <<"Enter the number of pages" << endl;
    cin >> pages;

    if(pages<=10)
    {
        cost = 3+pages*0.2;
    }

    else
    {
        if(10<pages<=100){
            cost = 3+10*0.2+(pages-10)*0.1;
        }
        else{
            cost = 1+0.15*10+(pages-10)*0.05;
        }
    }

    cout <<"Total cost is:" << cost << endl;

    return 0;
    
}
