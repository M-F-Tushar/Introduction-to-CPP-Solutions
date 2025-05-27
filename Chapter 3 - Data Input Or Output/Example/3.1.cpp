#include <iostream>
using std::cout;

int main()
{
    cout << '\a';
    cout << "Check\b\b\b back\n";
    cout << "Test\rCR\n";
    cout << "\53\n\x2d\n"; /* The octal number 53 (decimal 43) corresponds
to the character + and the hexadecimal number 2d (decimal 45) to -. */
    cout << "T\"ree\'\n";
    cout << "Check\t\t\\point\\\n";
return 0;
}

