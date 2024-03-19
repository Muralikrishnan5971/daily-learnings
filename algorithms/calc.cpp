#include <iostream>
using namespace std;

int main()
{
    int i, a, b;
    cout << "Please choose your operation: " << endl;
    cout << "1 --> Addition" << endl;
    cout << "2 --> Subtraction" << endl;
    cout << "3 --> Division" << endl;
    cout << "4 --> Multiplication" << endl;
    cin >> i;
    cout << "Please enter the first value: " << endl;
    cin >> a;
    cout << "Please enter the second value: " << endl;
    cin >> b;

    if (i == 1) cout << a << "+" << b << "is" << a + b << endl;
    else if (i == 2) cout << a << "-" << b << "is" << a - b << endl;
    else if (i == 3) cout << a << "/" << b << "is" << a / b << endl;
    else cout << a << "*" << b << "is" << a * b << endl;

    return 0;
}
