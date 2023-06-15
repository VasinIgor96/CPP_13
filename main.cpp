#include <iostream>
using namespace std;

void determineSign(int* number) {
    if (*number > 0) {
        cout << "Positive number" << endl;
    }
    else if (*number < 0) {
        cout << "Negative number" << endl;
    }
    else {
        cout << "Zero" << endl;
    }
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int* ptr = &number;

    determineSign(ptr);

    return 0;
}
