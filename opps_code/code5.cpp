#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeId;
    float salary[3];
    float avgSalary;

public:
    void input() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> employeeId;
        cout << "Enter salary for 3 months: ";
        for (int i = 0; i < 3; i++) {
            cin >> salary[i];
        }
    }

    void average() {
        float sum = 0.0;
        for (int i = 0; i < 3; i++) {
            sum += salary[i];
        }
        avgSalary = sum / 3.0;
    }

    void output() {
        cout << "\nEmployee details\n";
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salaries: \n";
        for (int i = 0; i < 3; i++) {
            cout << "Salary in " << i + 1 << " month: " << salary[i] << endl;
        }
        cout << "\nAverage salary: " << avgSalary << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.average();
    e.output();

    cout << "Written by Mohit Kumar." << endl;
    cout << "IT 2nd Shift." << endl;
    return 0;
}
