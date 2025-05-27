#include<iostream>
int main()
{
    int a = 10, b;

    b = --a;
    std::cout << a << ' ' << b << '\n';

    b = a--;
    std::cout << a << ' ' << b << '\n';
    return 0;
}
