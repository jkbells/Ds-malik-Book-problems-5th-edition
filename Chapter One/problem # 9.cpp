/* You are given a list of students’ names and their test scores. Design an algorithm
that does the following:

a.) Calculates the average test scores.
b.) Determines and prints the names of all the students whose test scores are
below the average test score.

c.) Determines the highest test score.
d.) Prints the names of all the students whose test scores are the same as the
highest test score.

(You must divide this problem into subproblems as follows: The first subproblem
determines the average test score. The second subproblem determines and prints the
names of all the students whose test scores are below the average test score. The third
subproblem determines the highest test score. The fourth subproblem prints the names
of all the students whose test scores are the same as the highest test score. The main
algorithm combines the solutions of the subproblems.) */


    #include <iostream>
    using namespace std;
    int main()
    {
        string  name[100];
        float   testScore[100], maxScore = 0.0, avgScore, totalScore = 0.0;
        int n;
        cout<<"Enter the numbr of student: ";
        cin>>n;
        for(int i = 0; i < n; i++) //input for 'n' student
        {
            cout<<endl<<"Enter student name: ";
            cin>>name[i];
            cout<<"Enter the test score: ";
            cin>>testScore[i];
            if(maxScore < testScore[i])
                maxScore = testScore[i];
                
            totalScore = totalScore + testScore[i];
        }

        avgScore = totalScore / n; //calculate average score
        cout<<endl<<"The average score is: "<<avgScore<<endl; //print average score
        cout<<endl<<"All students whose test scores are below the average test score: ";

        for(int i = 0; i < n; i++)
        {
            if(testScore[i] < avgScore)
            {
                cout<<endl<<name[i];
            }
        }

        cout<<endl<<endl<<"The highest test score is: "<<maxScore; //print highest test score
        cout<<endl<<endl<<"All the students whose test scores are the same as the highest test score:";
        for(int i = 0; i < n; i++)
        {
            if(testScore[i] == maxScore)
            {
                cout<<endl<<name[i];
            }
        }
        
        return 0;
    }