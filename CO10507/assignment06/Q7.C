#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int empID;
    double salary;

public:
    void setDetails(string n, int id, double s) {
        name = n;
        empID = id;
        salary = s;
    }

    void calculateSalary(char performance) {
        if (performance == 'A') {
            salary += salary * 0.10; // 10% increase
        } else if (performance == 'B') {
            salary += salary * 0.05; // 5% increase
        } else if (performance == 'C') {
            // No change
        } else {
            cout << "Invalid performance grade." << endl;
        }
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    string name;
    int empID;
    double salary;
    char performance;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee ID: ";
    cin >> empID;
    cout << "Enter employee salary: ";
    cin >> salary;

    emp.setDetails(name, empID, salary);

    cout << "Enter performance grade (A/B/C): ";
    cin >> performance;

    emp.calculateSalary(performance);
    emp.displayDetails();

    return 0;
}
