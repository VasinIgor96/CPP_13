#include <iostream>
using namespace std;

void add(int* a, int* b, int* result) {
    *result = *a + *b;
}

void subtract(int* a, int* b, int* result) {
    *result = *a - *b;
}

void multiply(int* a, int* b, int* result) {
    *result = *a * *b;
}

void divide(int* a, int* b, int* result) {
    *result = *a / *b;
}

int main() {
    int x, y, choice, result;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    cout << "Select an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
    case 1:
        add(&x, &y, &result);
        cout << "Result: " << result << endl;
        break;
    case 2:
        subtract(&x, &y, &result);
        cout << "Result: " << result << endl;
        break;
    case 3:
        multiply(&x, &y, &result);
        cout << "Result: " << result << endl;
        break;
    case 4:
        divide(&x, &y, &result);
        cout << "Result: " << result << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
