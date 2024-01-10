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

    int testCases;
    string finalOutput = {" "};
    cin >> testCases;
    cin.ignore();

    for (int i = 0; i < testCases; ++i)
    {
        string data;
        getline(cin, data, '|');

        string firstPart = data;
        getline(cin, data);

        string secondPart = data;

        if (areAnagram(firstPart, secondPart))
        {
            finalOutput.append(" = ANAGRAM");
            cout << data << finalOutput << '\n';
        }
        else
        {
            finalOutput.append(" = NOT AN ANAGRAM");
            cout << data << finalOutput << '\n';
        }

    }

    return 0;
}