/*
C.6.7 Write a program that reads the number of students in a class and their grades on a test. The pro￾
gram should display the average grade of the passed students, the average grade of the failed students, the
minimum and maximum grade, and how many students got the same maximum grade. A student passes
the exams with a grade ≥ 5. If the input grade is out of [0, 10] it should be ignored and the program should
inform the user via a message, in order to enter a new value. Also, if the user enters -1, the insertion of
grades should end.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int i, studs_num, suc, fail, times;
    float grd, sum_suc, sum_fail, min_grd, max_grd;
    cout << "Enter number of students: ";
    cin >> studs_num;
    if(studs_num <= 0)
    {
        cout << "Wrong number of students\n";
        return 0; // Program termination.
    }
    suc = fail = 0;
    sum_suc = sum_fail = 0;
    min_grd = 11;
    max_grd = -1;
    for(i = 0; i < studs_num; i++)
    {
        cout << "Enter grade: ";
        cin >> grd;
        if(grd == -1)
            break;
        if(grd > 10 || grd < 0)
        {
            cout << "Wrong grade, try again ...\n";
            i--; /* If the input grade is out of [0, 10], the grade
is ignored and i is decremented to repeat the insertion. */
            continue;
        }
        if(grd >= 5)
        {
            suc++;
            sum_suc += grd;
        }
        else
        {
            fail++;
            sum_fail += grd;
        }
        if(grd < min_grd)
            min_grd = grd;
        if(grd > max_grd)
        {
            max_grd = grd;
            times = 1; // First appearance of the new maximum grade.
        }

        else if(max_grd == grd)
            times++;
    }
    if(i) // Check that at least one grade has been entered.
    {
        if(suc)
            cout << "Avg(+): " << sum_suc/suc << '\n';
        else
            cout << "Everybody failed\n";
        if(fail)
            cout << "Avg(-): " << sum_fail/fail << '\n';
        else
            cout << "None failed\n";
        cout << "Min: " << min_grd << " Max: " << max_grd << " (appeared "
             << times << " times)\n";
    }
    return 0;
}
