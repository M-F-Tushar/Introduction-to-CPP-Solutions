//C.5.12 Write a program that reads the prices of three products and uses the ?: operator to display the
//highest price.
#include <iostream>
int main()
{
    float i, j, k;
    std::cout << "Enter prices: ";
    std::cin >> i >> j >> k;
    std::cout << "Max: " << ((i >= j && i >= k) ? i : (j > i && j > k) ?
                             j : k) << '\n';
    return 0;
}
