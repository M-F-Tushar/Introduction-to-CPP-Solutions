/*
C.5.4 Write a program that reads a man’s height (in metres) and weight (in kilograms) and calculates his
body mass index (BMI) using the formula bmi = weight/height2. The program should display the BMI
and a corresponding message according to the following table, as well as the lower and upper limit of the
normal weight for the given height.
MASS INDEX      RESULT
BMI < 20        Lower than normal weight
20 ≤ BMI ≤ 25   Normal weight
25 < BMI ≤ 30   Overweight
30 < BMI ≤ 40   Obese
40 < BMI        Extremely obese
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    float bmi, height, weight;
    cout << "Enter height (in meters): ";
    cin >> height;
    cout << "Enter weight (in kgrs): ";
    cin >> weight;
    bmi = weight/(height*height);
    cout << "BMI:" << bmi << '\n';
    if(bmi < 20)
        cout << "Under normal weight\n";
    else if(bmi <= 25)
        cout << "Normal weight\n";
    else if(bmi <= 30)
        cout << "Overweight\n";
    else if(bmi <= 40)
        cout << "Obese\n";
    else
        cout << "Serious obesity\n";
    cout << "According to your height the bounds of normal weight are " <<
         20*height*height << " and " << 25*height*height << '\n';
    return 0;
}
