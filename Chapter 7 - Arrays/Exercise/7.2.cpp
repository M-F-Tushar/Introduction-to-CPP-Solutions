/*
# C.7.2 Write a program that an instructor can use in order to get grade statistics. The program should
read the grades of the students continuously and store in one vector object the grades within [5, 10] and
in a second one the grades within [0, 5]. If the user enters -1, the insertion of grades should end and the
program should display the worst grade, the best grade, and the average of the grades stored in each vector.
The program should force the user to enter grades within [0, 10] or the value -1.

*/
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
int main()
{
    int size;
    float grd, sum_suc, sum_fail, min_fail, max_fail, min_suc, max_suc;
    vector<float> suc, fail;
    sum_suc = sum_fail = 0;
    min_fail = min_suc = 11; // Initialize with a value greater than 10.
    max_fail = max_suc = -1; // Initialize with a value less than 0.
    while (1)
    {
        cout << "Enter grade: ";
        cin >> grd;
        /* There are several ways to check whether the input grade is
        valid. In next exercises I use do-while. */
        while (1)
        {
            if ((grd >= 0 && grd <= 10) || (grd == -1))
                break;
            cout << "Error - Enter grade: ";
            cin >> grd;
        }
        if (grd == -1)
            break;
        if (grd >= 5 && grd <= 10)
        {
            sum_suc += grd;
            suc.push_back(grd);
            if (grd > max_suc)
                max_suc = grd;
            if (grd < min_suc)
                min_suc = grd;
        }
        else
        {
            sum_fail += grd;
            fail.push_back(grd);
            if (grd > max_fail)
                max_fail = grd;
            if (grd < min_fail)
                min_fail = grd;
        }
    }
    size = suc.size();
    if (size != 0)
        cout << "\nSuccess_Avg: " << sum_suc / size << " Best: " << max_suc << " Worst: " << min_suc << '\n';
    else
        cout << "\nAll students failed"; size = fail.size();
    if (size != 0)
        cout << "\nFail_Avg: " << sum_fail / size << " Best: " << max_fail << " Worst: " << min_fail << '\n';
    else
        cout << "All students passed\n";
    return 0;
}
