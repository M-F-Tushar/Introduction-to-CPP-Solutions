//C.2.1 What is the output of the following program?
#include <iostream>
int main()
{
int i = 100;
i = i+i;
i = 2*i;
std::cout << i+i << ' ' << i << '\n';
return 0;
}