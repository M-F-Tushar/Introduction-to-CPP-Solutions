/*
C.5.13 Write a program that reads a student’s grade and uses the ?: operator to display a corresponding
message according to the next scale:
a. If grade is within [7.5–10], the program outputs: A
b. If grade is within [5–7.5), the program outputs: B
c. If grade is within [0–5), the program outputs: Next time
d. If grade is out of [0, 10], the program outputs: Wrong input
Note: The right parenthesis “)” means that the right number is not included in the indicated set.
*/
#include <iostream>
int main()
{
    float grd;
    std::cout << "Enter grade: ";
    std::cin >> grd;
    std::cout << ((grd >= 7.5 && grd <= 10) ? "A" : (grd >= 5 && grd <
                  7.5) ? "B" : (grd >= 0 && grd < 5) ? "Next time" : "Wrong input") << '\n';
    return 0;
}
