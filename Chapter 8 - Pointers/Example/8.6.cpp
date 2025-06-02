#include <iostream> // Example 8.6
int main()
{
    int *ptr1, i = 4;
    double *ptr2, j = 1.78;
    ptr1 = &i;
    ptr2 = &j;
    *ptr1 = i + *ptr2;
    std::cout << i << ' ' << sizeof(ptr1) * sizeof(ptr2) << ' ' << sizeof(*ptr2) << '\n';
    return 0;
}
/*
*ptr1 = i + *ptr2;

*ptr1 refers to i.

*ptr2 refers to j (1.78).

i + *ptr2 is 4 + 1.78 = 5.78.

Since i is an int and we assign a double (5.78) to it, the fractional part is truncated. So i becomes 5.

On most 64-bit systems, pointers are 8 bytes each, so:

sizeof(ptr1) = 8

sizeof(ptr2) = 8

sizeof(ptr1)*sizeof(ptr2) = 8*8 = 64

sizeof(*ptr2) gives the size of the double type itself, which is typically 8 bytes.
*/