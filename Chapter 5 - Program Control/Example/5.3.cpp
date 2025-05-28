
#include <iostream> // Example 5.3
int main()
{
    int a = 10;
    if(a != 10)
        if(a < 30)
            std::cout << "1\n";
        else
            std::cout << "2\n";
    else
        std::cout << "3\n";
    return 0;
}
