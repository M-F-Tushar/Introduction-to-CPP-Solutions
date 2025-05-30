/*
C.6.2 Write a program that reads an integer and, if it belongs to [30, 50], the program should display
the word One as many times as the value of the number, otherwise it should read 10 integers and use the
switch statement to display how many times the user entered the values 1 and 2.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int i, j, k, num;
    cout << "Enter number: ";
    cin >> num;
    if(num >= 30 && num <= 50)
    {
        for(i = 0; i < num; i++)
            cout << "One\n";
    }
    else
    {
        j = k = 0;
        for(i = 0; i < 10; i++)
        {
            cout << "Enter number: ";
            cin >> num;
            switch(num)
            {
            case 1:
                j++;
                break;
            case 2:
                k++;
                break;
            }
        }
        cout << j << ' ' << k << '\n';
    }
    return 0;
}
