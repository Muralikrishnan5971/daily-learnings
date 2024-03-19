#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename;
    ifstream file;

    cout << "Enter filename: ";
    cin >> filename;

    file.open(filename);
    if (file.fail())
    {
        cout << "Failed to open file!!" << endl;
        return 1;
    }

    string line;
    int lineCount = 0;

    while ( !file.eof())
    {
        getline(file, line);
        cout << line << endl;
        lineCount++;
    }

    file.close();

    cout << filename << " has " << lineCount << " lines ";
    return 0;

}



