#include <iostream>
using namespace std;

void reverse_str(char* str,int size) {
    int left = 0;
    int right = size - 1;
    
    while(left <= right) {
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

    char* str = new char[size + 1];

    cout << "Enter a string to reverse: " ;
    cin >> str;

    reverse_str(str,size);

    cout << "The reversed string is: " << str << endl;

    delete[] str;

    return 0;
 }
 

 

 

 

