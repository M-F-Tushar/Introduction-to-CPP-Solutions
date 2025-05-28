//C.5.5 Write a program that reads the prices of four products and displays the highest one.
#include <iostream>
int main()
{
    double i, j, k, m, max;
    std::cout << "Enter prices: ";
    std::cin >> i >> j >> k >> m;
    if(i > j)
        max = i;
    else
        max = j;
    if(k > max)
        max = k;
    if(m > max)
        max = m;
    std::cout << "Max: " << max;
    return 0;
}
