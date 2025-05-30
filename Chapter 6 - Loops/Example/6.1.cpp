//The following program displays the numbers from 0 to 9
#include<iostream>
int main()
{
    int i;
    for(i = 0; i < 10; i++)//for(i = 0; i != 10; ++i) also valid
    {
        std::cout << i << '\n';
    }
    return 0;
}
