#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testCases;
    cout << "Enter the number of test cases: ";
    cin >> testCases;
    cin.ignore();

    for (int testcase = 0; testcase < testCases; testcase++)
    {
        string color;
        cout << "Enter color for test case " << testcase + 1 << ": ";
        getline(cin, color);

        if (color == "violet")
        {
            cout << "In order to make violet, blue and red must be mixed." << endl;
        }
        else if (color == "blue-green")
        {
            cout << "In order to make blue-green, blue and yellow must be mixed." << endl;
        }
        else if (color == "yellow")
        {
            cout << "No colors need to be mixed to make yellow." << endl;
        }
        else if (color == "orange")
        {
            cout << "In order to make orange, red and yellow must be mixed." << endl;
        }
    }

    cout << "Program execution complete." << endl;

    return 0;
}