#include <iostream>
using namespace std;

int main() {
    char op;
    double a, b;

    while (true) {
        cout << "Enter operator (+, -, *, /) or q to quit: ";
        cin >> op;

        if (op == 'q') break;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch(op) {
            case '+': cout << "Result: " << a + b << endl; break;
            case '-': cout << "Result: " << a - b << endl; break;
            case '*': cout << "Result: " << a * b << endl; break;
            case '/': 
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Division by zero error\n";
                break;
            default: cout << "Invalid operator\n";
        }
    }

    return 0;
}