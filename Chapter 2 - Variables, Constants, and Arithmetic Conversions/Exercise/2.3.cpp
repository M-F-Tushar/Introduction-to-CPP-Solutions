/*
C.2.3 Write a program that declares two integers, assigns to them the values 50 and 20, and displays in separate lines their sum, difference, product, the precise result of their division (i.e., 2.5), and the remainder (i.e., 10). To find the remainder use the % operator. Use a single cout statement.
*/
#include<iostream>
int main()
{
    int i = 50, j = 20;

    std::cout << "Sum:" << i+j << "\nDiff:" << i-j << "\nProd:" << i*j << "\nDiv:" << (double)i/j << "\nRem:" << i%j << '\n';
    return 0;
}
