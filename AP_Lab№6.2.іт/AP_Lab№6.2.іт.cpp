#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void generateArray(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 46 - 10;
    }
}

void printArray(const int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int findElement(const int* a, const int size) {
    int smallest = 36, index=0;
    for (int i = 0; i < size; i++) {
        if ( a[i] <= smallest && a[i] % 2 == 0 ) {
            smallest = a[i];
            index = i;
        }
    }
    return index;
}

void replaceElements(int* a, const int size, int index) {
    a[index] = 0;
}

int main() {
    const int n = 22;
    int a[n];

    srand((unsigned)time(NULL));

    generateArray(a, n);

    printArray(a, n);

    int index = findElement(a, n);

    cout << "index of the smallest element: " << index << endl;

    replaceElements(a, n, index);

    printArray(a, n);

    return 0;
}