//C.4.5 What is the output of the following program?
#include <iostream>
using std::cout;
int main()
{
    unsigned int i = ~(~0 << 3);

    if(i >> 3)
        cout << "One\n";
    else
        cout << "Two\n";
    if((i << 2) == 28)
        cout << "One\n";
    else
        cout << "Two\n";
    cout << i << '\n';
    return 0;
}
/*
One
One
7

*/
