#include<iostream>
int main()
{
    int i = 20;

    if(i =! 5)
        std::cout << "One\n";
    else
        std::cout << "Two\n";
    std::cout << i << '\n';
    return 0;
}
//Because the ! operator is applied to the constant value 5, i becomes 0, so the condition becomes false Therefore, the program outputs Two and 0.
