/*
 •• P3.1
 Write a program that translates a letter grade into a number grade. Letter grades are A, B, C, D, and F, possibly followed by + or –. Their numeric values are 4, 3, 2, 1, and 0. There is no F+ or F–. A + increases the numeric value by 0.3, a – decreases it by 0.3. However, an A+ has value 4.0.
 
 Enter a letter grade: B-
 The numeric value is 2.7.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a letter grade: ";
    string grade;
    cin >> grade;
    string letter = grade.substr(0, 1);
    string suffix = grade.substr(1, 1);
    float value = 0;
    
    if (letter == "A")
    {
        if (suffix == "" || suffix == "+")
        {
            value = 4;
        }
        else
        {
            value = 3.7;
        }
        cout << "The numeric value is " << value << endl;
        return 1;
    }
    else if (letter == "B")
    {
        value = 3;
    }
    else if (letter == "C")
    {
        value = 2;
    }
    else if (letter == "D")
    {
        value = 1;
    }
    else if (letter == "F")
    {
        value = 0;
        cout << "The numeric value is " << value << endl;
        return 1;
    }
    if (suffix == "-")
    {
        value = value - 0.3;
    }
    else
    {
        value = value + 0.3;
    }
    cout << "The numeric value is " << value << endl;
}
