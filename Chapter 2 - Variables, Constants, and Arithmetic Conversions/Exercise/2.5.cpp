//C.2.5 Write a program that assigns a two-digit positive value to an integer variable and displays the sum of its digits. For example, if the assigned value is 35, the program should display 8. Don’t use the % operator.

#include<iostream>
int main()
{
    int i,j,k;

    i = 35;
    j = i/10;
    k = i - (10*j);

    std::cout << j + k << '\n';
    return 0;
}
