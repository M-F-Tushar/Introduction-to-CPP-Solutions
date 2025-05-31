//C.6.10 What is the output of the following program?
#include <iostream>
int main()
{
    int i, j, k;
    for(i = 0; i < 2; i++)
    {
        std::cout << "? ";
        for(j = i+1; j; j--)
        {
            std::cout << "! ";
            for(k = i; k < j+1; k++)
                std::cout << "* ";
        }
    }
    return 0;
}
