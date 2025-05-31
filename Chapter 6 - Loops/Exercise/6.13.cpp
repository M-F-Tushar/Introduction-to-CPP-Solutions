/*
C.6.13 Write a program that displays the integer solutions, if any, of: 4x − 2y + 3z = 20, xyz < 15 and
x2+ y2+ z2> 8, where x is an integer within [−10, 10], y is within [−3, 3] and z is within [2, 6].
*/
#include <iostream>
int main()
{
    int x, y, z, flag;
    flag = 1;
    for(x = -10; x <= 10; x++)
        for(y = -3; y <= 3; y++)
            for(z = 2; z <= 6; z++)
                if((4*x - 2*y + 3*z == 20) && (x*y*z < 15) &&
                        (x*x + y*y + z*z > 8))
                {
                    std::cout << "Solution: " << x << ' ' <<
                              y << ' ' << z << ' ' << '\n';
                    flag = 0;
                }
    if(flag)
        std::cout << "No solution\n";
    return 0;
}
