/* Write a program that searches for the largest three numbers in an array randomly populated by a user. */

#include <iostream>
#include <climits>

using namespace std;

// Function to find the three largest numbers
void findThreeLargest(int arr[], int size, int& first, int& second, int& third) {
    // Initialize the three largest numbers to the smallest possible integer value
    first = second = third = INT_MIN;
   
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }
}

int main() {
    int size;
   
    cout << "Enter the number of elements in the array: ";
    cin >> size;
   
    // Validate array size
    if (size <= 0) {
        cout << "Array size must be positive!" << endl;
        return 1;
    }
   
    if (size < 3) {
        cout << "Please enter at least 3 numbers to find the largest three!" << endl;
        return 1;
    }
   
    int* arr = new int[size];
   
    // Get numbers from user
    cout << "\nEnter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];
    }
   
    // Display the entered array
    cout << "\nYou entered: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
   
    // Find the three largest numbers
    int first, second, third;
    findThreeLargest(arr, size, first, second, third);
   
    // Display results
    cout << "\nThe three largest numbers are:" << endl;
    cout << "1st largest: " << first << endl;
    cout << "2nd largest: " << second << endl;
    cout << "3rd largest: " << third << endl;
   
    // Clean up memory
    delete[] arr;
   
    return 0;
}
