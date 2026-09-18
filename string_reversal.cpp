#include <iostream>
using namespace std;

// Reverses a C-style string in-place using two pointers
void reverse_str(char* str, int size) {
    int left = 0;
    int right = size - 1;

    // Swap characters from outer ends moving inward
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int size;
    cout << "Enter size of string: ";
    cin >> size;

    // Allocate array dynamically (+1 for null terminator)
    char* str = new char[size + 1];

    cout << "Enter a string to reverse: ";
    cin >> str;

    // Reverse and display result
    reverse_str(str, size);
    cout << "The reversed string is: " << str << endl;

    delete[] str; // Free heap memory
    return 0;
}