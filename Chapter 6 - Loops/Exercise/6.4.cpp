/*
C.6.4 Write a program that reads a positive integer n (n > 0) and verifes the math formula: 1 + 3 + 5 +
... + (2n-1) = n2. The program should force the user to enter a positive integer.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int i, n, sum;
    for(;;) // Create an infinite loop.
    {
        cout << "Enter number > 0: ";
        cin >> n;
        if(n > 0)
            break; /* If the user enters a positive integer the loop
terminates. */
    }
    sum = 0; /* This variable holds the sum of the terms. It is
initialized to 0, to make the additions. */
    for(i = 1; i <= 2*n-1; i+=2)
        sum += i;
    if(sum == n*n)
        cout << "Verified\n";
    else
        cout << "Not Verified\n";
    return 0;
}
