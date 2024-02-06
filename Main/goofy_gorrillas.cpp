#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

bool gorrillaOne;
bool gorrillaTwo;

int main()
{
    int testCases;
    string finalOutput = "";
    cin >> testCases;
    string dummy;
    getline(cin, dummy);
    for (int testcase = 0; testcase < testCases; testcase++)
    {
        string space;
        getline(cin, space, ' ');

        string firstPart = space;
        getline(cin, space);

        string secondPart = space;
        if (firstPart == "true")
        {
            gorrillaOne = true;
        }
        else if (firstPart == "false")
        {
            gorrillaOne == false;
        }
        if (secondPart == "true")
        {
            gorrillaTwo = true;
        }
        else if (secondPart == "false")
        {
            gorrillaTwo = false;
        }
        if (gorrillaOne == true && gorrillaTwo == true)
        {
            finalOutput += "true";
        }
        else
        {
            finalOutput += "false";
        }

        gorrillaOne = false;
        gorrillaTwo = false;

        if (testcase != (testCases - 1))
        {
            finalOutput += "\n";
        }
    }

    cout << finalOutput;

    return 0;
}
