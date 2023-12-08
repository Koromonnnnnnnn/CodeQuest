#include <iostream>
#include <string>
using namespace std;

int gettestCases();

int main()
{

    const int testCases = gettestCases();
    string finalOutput = "";
    string colors[] = {"blue-violet", "blue", "blue-green", "green", "orange", "red", "red-orange", "red-violet", "violet", "yellow", "yellow-green", "yellow-orange"};

    for (int testcase = 0; testcase < testCases; testcase++)
    {
        string color;
        getline(cin, color);

        if (color == colors[0])
        {
            finalOutput += "In order to make blue-violet, blue and red must be mixed."; //blue violet
        }
        else if (color == colors[1])
        {
            finalOutput += "No colors need to be mixed to make blue."; // blue
        }
        else if (color == colors[2])
        {
            finalOutput += "In order to make blue-green, blue and yellow must be mixed."; // blue green
        }
        else if (color == colors[3])
        {
            finalOutput += "In order to make green, blue and yellow must be mixed."; //green
        }
        else if (color == colors[4])
        {
            finalOutput += "In order to make orange, red and yellow must be mixed."; //orange
        }
        else if (color == colors[5])
        {
            finalOutput += "No colors need to be mixed to make red."; //red
        }
        else if (color == colors[6])
        {
            finalOutput += "In order to make red-orange, red and yellow must be mixed."; //red orange
        }
        else if (color == colors[7])
        {
            finalOutput += "In order to make red-violet, blue and red must be mixed."; //red violet
        }
        else if (color == colors[8])
        {
            finalOutput += "In order to make violet, blue and red must be mixed."; //violet
        }
        else if (color == colors[9])
        {
            finalOutput += "No colors need to be mixed to make yellow."; //yellow
        }
        else if (color == colors[10])
        {
            finalOutput += "In order to make yellow-green, yellow and blue must be mixed."; //yellow-green
        }
        else if (color == colors[11])
        {
            finalOutput += "In order to make yellow orange, yellow and red must be mixed."; //yelow orange
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