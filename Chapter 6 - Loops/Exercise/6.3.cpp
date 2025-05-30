/*
C.6.3 Write a program that reads an integer and displays its factorial. The factorial of a positive integer n,
where n ≥ 1, is defned as 1 × 2 × 3 × … × n, while the factorial of 0 equals 1 (0! = 1). Since factorials
grow rapidly and may exceed very fast the capacity of the larger type don’t enter a large integer.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int i, num;
    unsigned long long int fact;
    cout << "Enter number: ";
    cin >> num;
    if(num >= 0)
    {
        fact = 1; /* This variable holds the factorial of the input
number. It is initialized to 1, to make the multplications. */
        for(i = 1; i <= num; i++)
            fact = fact*i;
        /* If the user enters 0, the loop won't be executed because the
        condition (i <= num) is false (i=1 and num=0). Therefore, the program would
        display the initial value of fact, that is, 1, which is correct, since 0! = 1. */
        cout << "Factorial of " << num << " is " << fact << '\n';
    }
    else
        cout << "Error: Number should be >= 0\n";
    return 0;
}
