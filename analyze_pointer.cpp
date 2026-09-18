#include <iostream>
using namespace std;

// Prints the pointer's memory address and the value it points to
void analyze_pointer(int* ptr) {
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl; // Dereferences pointer to get value
}

int main() {
    // Stack allocation
    int iValue = 10;
    cout << "Stack variable: " << endl;
    analyze_pointer(&iValue); // Pass address of stack variable

    // Heap allocation
    int* heapValue = new int[100];
    cout << "Heap variable: " << endl;
    analyze_pointer(heapValue); // Pass pointer to heap memory

    delete[] heapValue; // Deallocate heap memory
    return 0;
}