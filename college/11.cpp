#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    int marks;
    string name;

public:
    Student(int marks, const string& name) : marks(marks), name(name) {}

    void stf(fstream& f) {
        f.open("hehe.txt", fstream::app);  // Use fstream::app for append mode
        f << "\n\nStudent Details:\nName: " << name << "\nGrade: " << marks << endl;
        f.close();
    }
};

int main() {
    fstream f;
    Student* s1 = new Student(90, "Kriish");
    Student* s2 = new Student(94, "brdr");
    Student* s3 = new Student(92, "root");

    s1->stf(f);
    s2->stf(f);
    s3->stf(f);

    f.open("hehe.txt", fstream::in);
    string line;
    while (getline(f, line)) {
        cout << line << endl;
    }
    f.close();

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
