/*
C.6.11 Write a program that reads an integer which corresponds to a number of lines. The program
should display in the frst line a number of '*' equal to the input number and one less in each next line.
For example, if the user enters 5 the program should display:
*****
****
***
**
*

*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int i, j, lines;
    cout << "Enter lines: ";
    cin >> lines;
    for(i = 0; i < lines; i++)
    {
        for(j = 0; j < i; j++)
            cout << ' ';
        for(j = lines; j > i; j--)
            cout << '*';
        cout << '\n';
    }
    return 0;
}
