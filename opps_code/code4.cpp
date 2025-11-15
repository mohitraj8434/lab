#include <iostream>
using namespace std;

class student {
private: 
    string name;
    int enrollmentNo;
    int marks[5];
    float avg;

public:
    void input() {
        cout << "Enter student name : ";
        cin >> name;

        cout << "Enter enrollment no: ";
        cin >> enrollmentNo;

        cout << "Enter marks in 5 subjects : ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    void calculateAverage() {
        avg = 0.0;
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        avg = sum / 5.0;
    }

    void output() {
        cout << "\n___ Student Details ___\n";
        cout << "Enrollment no : " << enrollmentNo << endl;
        cout << "Marks : " << endl;

        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << " marks : " << marks[i] << endl;
        }
        cout << "\nAverage marks : " << avg << endl;
    }
};

int main() {
    student s;
    s.input();
    s.calculateAverage();
    s.output();

    cout << "Written by Mohit Kumar." << endl;
    cout << "IT 2nd Shift." << endl;

    return 0;
}
