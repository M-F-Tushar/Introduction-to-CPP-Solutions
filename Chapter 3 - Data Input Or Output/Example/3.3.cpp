#include <iostream> // Example 3.3
using namespace std;
int main()
{
    double i = 12345.689;

    cout << "Default mode: " << i << '\n';

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Fixed mode: " << i << '\n';

    cout.setf(ios_base::scientific, ios_base::floatfield);
    cout << "Scientific mode: " << i << '\n';

    cout.unsetf(ios_base::floatfield);
    cout << "Default mode: " << i << '\n';
    return 0;
}
