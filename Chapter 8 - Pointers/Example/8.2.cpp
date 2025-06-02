 //The following program frst outputs the initial value of the pointer and then 0
#include<iostream>
int main()
{
    int *p;

    std::cout << p << '\n';
    p = NULL;
    std::cout << p << '\n';
    return 0;
}