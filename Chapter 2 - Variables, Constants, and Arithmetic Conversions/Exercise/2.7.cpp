/*
C.2.7 Write a program that declares two floating-point variables (e.g., i, j), assigns to them two positive values (e.g., 3.45 and 6.78)
and swaps their integer parts (i.e., i becomes 6.45 and j becomes 3.78). For casting, use the static_cast<> operator.
*/
#include <iostream>
int main()
{
    int k;
    float i = 3.45, j = 6.78, dec;

    // Extract decimal from i (0.45)
    dec = i - static_cast<int>(i);

    // Save integer part of i (3)
    k = static_cast<int>(i);

    // Set i to integer of j (6) + decimal of i (0.45) => i = 6.45
    i = static_cast<int>(j) + dec;

    // Extract decimal from j (0.78)
    dec = j - static_cast<int>(j);

    // Set j to integer of i (before swap, which was 3) + decimal of j (0.78) => j = 3.78
    j = k + dec;

    std::cout << i << ' ' << j << '\n';

    return 0;
}
