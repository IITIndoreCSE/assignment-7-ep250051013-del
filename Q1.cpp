/* Write a program that allows users to enter five words (in the form of c-type strings) and concatenates these words in an alphabetical order 
   with the first character of each word determining the order. For example, if there is a word “africa” and another word “europe”; africa would come before europe in the concatenated string.*/

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX_WORDS = 5;
const int MAX_LENGTH = 100;

// Function to compare two strings based on first character
bool compareFirstChar(const char* a, const char* b) {
    return a[0] < b[0];
}

int main() {
    char* words[MAX_WORDS];
   
    // Allocate memory for each word
    for (int i = 0; i < MAX_WORDS; i++) {
        words[i] = new char[MAX_LENGTH];
    }
   
    cout << "Enter five words:" << endl;
   
    // Read five words from user
    for (int i = 0; i < MAX_WORDS; i++) {
        cout << "Word " << (i + 1) << ": ";
        cin >> words[i];
    }
   
    // Sort the words based on first character
    sort(words, words + MAX_WORDS, compareFirstChar);
   
    // Calculate total length needed for result (including spaces)
    int totalLength = 0;
    for (int i = 0; i < MAX_WORDS; i++) {
        totalLength += strlen(words[i]);
    }
    totalLength += MAX_WORDS - 1; // Add space for spaces between words
   
    // Concatenate the sorted words with spaces
    char* result = new char[totalLength + 1];
    result[0] = '\0'; // Initialize as empty string
   
    for (int i = 0; i < MAX_WORDS; i++) {
        strcat(result, words[i]);
        if (i < MAX_WORDS - 1) { // Add space after each word except the last one
            strcat(result, " ");
        }
    }
   
    // Display the result
    cout << "\nConcatenated string in alphabetical order: " << result << endl;
   
    // Clean up memory
    for (int i = 0; i < MAX_WORDS; i++) {
        delete[] words[i];
    }
    delete[] result;
   
    return 0;#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX_WORDS = 5;
const int MAX_LENGTH = 100;

// Function to compare two strings based on first character
bool compareFirstChar(const char* a, const char* b) {
    return a[0] < b[0];
}

int main() {
    char* words[MAX_WORDS];
   
    // Allocate memory for each word
    for (int i = 0; i < MAX_WORDS; i++) {
        words[i] = new char[MAX_LENGTH];
    }
   
    cout << "Enter five words:" << endl;
   
    // Read five words from user
    for (int i = 0; i < MAX_WORDS; i++) {
        cout << "Word " << (i + 1) << ": ";
        cin >> words[i];
    }
   
    // Sort the words based on first character
    sort(words, words + MAX_WORDS, compareFirstChar);
   
    // Calculate total length needed for result (including spaces)
    int totalLength = 0;
    for (int i = 0; i < MAX_WORDS; i++) {
        totalLength += strlen(words[i]);
    }
    totalLength += MAX_WORDS - 1; // Add space for spaces between words
   
    // Concatenate the sorted words with spaces
    char* result = new char[totalLength + 1];
    result[0] = '\0'; // Initialize as empty string
   
    for (int i = 0; i < MAX_WORDS; i++) {
        strcat(result, words[i]);
        if (i < MAX_WORDS - 1) { // Add space after each word except the last one
            strcat(result, " ");
        }
    }
   
    // Display the result
    cout << "\nConcatenated string in alphabetical order: " << result << endl;
   
    // Clean up memory
    for (int i = 0; i < MAX_WORDS; i++) {
        delete[] words[i];
    }
    delete[] result;
   
    return 0;
}


}












