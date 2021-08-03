/* Suppose a, b, and c denote the lengths of the sides of a triangle. Then the area of
the triangle can be calculated using the formula:
  __________________
\/s(s-a)(s-b)(s-c)

where s = (1/2)(a + b + c). Design an algorithm that uses this formula to find
the area of a triangle. What information do you need to find the area? */

#include <bits/stdc++.h>
using namespace std;
 
float findArea(float a, float b, float c)
{
    
    if (a < 0 || b < 0 || c < 0 || (a + b <= c) || a + c <= b || b + c <= a)
    {
        cout << "Not a valid triangle";
        exit(0);
    }
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
 

int main()
{
    float a = 3.0;
    float b = 4.0;
    float c = 5.0;
 
    cout << "Area is " << findArea(a, b, c);
    return 0;
}
