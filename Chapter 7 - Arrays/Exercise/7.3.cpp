/*
C.7.3 Write a program that reads an integer and displays the digits that appear more than once and the number of their appearances.For example,
if the user enters 1868, the program should display that digit 8 appears twice.If no digit appears more than once, the program should display a related message.
*/

#include <iostream>
using std::cout;
using std::cin;
int main()
{
    bool flag;
    int i, dig_times[10] = {0}; /* This array holds the appearances of each
    digit. For example, dig_times[0] indicates how many times digit 0 appears. */
    cout << "Enter number: ";
    cin >> i;
    if (i == 0) // Check if 0 is entered.
        dig_times[0] = 1;
    else if (i < 0)
        i = -i;
    while (i != 0)
    {
        dig_times[i % 10]++;
        i /= 10;
    }
    flag = 0;
    for (i = 0; i < 10; i++)
    {
        if (dig_times[i] > 1)
        {
            cout << "Digit " << i << " appears " << dig_times[i] << " times\n";
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "No digit appears multiple times\n";
    return 0;
}
