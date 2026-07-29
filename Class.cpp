#include <iostream>
using namespace std;

class Student;

class bird {
public:
    void showname(Student a) {
        cout << "Name: " << a.name << endl;
    }
};

class Student {
private:
    string name;
    int age;
    // friend class
    friend class bird;


public:
    // Constructor to initialize private members
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Function declaration
    void display();
};

// Function definition outside the class
// Here we are accessing the private members using a public function
void Student::display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {
    Student s1("Basit", 22);

    // Calling the public function
    s1.display();

    return 0;
}