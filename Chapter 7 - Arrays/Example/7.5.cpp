// The following program reads ten numbers and stores them in a vector object that is initially empty
#include <iostream> // Example 7.5
#include <vector>
using namespace std;
int main()
{
    int i, num;
    vector<int> vec;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter number: ";
        cin >> num;
        vec.push_back(num);
    }
    cout << vec.size() << ' ' << vec.capacity() << '\n';
    return 0;
}
