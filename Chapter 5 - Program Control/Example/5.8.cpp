//The following program reads an integer that represents a month (1 for January, 12 for
//December) and displays the number of days
#include <iostream> // Example 5.8
using std::cout;
using std::cin;
int main()
{
    int month;
    cout << "Enter month [1-12]: ";
    cin >> month;
    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31\n"; /* If the user enters one of these
values the program displays 31. */
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30\n";
        break;
    case 2:
        cout << "28 or 29\n";
        break;
    default:
        cout << "Error: Wrong input\n";
        break;
    }
    return 0;
}
