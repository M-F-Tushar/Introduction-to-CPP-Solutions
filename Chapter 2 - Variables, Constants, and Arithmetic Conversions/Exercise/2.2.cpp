//C.2.2 Find the errors in the following program and fix them, so that the program runs and displays Nice.
#include <iostream>
int main()
{
int j = 4.5;
unsigned float i = 1.23;
double j = 6.7;
k = 10;
cout << "Nice << '\n';
return 5;
}

/*
 Assigning a foating-point value to an integer variable is not wrong, the fraction part will be
truncated and j becomes 4. The declaration of i is incorrect, because a foating-point variable cannot be
declared unsigned. The declaration of j is incorrect, because the name j has already been used. The
use of k is another error, because it hasn’t been declared. Another error is the missing " next to Nice. A
program may return to a non-zero value, so the return statement is acceptable.
*/
