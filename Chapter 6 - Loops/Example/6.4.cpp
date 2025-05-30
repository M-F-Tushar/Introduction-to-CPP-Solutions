#include <iostream> // Example 6.4
int main()
{
    int i, j = 3;
    for(i = 0; i < 10; i++)
    {
        if(i == j)
            break;
        std::cout << i << '\n';
    }
    std::cout << "Out: " << i << '\n';
    return 0;
}
