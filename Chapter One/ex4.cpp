/* A salesperson leaves his home every Monday and returns every Friday. He
travels by company car. Each day on the road, the salesperson records the
amount of gasoline put in the car. Given the starting odometer reading (that is,
the odometer reading before he leaves on Monday) and the ending odometer
reading (the odometer reading after he returns home on Friday), design an
algorithm to find the average miles per gallon. Sample data is as follows:
68723 71289 15.75 16.30 10.95 20.65 30.00 */

#include<iostream>
using namespace std;
int main()
{
    double sumofGasoline = 0;
    double gasoline;
    double odometerReadingBefore;
    double odometerReadingAfter;
    double averageMilesperGallon;

    for (int iter = 1 ; iter<=5 ; iter++){
        cout << "Enter the amount of gasoline used on day" << iter << " :";
        cin >> gasoline;

        sumofGasoline += gasoline;
    }

    averageMilesperGallon = ( odometerReadingAfter - odometerReadingBefore ) / sumofGasoline;

    cout << "Average Miles Per Gallon is " << averageMilesperGallon;


    return 0;
}

