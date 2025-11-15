// Practical - 7

// develop a program to enter travelling details and tell number of lower required using closer and eject.


#include<iostream>
using namespace std;
class Travel {
    string source;
    string destination;
    int passengers;
    static const int busCapacity = 50;
    int buses;
public:
    void input() {
        cout << "Enter source: ";
        cin >> source;
        cout << "Enter destination: ";
        cin >> destination;
        cout << "Enter number of passengers: ";
        cin >> passengers;
    }
    int calculateBuses() {
        buses = passengers / busCapacity;
        if (passengers % busCapacity != 0)
            buses++;
        return buses;
    }
    void output() {
        cout << "Travel Details:" << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Number of passengers: " << passengers << endl;
        cout << "Number of buses required: " << calculateBuses() << endl;
    }
};
int main() {
    Travel travel;
    travel.input();
    travel.calculateBuses();
    travel.output();

    cout << "Written by Mohit Kumar." << endl;
    cout << "IT 2nd Shift." << endl;
  return 0;
}
