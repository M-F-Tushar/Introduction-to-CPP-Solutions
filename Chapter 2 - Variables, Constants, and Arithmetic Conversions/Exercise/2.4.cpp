//C.2.4 What is the output of the following program?
#include <iostream>
int main()
{
bool b = 18;
int i = b+2;
double d = i+1.99;
i = d*2;
std::cout << i/010 << '\n';
return 0;
}
/*
The declarations make b equal to 1, i becomes 3, the type of i is converted to double when added to 1.99, so d becomes 4.99.
Then, i becomes 9 and the program displays the result of the division by 8 (010 is 8 in the octal system), that is, 1.
*/
