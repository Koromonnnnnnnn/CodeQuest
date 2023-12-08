#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int gettestCases();

bool areAnagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2)
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

int main()
{

    const int testCases = gettestCases();
    string finalOutput = "";

    for (int testcase = 0; testcase < testCases; testcase++)
    {
        string text;
        getline(cin, text);

        if (text.find("|") < text.length())
        {
            cout << "Found" << endl;
        }
        else
        {
            cout << "Not Found" << endl;
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