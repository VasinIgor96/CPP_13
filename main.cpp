#include <iostream>
using namespace std;

int arraySum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    const int size = 5;
    int arr[size];

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum = arraySum(arr, size);

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
