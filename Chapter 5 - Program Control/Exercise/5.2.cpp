//C.5.2 What is the output of the following program?

#include <iostream>
int main()
{
    int i = -3, j = 2, k = 3, m = 0;
    if(i = -1)
        m++;
    if(j = 4)
        m++;
    if(k = 5)
        m++;
    if(k = 0)
        m++;
    if(i < m < k)
        m++;
    std::cout << m << '\n';
    return 0;
}
/*
This is another example of how the wrong use of the = operator instead of the == operator can
produce unexpected results. In particular, the frst four if conditions don’t test the variables for equality,
but the variables are assigned with the respective values instead. As a result, i becomes -1, j becomes
4, while k frst becomes 5, and then 0. Since non-zero values are assigned to the frst three if conditions
they are true, while the fourth is false. Therefore, m becomes 3.
According to the precedence rules the < operator is left associative. Since i is -1 and m is 3, the
expression i < m is true. Then, the expression 1 < k is evaluated, which is false, because k is 0. As a result,
the program displays 3. Remember, when we want to check if the value of a variable is within an interval
we use the && operator, that is, if(i < m && m < k).
*/
