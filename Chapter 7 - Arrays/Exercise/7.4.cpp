/*
C.7.4 Write a program that reads integers continuously and stores them in a vector object. If the user enters
-1, the insertion of numbers should terminate. Then, the program should check if the vector is symmetric,
that is, if the value of the frst element is equal to the last one, the value of the second one is equal to the
value of the last but one, and so on. If it is not symmetric, the program should check if there is a duplicated
value and, if so, it should terminate. If not, the program should display a message that all values are different.
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
int main()
{
    bool flag;
    int i, j, size;
    vector<int> v;
    while (1)
    {
        cout << "Enter number: ";
        cin >> i;
        if (i == -1)
            break;
        v.push_back(i);
    }
    size = v.size();
    flag = 1;
    for (i = 0; i < size / 2; i++)
        if (v[i] != v[size - 1 - i])
        {
            flag = 0;
            break; /* Since we found out that the vector is not
            symmetric, the loop ends. */
        }
    if (flag)
        cout << "Symmetric\n";
    else
    {
        cout << "Not symmetric with ";
        for (i = 0; i < size; i++)
        {
            for (j = i + 1; j < size; j++) /* This loop checks if there
               is another element with the value of v[i]. */
            {
                if (v[i] == v[j])
                {
                    cout << "same values\n";
                    return 0; /* Since we found out that two
                    elements have the same value, the program terminates. */
                }
            }
        }
        cout << "different values\n";
    }
    return 0;
}
