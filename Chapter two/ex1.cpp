/* Write a program that produces the following output:

**********************************
*   Programming Assignment 1     *
*   Computer Programming I       *
*   Author: ???                  *
*   Due Date: Thursday, Jan. 24  *
**********************************

In your program, substitute ??? with your own name. If necessary, adjust the
positions and the number of the stars to produce a rectangle.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "**********************************" << endl;
  cout << "*" << setw(28) << "Programming Assignment 1" << setw(5) << "*" << endl;
  cout << "*" << setw(27) << "Computer Programming 1" << setw(6) << "*" << endl;
  cout << "*" << setw(21) << "Author: ???" << setw(12) << "*" << endl;
  cout << "*" << setw(29) << "Due Date: Thursday Jan. 24" << setw(4) << "*" << endl;
  cout << "**********************************" << endl;
  
  return 0;
}

