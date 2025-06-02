// C.7.1 What is the output of the following program?
#include <iostream>
int main()
{
    int i, sum, a[] = {5, 6, 7, 8, 9};
    double b[] = {3.1, 1.9, 0.5, -4.1, -0.9};
    sum = 0;
    for (i = 0; a[i] = b[i]; i++)
        sum += a[i];
    std::cout << sum << '\n';
    return 0;
}
/*
The condition a[i] = b[i] is equivalent to (a[i] = b[i]) != 0, which means that the elements
of b are copied to the respective elements of a as long as a[i] does not become 0. If it does, the loop
terminates. Since the type of a is int, only the integer parts of the b elements will be stored into the
respective a elements. Therefore, when the value 0.5 is copied, a[2] becomes 0 and the loop terminates.
The values of a[3] and a[4] remain the same. As a result, the program outputs the sum of a[0] and a[1],
that is, 3+1=4.
*/