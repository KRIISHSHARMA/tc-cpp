#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // for std::remove_if
using namespace std;

int main()
{
    // filestream variables
    fstream f1;
    fstream f2;

    string line;

    // opening first file to read the content
    f1.open("file1.txt", ios::in);
    if (!f1.is_open()) {
        cerr << "Error opening file1.txt" << endl;
        return 1;
    }

    // opening second file to write
    // the content copied from
    // first file
    f2.open("file2.txt", ios::out);
    if (!f2.is_open()) {
        cerr << "Error opening file2.txt" << endl;
        f1.close();
        return 1;
    }

    // Copying content from file1.txt to file2.txt without extra spaces
    while (getline(f1, line)) {
        // Remove spaces from the line
        line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());

        // If the line is not empty after removing spaces, write it to file2.txt
        if (!line.empty()) {
            f2 << line << endl;
        }
    }

    // closing the files
    f1.close();
    f2.close();

    // opening second file to read the content
    f2.open("file2.txt", ios::in);
    if (!f2.is_open()) {
        cerr << "Error opening file2.txt for reading" << endl;
        return 1;
    }

    // Displaying content of file2.txt
    while (getline(f2, line)) {
        cout << line << endl;
    }

    // closing file
    f2.close();

    return 0;
}

               
