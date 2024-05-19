#include <iostream>
using namespace std;

class Calculator {
public:
    void add(double a, double b) {
        cout << "Result: " << a + b << endl;
    }

    void subtract(double a, double b) {
        cout << "Result: " << a - b << endl;
    }

    void multiply(double a, double b) {
        cout << "Result: " << a * b << endl;
    }

    void divide(double a, double b) {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
        } else {
            cout << "Error: Division by zero." << endl;
        }
    }
};

int main() {
    Calculator calc;
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    switch (op) {
    case '+':
        calc.add(a, b);
        break;
    case '-':
        calc.subtract(a, b);
        break;
    case '*':
        calc.multiply(a, b);
        break;
    case '/':
        calc.divide(a, b);
        break;
    default:
        cout << "Invalid operator." << endl;
    }

    return 0;
}
