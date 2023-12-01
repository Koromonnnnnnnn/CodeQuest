#include <iostream>
#include <string>
using namespace std;

int gettestCases();

int main()
{

    int testCases = gettestCases();

    for (int testcase = 0; testcase < testCases; testcase++)
    {
        string color;
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

    return 0;
}

int gettestCases(){

    int testCases;
    cin >> testCases;
    cin.ignore();

    return testCases;
}