#include <iostream> // Example 7.2
int main()
{
    int i, arr[5];
    for (i = 0; i < 5; i++)
    {
        std::cout << "Enter number: ";
        std::cin >> arr[i];
    }
    for (i = 4; i >= 0; i--)
        std::cout << arr[i] << '\n';
    return 0;
}
