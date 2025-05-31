/*
C.6.6 Write a program that reads two integers and displays the sum of the integers between them.
For example, if the user enters 3 and 8, the program should display 22 because 4+5+6+7 = 22. The
program should check which one of the two input numbers is the greater and act accordingly. Use a
single for loop.
*/

#include <iostream>
int main()
{
    int i, j, min, max, sum;
    std::cout << "Enter numbers: ";
    std::cin >> i >> j;
    if(i < j)
    {
        min = i;
        max = j;
    }
    else
    {
        min = j;
        max = i;
    }
    sum = 0;
    for(i = min+1; i < max; i++)
        sum += i;
    std::cout << "Sum: " << sum << '\n';
    return 0;
}
