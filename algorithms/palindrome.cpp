#include <iostream>

using namespace std;

bool is_palindrome(string str)
{
    for (int i =0; i < str.length() / 2; i++)
        if (str[i] != str[str.length() - i -1])
            return false;

    return true;
}

int main()
{
    string s = "murali"; // not a palindrome
    string p = "malayalam"; // palindrome

    cout << s << " is palindrome " << is_palindrome(s) << endl;
    cout << p << " is palindrome " << is_palindrome(p) << endl;

    return 0;

}
