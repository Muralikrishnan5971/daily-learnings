#include <iostream>

using namespace std;

int getThirdAngle(int a1, int a2)
{
    if (( a1 > 0) && (a1 < 180) &&
            ((a2 > 0) && (a2 < 180)) &&
            ((a1 + a2) < 180))
    {
        return 180 - (a1 + a2);
    }
    else
    {
        cout << a1 << " and " << a2 << " are INAVLID!! " << endl;
        return 1;
    }
}

int main()
{
    int a1, a2;
    cout << "Enter First and the Second angle of a Triangle: ";
    cin >> a1 >> a2;

    int a3 = getThirdAngle(a1, a2);
    cout << "The Third angle is: " << a3;

    return 0;

}
