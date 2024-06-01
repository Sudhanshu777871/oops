#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    ofstream writeFile;
    writeFile.open("myfile.txt");                                                                     // opening the file
    writeFile << "Hello World I am Sudhnashu Kumar From India And I Am Here For Ruling The World..."; // writing in file
    writeFile.close();                                                                                // closing the file
    return 0;
}