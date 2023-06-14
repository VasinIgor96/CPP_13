#include <iostream>
using namespace std;

void reverseCopy(int* src, int* dest, int size) {
    int* srcPtr = src + size - 1;   
    int* destPtr = dest;            

    while (srcPtr >= src) {
        *destPtr = *srcPtr;        
        srcPtr--;                   
        destPtr++;                  
    }
}

int main() {
    int src[] = { 1, 2, 3, 4, 5 };
    int dest[5];

    int size = sizeof(src) / sizeof(src[0]);

    reverseCopy(src, dest, size);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << src[i] << " ";
    }
    cout << endl;

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << dest[i] << " ";
    }
    cout << endl;

    return 0;
}
