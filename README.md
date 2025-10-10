[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/oM4HKcQz)
# Assignment_Number_7

Q1. Write a program that allows users to enter five words (in the form of c-type strings) and concatenates these words in an alphabetical order with the first character of each word determining the order. For example, if there is a word “africa” and another word “europe”; africa would come before europe in the concatenated string.

TEST CASES: 

(1)

Enter 5 words:

Word 1: apple

Word 2: grapes

Word 3: kiwi

Word 4: cherry

Word 5: papaya

Concatenated string (alphabetical by first letter):
apple cherry grapes kiwi papaya

(2) 

Enter 5 words:

Word 1: bat

Word 2: chess

Word 3: racket

Word 4: basketball

Word 5: golf

Concatenated string (alphabetical by first letter):
bat basketball chess golf racket
   
Q2. Write a program that searches for the largest three numbers in an array randomly populated by a user.

TEST CASES: 

(1)

Enter the number of elements in the array: 3

Enter 3 numbers:

Element 1: 23

Element 2: 12

Element 3: 3

The three largest numbers are:

1st: 23

2nd: 12

3rd: 3

(2)

Enter the number of elements in the array: 5

Enter 5 numbers:

Element 1: 0

Element 2: 2

Element 3: 3

Element 4: 0

Element 5: 15

The three largest numbers are:

1st: 15

2nd: 3

3rd: 2
   
Q3. Write a function that takes an array an a parameter and modifies every element by multiplying it with the current values of elements before and after it. The element before the first element is considered to be a 1; similarly the element after the last element is also considered a 1. The first is first multiplied, the second element is subsequently multiplied by the new value of the first element and the third element, and so on.

TEST CASES: 

(1)

Enter the number of elements: 3

Enter 3 elements:

23

2

3

Modified array:
46 276 828 

(2)

Enter the number of elements: 5

Enter 5 elements:

3

4

1

5

2

Modified array:
12 48 240 2400 4800 

Q4. Write a function that finds that first element that repeats itself in an array.

TEST CASES: 

(1)

Enter the number of elements: 3

Enter 3 elements:

12

3

24

No repeating elements found.

(2)

Enter the number of elements: 5

Enter 5 elements:

2

4

5

4

1

The first repeating element is: 4

