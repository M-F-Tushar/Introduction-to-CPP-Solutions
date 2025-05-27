#include <iostream> // Example 4.9
int main()
{
    if(sizeof(int) > -1)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
    return 0;
}
/*
🧠 What’s happening?
sizeof(int) gives the size of an int, usually 4 bytes.

So sizeof(int) is 4.

BUT… here's the tricky part:

sizeof doesn't give a normal number. It gives an unsigned number — that means it can never be negative.

-1 is a negative number, but when it's compared to something unsigned, it gets converted into a huge positive number (like 4 billion!).
*/
