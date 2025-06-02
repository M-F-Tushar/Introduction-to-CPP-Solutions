/*
The * and & cancel each other when used together. For example, the following program displays three
times the address of i
*/
#include <iostream> // Example 8.5
int main()
{
    int *ptr, i;
    ptr = &i;
    std::cout << &i << ' ' << *&ptr << ' ' << &*ptr << '\n';
    return 0;
}