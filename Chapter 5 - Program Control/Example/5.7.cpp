#include <iostream> // Example 5.7
using std::cout;
int main()
{
    int a = 1;
    switch(a)
    {
    case 1:
        cout << "One\n";
    case 2:
        cout << "Two\n";
    case 3:
        cout << "Three\n";
        break;
    default:
        cout << "Other\n";
        break;
    }
    cout << "End\n";
    return 0;
}
