//C.2.6 What is the output of the following program?
#include <iostream>
int main()
{
int k;
float i = 3.9, j = 1.2;
k = i + (int)j;
std::cout << k - (int)((int)i + j) << '\n';
return 0;
}
/*
Since the value of (int)j is 1, we have k = 3.9+1 = 4 (not 4.9, because k is int). Similarly, we have (int)((int)3.9+1.2) = (int)(3+1.2) = (int)(4.2) = 4. Therefore, the program outputs 0.
*/
