//C.5.1 Write a program that reads two foats (e.g., a and b) and displays the solution of the equation a*x + b = 0, if any.
#include<iostream>
using namespace std;
int main()
{
    double a, b;

    cout << "Enter number:";
    cin >> a >> b;

    if(a == 0)
    {
        if(b == 0)
            cout << "Infinite solution";
        else
            cout << "No solution";
    }
    else
        cout << "The solution is:" << -b/a << '\n';
    return 0;



}
