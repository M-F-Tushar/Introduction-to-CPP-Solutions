
/*
C.5.3 To change the PIN code of a mobile phone, the user is asked to enter the current PIN code and the
device compares that code with the one stored in the SIM card. If they are the same, the user is asked to
enter the new PIN code twice for verifcation, and if the same number is entered twice, it is stored in the
SIM card. Write a program that simulates this process. Assume that the current code stored in SIM is 1234
*/
#include<iostream>
using std::cout;
using std::cin;
int main()
{
    int tmp, new_code;

    cout << "Enter code:";
    cin >> tmp;

    if(tmp == 1234)
    {
        cout << "Enter new code:";
        cin >> tmp;

        cout << "Enter new code once more:";
        cin >> new_code;

        if(new_code == tmp)
            cout << "New code is stored\n";
        else
            cout << "Different codes are entered\n";


    }
    else
        cout << "Wrong code\n";
    return 0;
}
