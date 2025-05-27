#include <iostream> // Example 4.7
int main()
{
    int a, b, c;
    a = (b = 30, b = b/8, ++b);
    std::cout << a << ' ' << b << '\n';
    c = (b != 4);
    if(a, b, c)
        std::cout << "One\n";
    return 0;
}
/*
uses the comma operator, which:

Evaluates all expressions from left to right

Returns only the result of the last expression as the final value

So in this case:

a is 4 → evaluated, result is discarded

b is 4 → evaluated, result is discarded

c is 0 → this is the value the if uses
*/
