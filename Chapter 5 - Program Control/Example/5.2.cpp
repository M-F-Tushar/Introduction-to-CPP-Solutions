// what is the output of the following program?
#include<iostream>
int main()
{
    int a = -1, b = 0, c =1;

    if(a < b && b < c)
    {
        if(!b)
        {
            if(-a == c)
                std::cout << "One\n";
            else
                std::cout << "Two\n";
        }
    }
    else
        std::cout << "Three\n";
    return 0;
}
