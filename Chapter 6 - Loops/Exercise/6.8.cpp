/*
C.6.8 Consider the following recursive formula:
an = 2×an-1 - an-2 + an-3, where a0 = 1, a1 = 2, and a2 = 3.
Write a program that reads the value of integer n and displays the value of the n-th term. The program
should force the user to enter a number greater than 2.
*/
#include <iostream>
int main()
{
    int i, num, an, an1, an2, an3;
    for(;;)
    {
        std::cout << "Enter number [> 2]: ";
        std::cin >> num;
        if(num > 2)
            break;
    }
    an1 = 3;
    an2 = 2;
    an3 = 1;
    for(i = 3; i <= num; i++)
    {
        an = 2*an1 – an2 + an3;
        an3 = an2;
        an2 = an1;
        an1 = an;
    }
    std::cout << "a[" << num << "] = " << an << '\n';
    return 0;
}

