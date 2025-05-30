#include <iostream> // Example 6.5
int main()
{
    int i;
    for(i = 1; i < 10; i++)
    {
        switch(i)
        {
        case 2:
        case 3:
            break;
        default:
            if(i == 4)
                break;
            std::cout << i << "* ";
            break;
        }
        if(i == 5)
            break;
    }
    return 0;
}
/*
In the first iteration, the default case outputs 1* and the break terminates the switch statement,
not the for statement. In the next two iterations the break of the first two cases terminates the switch
and the program displays nothing. Be careful now, in the fourth iteration (i = 4), it is the break of the
inner if that terminates the switch and the program displays nothing. The fifth iteration outputs 5*
in the default case and since the condition in the outer if is true, the break terminates the loop.
Therefore, the program outputs: 1* 5*.
*/
