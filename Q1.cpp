/* Write a program that allows users to enter five words (in the form of c-type strings) and concatenates these words in an alphabetical order 
   with the first character of each word determining the order. For example, if there is a word “africa” and another word “europe”; africa would come before europe in the concatenated string.*/

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX_WORDS = 5;
const int MAX_LENGTH = 100;


bool compareFirstChar(const char* a, const char* b) {
    return a[0] < b[0];
}

int main() {
    char* words[MAX_WORDS];
   
 
    for (int i = 0; i < MAX_WORDS; i++) {
        words[i] = new char[MAX_LENGTH];
    }
   
    cout << "Enter five words:" << endl;
   
 
    for (int i = 0; i < MAX_WORDS; i++) {
        cout << "Word " << (i + 1) << ": ";
        cin >> words[i];
    }
   
 
    sort(words, words + MAX_WORDS, compareFirstChar);
   
   
    int totalLength = 0;
    for (int i = 0; i < MAX_WORDS; i++) {
        totalLength += strlen(words[i]);
    }
    totalLength += MAX_WORDS - 1;
   
   
    char* result = new char[totalLength + 1];
    result[0] = '\0';
   
    for (int i = 0; i < MAX_WORDS; i++) {
        strcat(result, words[i]);
        if (i < MAX_WORDS - 1) {
            strcat(result, " ");
        }
    }
   
 
    cout << "\nConcatenated string in alphabetical order: " << result << endl;
   
   
    for (int i = 0; i < MAX_WORDS; i++) {
        delete[] words[i];
    }
    delete[] result;
   
    return 0;
}
