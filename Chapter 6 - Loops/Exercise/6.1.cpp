//C.6.1 What is the output of the following program?
#include <iostream>
using std::cout;
int main()
{
    int i = 2;
    unsigned int j = 2;
    for(i > j; i && (i+j == 4); i--, j++)
        cout << i << ' ';
    cout << j << ' ';
    for(j = i; j >= 0; j--)
        cout << "\nOne";
    return 0;
}
/*
First iteration. The frst term of the condition, that is i, it is equivalent to i!=0, which is true. Since
i is 2 and j is 2, the second term is also true, so the program outputs 2. Then, i and j become
1 and 3, respectively.
Second iteration. The condition is true again and the program outputs 1. Then, i and j become 0
and 4, respectively.
Third iteration. Since i is 0, the condition becomes false, the loop ends, and the second cout
outputs the value of j. So far, the program has displayed: 2 1 4
Let’s go to the next trap. Once j has been declared as an unsigned, its value will never become
negative (e.g., -1). The number -1 will be converted to an unsigned value (e.g., in a 32-bit system it is
4294967295). Therefore, the second loop is infnite and the program displays One continuously.
*/
