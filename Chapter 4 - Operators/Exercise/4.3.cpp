/*
C.4.3 Write a program that reads the water consumption in cubic metres and calculates the amount pay￾
able according to the following table.
CONSUMPTION (CM) COST (CM)
[0–5]               0
(5–30]              1.2
 > 30               1.5

 For example, if the consumption is 35 cm the fnal cost is calculated as follows: cost = (30-5)*1.2 +
(35-30)*1.5.
*/
#include<iostream>
int main()
{
    float cost, a;

    std::cout << "Enter water consumption:";
    std::cin >> a;

    cost = (a > 5 && a <= 30)*(a-5)*1.2 + (a > 30)*((a-30)*1.5 + 25*1.2);
    std::cout << "Cost: " << cost << '\n';
    return 0;
}
/*
cost = (a > 5 && a <= 30)*(a - 5)*1.2 + (a > 30)*((a - 30)*1.5 + 25*1.2);
This line uses boolean expressions (a > 5 && a <= 30) and (a > 30) as conditions that evaluate to 1 (true) or 0 (false).
*/
