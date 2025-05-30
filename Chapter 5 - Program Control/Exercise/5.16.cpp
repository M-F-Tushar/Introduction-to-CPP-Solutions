/*
C.5.15 Write a program that reads a person’s sex and height and displays the corresponding description
for the height according to the following table.
SEX HEIGHT (m) RESULT
Male < 1.70 Short
Male ≥ 1.70 and < 1.85 Normal
Male ≥ 1.85 Tall
Female < 1.60 Short
Female ≥ 1.60 and < 1.75 Normal
Female ≥ 1.75 Tall
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int sex;
    float height;
    cout << "Enter sex (0:man - 1:woman): ";
    cin >> sex;
    cout << "Enter height in meters: ";
    cin >> height;
    switch(sex)
    {
    case 0:
        if(height < 1.7)
            cout << "Result: Short\n";
        else if(height < 1.85) /* Since the previous if checks
values up to 1.7, this statement is equivalent to: else if(height >= 1.7 &&
height < 1.85). */
            cout << "Result: Normal\n";
        else
            cout << "Result: Tall\n";
        break;
    case 1:
        if(height < 1.6)
            cout << "Result: Short\n";
        else if(height < 1.75)
            cout << "Result: Normal\n";
        else
            cout << "Result: Tall\n";
        break;
    default:
        cout << "Error: Wrong input\n";
        break;
    }
    return 0;
}
