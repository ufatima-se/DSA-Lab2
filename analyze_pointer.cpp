#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}
 int main() {
    
    int iValue = 10;
    cout << "Stack variable: " << endl;
    analyze_pointer(&iValue);


    int* heapValue = new int[100];
    cout << "Heap variable: " << endl;
    analyze_pointer(heapValue);

 return 0;
 }

 

 

