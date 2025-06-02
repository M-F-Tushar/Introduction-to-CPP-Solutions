// The following program may crash, because ptr has not been initialized before used in the statement a = *ptr;
#include <iostream> // Example 8.4
int main()
{
    int *ptr, a, b = 10;
    a = *ptr; // ptr has not been initialized.
    std::cout << a << '\n';
    return 0;
}
/*

if we add the statement ptr = &b; before that, the program is executed successfully; a
will be equal to b and the program outputs 10
*/