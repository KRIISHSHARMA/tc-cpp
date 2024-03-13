#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    public : 
         Person(const string& n) {
             name = n;
    }
         virtual void display() {
         cout << "Name: " << name << endl;
    }
};


class Student : public Person{
    private:
    string course;
    int marks;
    int year;

    public:
    Student(const string& n, const string& c, int m, int y): Person(n){
        course = c;
        marks = m;
        year = y;
    }
        

    void display() override {
        cout << "Student Details:" << endl;
        Person::display();
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Emp : public Person{
    private:
    string department;
    int salary;

    public:
    Emp(const string& n, const string& d, int s): Person(n){
        department = d;
        salary = s;
    }
        

    void display() override {
        cout << "Employee Details:" << endl;
        Person::display();
        cout << "Department: " << department << endl;
        cout << "salary: " << salary << endl;
    }
};

int main(){
    Person person("KRIISH LOL");
    Student student("NOTME", "BSC IN YAPPING", 85, 2023);
    Emp employee("DEFNOTME", "FREELOADER", 50000);
    
    Person *lol = new Emp("DEF", "FREEDOM", 500);
    lol->display();
    cout<<endl;
    
    cout << "--- Displaying Person Details ---" << endl;
    person.display();
    cout << endl;

    cout << "--- Displaying Student Details ---" << endl;
    student.display();
    cout << endl;

    cout << "--- Displaying Employee Details ---" << endl;
    employee.display();
    cout << endl;
    

    return 0;
}
