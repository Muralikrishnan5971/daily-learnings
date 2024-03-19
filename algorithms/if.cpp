#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Please enter a value: ";
    cin >> i;

    if (i > 100) cout << " Greater than 100";
    else if (i < 100) cout << " Less than 100";
    else  cout << " Equal to 100";

    cout << endl;

    return 0;
}

