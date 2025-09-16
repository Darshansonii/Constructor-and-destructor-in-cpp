// Darshan Soni
// 24070123034

#include <iostream>
using namespace std;

class Student {
    string name;
    double fee;

public:
    Student();
    void display();
};

Student::Student() {
    cout << "Enter the name of Student: ";
    cin >> name;
    cout << "Enter the fee: ";
    cin >> fee;
}

void Student::display() {
    cout << "\nStudent Name: " << name;
    cout << "\nFee: " << fee << endl;
}

int main() {
    Student s;
    s.display();
    return 0;
}

// OUTPUT
// Enter the name of Student: Darshan
// Enter the fee: 1560000

// Student Name: Darshan 
// Fee: 1560000