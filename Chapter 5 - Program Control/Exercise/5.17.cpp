/*
C.5.16 Write a program that calculates the cost of transporting a passenger’s luggage, according to the
following table. The program should read the type of the passenger’s class and the weight of the luggage
and display the cost.
CLASS WEIGHT (lb) COST ($)
Economy ≤ 25 0
> 25 and ≤ 40 1.50 for each pound over 25
> 40 2.00 for each pound over 40
Business ≤ 35 0
> 35 and ≤ 50 1.25 for each pound over 35
> 50 1.50 for each pound over 50
VIP ≤ 60 0
> 60 30 (fxed cost)
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int clas;
    double cost, weight;
    cout << "Enter class (1-Eco, 2-Business, 3-VIP): ";
    cin >> clas;
    cout << "Enter weight: ";
    cin >> weight;
    cost = 0; // Covers all cases where the passenger pays nothing.
    switch(clas)
    {
    case 1:
        if(weight > 40)
            cost = 22.5 + 2*(weight-40); // 22.5 = 1.5*15
        else if(weight > 25)
            cost = 1.5*(weight-25);
        break;
    case 2:
        if(weight > 50)
            cost = 18.75 + 1.5*(weight-50); // 18.75 = 1.25*15
        else if(weight > 35)
            cost = 1.25*(weight-35);
        break;
    case 3:
        if(weight > 60)
            cost = 30;
        break;
    default:
        cout << "Error: Wrong traffic class\n";
        return 0;
    }
    cout << "Cost: " << cost << '\n';
    return 0;
}
