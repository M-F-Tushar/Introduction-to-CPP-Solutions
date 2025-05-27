#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int i, next_part;

    // Define an enum for day parts with values 1 to 4
    enum Day_Parts {MORNING = 1, AFTERNOON, EVENING, NIGHT} dp;

    cout << "Enter day_part [1-4]:";
    cin >> i;

    // Convert input number to enum type
    dp = static_cast<Day_Parts>(i);

    // Decide what the next part of the day is
    if(dp == NIGHT)
        next_part = MORNING;      // wrap around to MORNING
    else
        next_part = dp + 1;       // just add 1 to move to next part

    cout << "Next day part: " << next_part << '\n';
    return 0;
}
