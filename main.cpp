#include <iostream>
using namespace std;

void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int sourceArray[] = { 1, 2, 3, 4, 5 };
    int destinationArray[5];

    int size = sizeof(sourceArray) / sizeof(sourceArray[0]);
    copyArray(sourceArray, destinationArray, size);

    // Перевірка результату
    for (int i = 0; i < size; i++) {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

    return 0;
}

