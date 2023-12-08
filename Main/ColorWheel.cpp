#include <iostream>
#include <string>
using namespace std;

int gettestCases();

int main()
{

    const int testCases = gettestCases();
    string finalOutput = "";

    for (int testcase = 0; testcase < testCases; testcase++)
    {
        string color;
        getline(cin, color);

        if (color == "violet")
        {
            finalOutput += "In order to make violet, blue and red must be mixed.";
        }
        else if (color == "blue green")
        {
            finalOutput += "In order to make blue-green, blue and yellow must be mixed.";
        }
        else if (color == "yellow")
        {
            finalOutput += "No colors need to be mixed to make yellow.";
        }
        else if (color == "orange")
        {
            finalOutput += "In order to make orange, red and yellow must be mixed.";
        }
        if (testcase != (testCases - 1))
        {
            finalOutput += "\n";
        }
    }
    cout << finalOutput;

    return 0;
}

int gettestCases()
{

    int testCases;
    cin >> testCases;
    cin.ignore();

    return testCases;
}