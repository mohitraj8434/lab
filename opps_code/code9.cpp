#include <iostream>
using namespace std;

class Employee {
private:
    int empno;
    string ename;
    float basic;
    float hra;
    float da;
    float netpay;

public:
    void haveData() {
        cout << "Enter Employee Number: ";
        cin >> empno;
        cout << "Enter Employee Name: ";
        cin >> ename;
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate() {
        hra = 0.10 * basic;
        da = 0.20 * basic;
        netpay = basic + hra + da;
    }

    void dispData() {
      cout << "\n___ Employee Details ___\n";
        cout << "Employee Number: " << empno << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Net Pay: " << netpay << endl;
    }
};

int main() {
    Employee emp;
    emp.haveData();
    emp.calculate();
    emp.dispData();
    cout << "Written by Mohit Kumar." << endl;
    cout << "IT 2nd Shift." << endl;
    return 0;
}