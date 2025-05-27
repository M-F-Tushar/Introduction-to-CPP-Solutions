
#include <iostream> // Example 4.11
using std::cout;
using std::cin;
int main()
{
    int num, key;
    cout << "Enter key: ";
    cin >> key;
    cout << "Enter number: ";
    cin >> num;
    num = num ^ key;
    cout << "Encrypted: " << num << '\n';
    num = num ^ key;
    cout << "Original: " << num << '\n';
    return 0;
}
