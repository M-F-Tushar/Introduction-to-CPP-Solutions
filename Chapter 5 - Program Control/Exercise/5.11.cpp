
//C.5.11 What is the output of the following program?
#include <iostream>
int main()
{
    int a = 1, b = !a;
    if((b ? a : -a) <= 10)
        std::cout << "One " << -a << '\n';
    else
        std::cout << "Two " << -a << '\n';
    return 0;
}
