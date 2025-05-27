//C.4.4 Write a program that reads an integer and displays a message to indicate whether it is even or odd.
//Use the & operator
#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int num;

    cout << "Enter number:";
    cin >> num;

    if ((num & 1) == 1)
        cout << "The number" << num << "is even\n";
    else
        cout << "The number " << num << "is odd";
    return 0;
}
/*
If last bit is:	      Meaning	        Example
        1	            Odd	                3 = 11 → last bit is 1
        0	            Even	            4 = 100 → last bit is 0

So:

(num & 1) == 1 → number is odd

(num & 1) == 0 → number is even


*/
