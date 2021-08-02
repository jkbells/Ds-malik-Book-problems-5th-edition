/* Design an algorithm to find the weighted average of four test scores. The four
test scores and their respective weights are given in the following format:
testscore1 weight1
...
For example, sample data is as follows:
75   0.20
95   0.35
85   0.15   
65   0.30

 */

#include<string>
#include<iostream>
using namespace std;
int main()
{
    int test_score1;
    int test_score2;
    int test_score3;
    int test_score4;

    float weight1;
    float weight2;
    float weight3;
    float weight4;

    cout << "Enter the test score" << endl;
    cin >> test_score1;
    cin >> test_score2;
    cin >> test_score3;
    cin >> test_score4;

    cout << "Enter the weight" << endl;
    cin >> weight1;
    cin >> weight2;
    cin >> weight3;
    cin >> weight4;

    cout << test_score1 * weight1 << " " << endl;
    cout << test_score2 * weight2 << " " << endl;
    cout << test_score3 * weight3 << " " << endl;
    cout << test_score4 * weight4 << " " << endl;


    return 0;
}

