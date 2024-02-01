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

        if (firstPart == "true" || firstPart == "True")
        {
            gorrillaOne = true;
        }
        else if (firstPart == "false" || firstPart == "False")
        {
            gorrillaOne == false;
        }
        if (secondPart == "true" || secondPart == "True")
        {
            gorrillaTwo = true;
        }
        else if (secondPart == "false" || secondPart == "False")
        {
            gorrillaTwo = false;
        }
        if (gorrillaOne == false && gorrillaTwo == false)
        {
            finalOutput += "false";
        }
        else if (gorrillaOne == false && gorrillaTwo == true)
        {
            finalOutput += "false";
        }
        else if (gorrillaOne == true && gorrillaTwo == true)
        {
            finalOutput += "true";
        }
        else if (gorrillaOne == true && gorrillaTwo == false)
        {
            finalOutput += "false";
        }

        if (testcase != (testCases - 1))
        {
            finalOutput += "\n";
        }
    }

    cout << finalOutput;

    return 0;
}
