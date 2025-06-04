#include <iostream> // Example 8.7
int main()
{
    void *ptr;
    char s[] = "abcd";
    int i = 10;
    ptr = &i;
    //*ptr += 20;        // Wrong, cast is needed.
    *(int *)ptr += 20; // That's ok now.
    std::cout << i << '\n';
    ptr = s + 2; // ptr points to the s[2] element with value 'c'. 
    (*(char *)ptr)++;
    std::cout << s << '\n';
    return 0;
}