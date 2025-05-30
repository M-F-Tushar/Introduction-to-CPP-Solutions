
#include <iostream> // Example 6.2
#include <cstdlib>
#include <ctime>
int main()
{
    int i, num;
    srand(time(NULL));
    for(i = 0; i < 5; i++)
    {
        num = rand();
        std::cout << num << '\n';
    }
    return 0;
}
//The rand() function together with the srand() and time() functions is used to generate random
//integers each time the program runs. rand() returns an integer between 0 and RAND_MAX.
