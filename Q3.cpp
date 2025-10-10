/* Write a function that takes an array an a parameter and modifies every element by multiplying it with the current values of elements before and after it. The element before the first element is considered to be a 1; 
  similarly the element after the last element is also considered a 1. The first is first multiplied, the second element is subsequently multiplied by the new value of the first element and the third element, and so on. */

#include <iostream>
using namespace std;

void modifyArray(int arr[], int size) {
    if (size == 0) return;
   
    int* original = new int[size];
    for (int i = 0; i < size; i++) {
        original[i] = arr[i];
    }
   
    for (int i = 0; i < size; i++) {
        int before = (i == 0) ? 1 : arr[i - 1];
        int after = (i == size - 1) ? 1 : original[i + 1];
       
        arr[i] = original[i] * before * after;
    }
   
    delete[] original;
}

int main() {
    int size;
   
    cout << "Enter the number of elements: ";
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
   
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
   
    modifyArray(arr, size);
   
    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
   
    delete[] arr;
    return 0;
}
