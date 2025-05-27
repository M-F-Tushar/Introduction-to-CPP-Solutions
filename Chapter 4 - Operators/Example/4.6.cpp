#include <iostream>
int main()
{
    int a = 5, b = 8, c;
    c = (a > 2) || (++b > 3);
    std::cout << c << ' ' << b << '\n';
    return 0;
}
/*
Similar to the && operator, the || operator performs “short-circuit” evaluation of its oper￾
ands. If an operand is true, the compiler stops evaluating the other operands and sets the
value of the entire expression to true.

Therefore, the program outputs: 1 8.
*/
