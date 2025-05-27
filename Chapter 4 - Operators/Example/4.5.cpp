#include <iostream>
int main()
{
    int a = 5, b = 8, c;
    c = (a < 2) && (++b > 3);
    std::cout << c << ' ' << b << '\n';
    return 0;
}
/*
The && operator performs “short-circuit” evaluation of its operands. That is, if an operand is
false, the compiler stops evaluating the other operands and sets the value of the entire expres￾
sion to false.
Therefore, the program outputs: 0 8. Short-circuiting is often used to prevent the evaluation of right-hand
operands that would otherwise fail.
*/
