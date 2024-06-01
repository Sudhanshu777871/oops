#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    ifstream readFile;
    readFile.open("myfile.txt");
    char a;

    while (!readFile.eof())
    {
        // readFile >> a; // do not provide space between character
        a = readFile.get();
        cout << a;
    }

    readFile.close();

    return 0;
}