#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str = "MIHIRR42";
    string str1;
    // Opening the files using constructor and writing it
    // ofstream out("file.txt");      // Write operation
    // out<<str;

    // Opening the files using constructor and reading it
    ifstream in("file1.txt"); // Read operation
    // in>>str1;
    getline(in, str1);
    cout << str1;

    return 0;
}


// MIHIRR42
