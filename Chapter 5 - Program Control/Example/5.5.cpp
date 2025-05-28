//the following program reads two integers and displays the result of their comparison
#include <iostream> // Example 5.5
using std::cout;
using std::cin;
int main()
{
    int i, j;

    cout << "Enter numbers: ";
    cin >> i >> j;

    if(i < j)
        cout << i << " < " << j << '\n';

    else if(i > j)
        cout << i << " > " << j << '\n';

    else
        cout << i << " = " << j << '\n';
    return 0;
}
