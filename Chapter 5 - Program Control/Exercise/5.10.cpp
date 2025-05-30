/*
C.5.10 In a course exam, each test is graded by two graders. If the difference of their grades is less than
diff, the fnal grade is their average. Otherwise, the test is reviewed by a third grader, as follows:
a. If the grade of the third reviewer is equal to the average of the frst two grades, that is the fnal grade.
b. If it is less than the minimum (e.g., min) of the frst two grades, the fnal grade is min.
c. Otherwise, the fnal grade is the average of the grade of the third reviewer and the one of the
frst two grades closest to it.
Write a program that reads the two grades, the difference diff and displays the fnal grade according
to that procedure.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    double g1, g2, g3, fin_grd, avg, min, max, diff;
    cout << "Enter grades: ";
    cin >> g1 >> g2;
    cout << "Enter difference: ";
    cin >> diff;
    if(g1 < g2)
    {
        min = g1;
        max = g2;
    }
    else
    {
        min = g2;
        max = g1;
    }
    avg = (g1+g2)/2;
    if((max–min) < diff)
        fin_grd = avg;
    else
    {
        cout << "Enter third grade: ";
        cin >> g3;
        if(g3 == avg) /* For simplicity, we make a simple comparison.
However, this comparison is not safe as mentioned in Ch.2. */
            fin_grd = avg;
        else if(g3 < min)
            fin_grd = min;
        else
        {
            if(g3 > avg) // The max value is closer.
                fin_grd = (g3+max)/2;
            else
                fin_grd = (g3+min)/2;
        }
    }
    cout << fin_grd << '\n';
    return 0;
}
