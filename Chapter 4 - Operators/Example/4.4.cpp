#include <iostream>
int main()
{
    int a = 10;
    std::cout << !(a-20) << '\n';
    std::cout << !!a << ' ' << !!!a << ' ' << a << '\n';
    return 0;
}
/*
0
1 0 10

*/
