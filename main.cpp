#include <iostream>
using namespace std;

int getMax(int* num1, int* num2) {
    if (*num1 > *num2) {
        return *num1;
    }
    else {
        return *num2;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    int maxNum = getMax(ptr1, ptr2);

    cout << "Number 1: " << *ptr1 << endl;
    cout << "Number 2: " << *ptr2 << endl;
    cout << "Max Number: " << maxNum << endl;

    return 0;
}
