#include <iostream> // Example 8.1.
int main()
{
    int *ptr, a;
    ptr = &a;
    std::cout << ptr << ' ' << &ptr << '\n';
    return 0;
}
// The program outputs the address of a and the address of ptr, in hex