/*
C.5.6 A water supply company charges the water consumption, as follows:
a. Fixed amount of $10.
b. For the frst 30 cubic metres, $0.6/m3.
c. For the next 20 cubic metres, $0.8/m3
d. For the next 10 cubic metres, $1.1/m3.
e. For every additional metre, $1.2/m3.
Write a program that reads the water consumption in cubic metres and displays the total cost. For
example, if the consumption is 55 cm, the fnal cost is calculated as follows: cost = 10 + 30*0.6 +
20*0.8 + 5*1.1.
*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    float mtrs, cost;
    cout << "Enter meters: ";
    cin >> mtrs;
    if(mtrs <= 30)
        cost = 0.6*mtrs;
    else if(mtrs <= 50)
        cost = 0.6*30 + 0.8*(mtrs-30);
    else if(mtrs <= 60)
        cost = 0.6*30 + 0.8*20 + 1.1*(mtrs-50);
    else
        cost = 0.6*30 + 0.8*20 + 1.1*10 + (mtrs-60)*1.2;
    cost += 10;
    cout << "Cost: " << cost << '\n';
    return 0;
}
