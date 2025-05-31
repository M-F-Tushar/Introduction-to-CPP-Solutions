/*
C.6.9 Write a program that reads an integer and displays a message to indicate whether it is a prime number
or not. It is reminded that a prime number is any integer greater than 1 with no divisor other than 1 and itself.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int i, num;
    cout << "Enter number (>1): ";
    cin >> num;
    if(num > 1)
    {
        if(num % 2 == 0)
        {
            if(num == 2)
                cout << num << " is prime\n";
            else
                cout << num << " is not prime\n";
            return 0;
        }
        for(i = 3; i <= num/2; i+=2)
        {
            if(num % i == 0)
            {
                cout << num << " is not prime\n";
                return 0; /* Since a divisor is found, it is not
needed to search for other divisors, so the program terminates. */
            }
        }
        cout << num << " is prime\n";
    }
    else
        cout << "Error: Not valid number\n";
    return 0;
}
