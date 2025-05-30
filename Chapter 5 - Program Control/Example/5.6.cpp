/*
The following program reads an integer and if it is 1, it outputs One; if it is 2, it outputs
Two, otherwise, it outputs Other. In any case, the break statement terminates the switch and the pro￾
gram outputs End.
*/
#include <iostream> // Example 5.6
using std::cout;
using std::cin;
int main()
{
    int a;
    cout << "Enter number: ";
    cin >> a;
    switch(a)
    {
    case 1:
        cout << "One\n";
        break;
    case 2:
        cout << "Two\n";
        break;
    default:
        cout << "Other\n";
        break;
    }
    cout << "End\n";
    return 0;
}
