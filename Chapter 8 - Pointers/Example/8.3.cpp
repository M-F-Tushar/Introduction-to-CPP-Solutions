#include<iostream>
int main()
{
    int *ptr, a = 10;
    
    ptr = &a; // ptr points to a
    std::cout << *ptr << '\n';
    *ptr = 20; // Equivalent to a = 20.
    std::cout << a << '\n';
    return 0;
}