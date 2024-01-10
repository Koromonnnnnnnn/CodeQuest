#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool areAnagrams(const string &word1, const string &word2)
{
    if (word1.length() != word2.length())
    {
        return false;
    }

    string sortedWord1 = word1;
    string sortedWord2 = word2;

    sort(sortedWord1.begin(), sortedWord1.end());
    sort(sortedWord2.begin(), sortedWord2.end());

    return sortedWord1 == sortedWord2;
}

int main()
{
    int testCases;
    cin >> testCases;
    cin.ignore(); // Ignore the newline character after reading testCases

    for (int i = 0; i < testCases; ++i)
    {
        string input;
        getline(cin, input, '|'); // Read until '|'

        string word1 = input;
        getline(cin, input);

        string word2 = input;

        if (areAnagrams(word1, word2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
