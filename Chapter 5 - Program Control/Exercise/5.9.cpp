
/*C.5.9 Suppose that two PCs reside in the same IP network. Write a program that reads their IP addresses
(version 4) and displays if they are confgured correctly in order to communicate. The user must enter each
IP address in the x.x.x.x form, where each x is an integer within [0, 255]. The value of the frst octet of
an IP address defnes its class, as follows:
a. Class A: [0, 127]
b. Class B: [128, 191]
c. Class C: [192, 223]
If the two IP addresses indicate different classes, the PCs cannot communicate. If they belong in the
same class, we compare their network octet(s). The octet(s) to be compared are defned according to their
class, as follows:
a. Class A: frst octet
b. Class B: frst two octets
c. Class C: frst three octets
If they are the same the PCs may communicate. For example, the PCs with ΙΡ addresses 192.168.1.1
and 192.168.1.2 may communicate, because they belong to the same class C and the frst three octets that
specify the network, that is, 192.168.1, are the same. For your information, the method we just described
is referred to as classful addressing. For the more effcient management of the IP addresses the classless
addressing was later introduced.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    char ch;
    int a1, a2, a3, a4, b1, b2, b3, b4;
    cout << "Enter first IP address: ";
    cin >> a1 >> ch >> a2 >> ch >> a3 >> ch >> a4;
    cout << "Enter second IP address: ";
    cin >> b1 >> ch >> b2 >> ch >> b3 >> ch >> b4;
    if(a1 < 128)
    {
        if(a1 == b1)
            cout << "Class A: Correct Configuration\n";
        else
            cout << "Class A: Wrong Configuration\n";
    }
    else if(a1 < 192)
    {
        if(a1 == b1 && a2 == b2)
            cout << "Class B: Correct Configuration\n";
        else
            cout << "Class B: Wrong Configuration\n";
    }
    else if(a1 < 224)
    {
        if(a1 == b1 && a2 == b2 && a3 == b3)
            cout << "Class C: Correct Configuration\n";
        else
            cout << "Class C: Wrong Configuration\n";
    }
    else
        cout << "Error: Wrong class\n";
    return 0;
}
/*
🔍 Line-by-Line Explanation
#include <iostream>
Includes the input/output library so you can use cin and cout.

using std::cout; using std::cin;
This allows you to write cout and cin instead of std::cout and std::cin.

int main()
The main function where your program starts.

char ch;
Declares a variable ch to store the . between octets when entering IP addresses.

int a1, a2, a3, a4, b1, b2, b3, b4;
Declares 8 integers to store the 4 octets of the 1st IP address (a1.a2.a3.a4) and the 4 octets of the 2nd IP address (b1.b2.b3.b4).

cin >> a1 >> ch >> a2 >> ch >> a3 >> ch >> a4;
Reads the first IP address from the user in the format x.x.x.x.

The variable ch is used to skip over the periods (.) between octets.

🔍 Example Input:


192.168.1.1 → a1 = 192, a2 = 168, a3 = 1, a4 = 1
cin >> b1 >> ch >> b2 >> ch >> b3 >> ch >> b4;
Same idea, but for the second IP address.

if (a1 < 128)
This determines the class of the first IP address by checking the value of the first octet (a1):

If a1 < 128, it's Class A

Class A Network Comparison:

if(a1 == b1)
If the first octet of both IPs match, they are in the same network, so:

cout << "Class A: Correct Configuration\n";

Else, they're not in the same network → Wrong configuration

else if(a1 < 192)
If not Class A but a1 < 192, then it's Class B.

Class B Network Comparison:

if(a1 == b1 && a2 == b2)
Now you must compare the first two octets.

If they match → Correct Configuration

Else → Wrong Configuration

else if(a1 < 224)
If not A or B, but a1 < 224, it's Class C.

Class C Network Comparison:
if(a1 == b1 && a2 == b2 && a3 == b3)
You compare the first three octets.

else
cout << "Error: Wrong class\n";
If a1 >= 224, it's not Class A, B, or C, which means it's in:

Class D (Multicast) or Class E (Experimental)

These are not valid for host-to-host communication, so it gives an error.

✅ Summary of Logic Flow
Reads two IPs (each in 4 parts).

Determines the class based on the first octet of the first IP.

Compares:

Class A: compare first octet

Class B: compare first two octets

Class C: compare first three octets

Prints whether the configuration is correct or wrong.
*/
