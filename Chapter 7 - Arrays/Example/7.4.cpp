/*
The following program reads a number of students, creates a vector object that contains their grades
and a second one with their names. Then, it displays the names and the grades of the students with a grade
greater than or equal to the average grade.
*/
#include <iostream> // Example 7.4
#include <string>
#include <vector>
using namespace std;
int main()
{
    int i, num;
    float avg, sum;
    cout << "Enter number of students: ";
    cin >> num;
    vector<float> grd(num);
    vector<string> names(num);
    sum = 0;
    for (i = 0; i < num; i++)
    {
        cout << "Enter grade: ";
        cin >> grd[i];
        cin.get();
        cout << "Enter name: ";
        getline(cin, names[i]);
        sum += grd[i];
    }
    avg = sum / num;
    for (i = 0; i < num; i++)
        if (grd[i] >= avg)
            cout << names[i] << ": " << grd[i] << '\n';
    return 0;
}
/*
#include <iostream> // Example 7.4
Includes the iostream library for input and output (cin, cout).

#include <string>
Includes the string library to use the std::string type.

#include <vector>
Includes the vector library, which allows use of dynamic arrays (std::vector).

using namespace std;
Allows you to write cin, cout, vector, string, etc., without needing to prefix them with std::.

int main()
Entry point of the program.


int i, num;
float avg, sum;
Declares:

i: a loop counter.

num: number of students.

avg: average of all grades.

sum: sum of all grades.


cout << "Enter number of students: ";
cin >> num;
Prompts the user to enter how many students there are.

Stores the value in num.


vector<float> grd(num);
Declares a vector of float type named grd, sized num (one grade per student).

vector<string> names(num);
Declares a vector of string type named names, sized num (one name per student).


sum = 0;
Initializes the sum of grades to 0.


for(i = 0; i < num; i++)
Starts a loop that will run once for each student.


cout << "Enter grade: ";
cin >> grd[i];
cin.get();
Prompts and reads the student's grade into grd[i].

cin.get(); reads (and discards) the newline character left in the input buffer after entering the grade (although cin.ignore() is more appropriate).

cout << "Enter name: ";
getline(cin, names[i]);
Prompts and reads the full name (with spaces) of the student into names[i].

sum += grd[i];
Adds the current student's grade to the total sum.

avg = sum / num;
Computes the average grade by dividing the sum by the number of students.

for(i = 0; i < num; i++)
Starts another loop to go through each student again.

if(grd[i] >= avg)
    cout << names[i] << ": " << grd[i] << '\n';
If the student's grade is greater than or equal to the average, print their name and grade.

return 0;
Ends the program and returns 0 to indicate successful execution.


*/