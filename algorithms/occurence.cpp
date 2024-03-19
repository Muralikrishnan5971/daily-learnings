#include <iostream>

using namespace std;

int charCount(string str, char c)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
            count++;
    }

    return count;
}

int main()
{
    string text;
    char c;
    cout << "Please enter you string: ";
    cin >> text;
    cout << "Please enter the character to find count of: ";
    cin >> c;

    int m = charCount(text, c);
    cout << c << " is present " << m << " times in " << text << endl;

    return 0;
}
