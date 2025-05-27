//C.4.1 What is the output of the following program?
#include <iostream>
int main()
{
    int a = 4, b = 6, c;
    a = (a <= (b-2)) + (b > (a+1));
    b = (a == 2) > ((b-3) < 3);
    c = (b != 0);
    std::cout << a << ' ' << b << ' ' << c << '\n';
    return 0;
}
