//C.4.2 What is the output of the following program?
#include <iostream>
int main()
{
    int a = -2, b = 2, c;
    c = ((a+b) == !b);
    a = -((a < c) || (--b == c));
    std::cout << (!(a != -c) && (b+a >= c) && ((a+c)%2 || (-a+c-b))) << '\n';
    return 0;
}
/*
Since a is -2 and b is 2, the value of the expression (a+b) is false. Since b is 2, the value of !b
is false. Therefore, c becomes 1.
Since a is -2 and c is 1, the value of the expression (a < c) is true. So, the second operand is not
evaluated and b is not decremented. Therefore, a becomes -1.
Since a is -1 and c is 1, the value of the expression (a != -c) is false. So, the value of !(a != -c) is
true. The value of (b+a >= c) is 1, because 2-1 >= 1. The value of (a+c)%2 is (-1+1)%2, that is, false.
The value of (-a+c-b) is –(-1)+1-2 = 0. Since both operands are false, the value of the third operand
is false. Since the third operand is false, the value of the entire expression is false and the program
outputs 0
*/
