/*
C.6.12 Write a program that reads the grades of five students in three different courses and dis￾
plays the average grade of each student in these three courses, as well as the average grade of all
students.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    const int LESSONS = 3;
    const int STUDENTS = 5;
    int i, j;
    float grd, stud_grd, sum_grd;
    sum_grd = 0;
    for(i = 0; i < STUDENTS; i++)
    {
        cout << "***** Student_" << i+1 << '\n';
        stud_grd = 0; /* This variable holds the sum of a student's
grades in all courses. It is initialized to 0 for each one. */
        for(j = 0; j < LESSONS; j++)
        {
            cout << "Enter grade for lesson " << j+1 << ": ";
            cin >> grd;
            stud_grd += grd;
            sum_grd += grd; /* This variable holds the sum of all
grades. */
        }
        cout << "Average grade for student_" << i+1 << " is " << stud_
             grd/LESSONS << '\n';
    }
    cout << '\n' << "Total average grade is " << sum_grd/
         (STUDENTS*LESSONS) << '\n';
    return 0;
}
