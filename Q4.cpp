/* Write a function that finds that first element that repeats itself in an array. */

#include <iostream>
using namespace std;

int findFirstRepeatingSimple(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
}

int main() {
    int size;
   
    cout << "Enter the size of the array: ";
    cin >> size;
   
    if (size <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }
   
    int* arr = new int[size];
   
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
   
    int result = findFirstRepeatingSimple(arr, size);
   
    if (result != -1) {
        cout << "First repeating element: " << result << endl;
    } else {
        cout << "No repeating elements found." << endl;
    }
   
    delete[] arr;
    return 0;
}
