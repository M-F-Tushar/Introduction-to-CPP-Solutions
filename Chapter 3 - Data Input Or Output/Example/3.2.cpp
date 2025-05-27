#include<iostream>
using namespace std;

int main()
{
    int i = 100;

    cout.setf(ios_base::showbase|ios_base::uppercase);
    cout.setf(ios_base::hex, ios_base::basefield);
    cout << i << '\n';
    return 0;
}
/*
ios_base::showbase: Tells the stream to show the base prefix when printing numbers (0x for hex, 0 for octal).

ios_base::uppercase: Makes letters in hex output uppercase (e.g., A instead of a).

The integer 100 in hexadecimal is 64.

With the formatting flags:

showbase adds the 0X prefix

uppercase makes the X uppercase

Final output: 0X64
*/
