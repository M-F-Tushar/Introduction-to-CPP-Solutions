
#include <iostream> // Example 6.6
int main()
{
    int i;
    for(i = 0; i < 5; i++)
    {
        if(i == 2 || i == 3)
            continue;
        std::cout << i << ' ';
    }
    return 0;
}
/*
We can also use reverse logic
if(i != 2 && i !=3)
    std::cout << i << '';
*/
