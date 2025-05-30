/*
C.5.8 The 13-digit International Standard Book Number (ISBN) is a unique code that identifes a book
commercially. The last digit is a check digit used to detect errors in the previous 12 digits. To calculate its
value, each digit of the frst 12 digits is alternately multiplied, from left to right, by 1 or 3. The products
are summed up and divided by 10. The check digit is the remainder of the division subtracted from 10. If
it is 10, it becomes 0. For example, assume that the frst 12 digits are: 978960931961.

a. (9*1 + 7*3 + 8*1 + 9*3 + 6*1 + 0*3 + 9*1 + 3*3 + 1*1 + 9*3 + 6*1 + 1*3) = 126
b. check_digit = 10 – (126% 10) = 10 – 6 = 4

Write a program that reads a 13-digit ISBN code and checks the last digit to verify if it is valid or not.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10,
        dig11, dig12, dig13, chk_dig, sum;
    cout << "Enter ISBN's digits: ";
    cin >> dig1 >> dig2 >> dig3 >> dig4 >> dig5 >> dig6 >> dig7 >> dig8 >>
        dig9 >> dig10 >> dig11 >> dig12 >> dig13; /* Since a 13-digit number exceeds
the size of the int type, we use a variable for each digit. */
    sum = dig1 + dig2*3 + dig3 + dig4*3 + dig5 + dig6*3 + dig7 + dig8*3 +
          dig9 + dig10*3 + dig11 + dig12*3;
    chk_dig = 10 – (sum%10);
    if(chk_dig == 10)
        chk_dig = 0;
    if(chk_dig == dig13)
        cout << "Valid ISBN\n";
    else
        cout << "Invalid ISBN\n";
    return 0;
}
/*
✅ What is ISBN-13?
ISBN-13 is a 13-digit number that uniquely identifies a book.
The last digit (13th digit) is a check digit, which is used to detect errors like mistyped or misread digits.

✅ How the Check Digit is Calculated (Official Rule)
For the first 12 digits:

Multiply the digits alternately by 1 and 3:

d1*1 + d2*3 + d3*1 + d4*3 + ... + d12*3
Add up all those products.

Compute the modulo 10 of the sum: sum % 10

Subtract that result from 10:

ini
Copy
Edit
check_digit = 10 - (sum % 10)
If the result is 10, the check digit becomes 0.

✅ Example
Let's walk through the example in your code:

Input:
9789609319614

Split into digits:

d1 = 9
d2 = 7
d3 = 8
d4 = 9
d5 = 6
d6 = 0
d7 = 9
d8 = 3
d9 = 1
d10 = 9
d11 = 6
d12 = 1
d13 = 4 (check digit to verify)
Now apply the rule:

sum = 9*1 + 7*3 + 8*1 + 9*3 + 6*1 + 0*3 + 9*1 + 3*3 + 1*1 + 9*3 + 6*1 + 1*3
    = 9 + 21 + 8 + 27 + 6 + 0 + 9 + 9 + 1 + 27 + 6 + 3
    = 126

check_digit = 10 - (126 % 10)
            = 10 - 6
            = 4
That matches d13 = 4, so the ISBN is valid.
*/
