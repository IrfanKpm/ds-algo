#include <iostream>
#include <string>
using namespace std;

string ReverseString(string inWord)
{
    int i = 0;
    int j = inWord.length() - 1;
    char temp;
    while (i < j)
    {
        temp = inWord[i];
        inWord[i] = inWord[j];
        inWord[j] = temp;
        i++;
        j--;
    }
    return inWord;
}

int main()
{
    string s = "abcba";
    string s2 = ReverseString(s);

    if (s == s2)
        cout << "Palindrome > true";
    else
        cout << "Palindrome > false";
    cout << endl;
    return 0;
}
