#include <iostream> // Example 6.3
int main()
{
    int i;
    for(i = 16; i > 10; i-=3);//Here semicolon is an error.
    std::cout << i << '\n';
    return 0;
}
/*
First iteration. Since i is 16, the condition i > 10 is true. Since the loop body is empty, the next
statement to be executed is i-=3 (i = i-3 = 16-3 = 13).
Second iteration. Since i is 13, the condition is still true and the statement i-=3 makes i equal to 10.
Third iteration. Since i is 10, the condition becomes false and the loop terminates.
Next, the program outputs the value of i, that is, 10.
*/
