#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i = 100;
    double j = 100.536;
    cout << i << oct << '\t' << i << hex << '\t' << i << endl;
    cout << scientific << j << '\t' << fixed << j << endl;
    cout << setprecision(2) << j << '\t' << setprecision(0) << '\t' << j
<< endl;
    cout<< showbase << uppercase << i << '\t' << 1.4999 << '\t' <<
showpos << dec << i << endl;
    return 0;
}
