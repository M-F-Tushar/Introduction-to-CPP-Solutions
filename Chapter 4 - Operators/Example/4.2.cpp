#include <iostream>
int main()
{
    int a = 0, b = 1, c = 2;
    std::cout << (b++)-(--a)*(c--) << '\n';
    return 0;
}
