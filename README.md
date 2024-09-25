## Welcome to basic cpp/c++ programming 🧑‍💻

## 1️⃣ Basic Structure of a C++/cpp Program.

- A simple C++ program consists of at least one main() function, which is the entry point of the program.
```
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    return 0;
```
## 2️⃣ Data Types
- C++ supports several built-in data types, including:
```
int: Integer
float: Floating point number
double: Double precision floating point number
char: Character
bool: Boolean
```
```
int myInt = 10;
float myFloat = 3.14;
double myDouble = 2.71828;
char myChar = 'A';
bool myBool = true;    
```
## 3️⃣ Variables and Constants
- Variables store data that can be modified later in the program, while constants hold data that cannot be changed.

int variable = 10;
const int constant = 100;

## 4️⃣ Operators
- C++ includes a variety of operators, such as:
Binary operator:In binary operator, there is only use of one operand. 
```
Arithmetic: +, -, *, /, %
Comparison: ==, !=, <, >, <=, >=
Logical: &&, ||, !
Assignment: =, +=, -=, *=, /=, %=
```
## 5️⃣ Control Structures
- C++ has several control structures for decision making and loops:

if-else:

if (condition) {
    // code to execute if condition is true
} else {
    // code to execute if condition is false
}
switch:

switch (expression) {
    case constant1:
        // code to execute if expression equals constant1
        break;
    case constant2:
        // code to execute if expression equals constant2
        break;
    default:
        // code to execute if expression doesn't match any constant
}
for loop:

for (int i = 0; i < 10; i++) {
    // code to execute in the loop
}
while loop:

while (condition) {
    // code to execute while condition is true
}
do-while loop:

do {
    // code to execute at least once
} while (condition);

## 6️⃣ Functions
- Functions are blocks of code that perform a specific task and can be reused.
```
int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 3);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
```
## 7️⃣ Arrays
- Arrays are collections of elements of the same type stored in contiguous memory locations.

code:
int myArray[5] = {1, 2, 3, 4, 5};

## 8️⃣ Pointers
- Pointers store the memory address of another variable.

code:
```
int var = 10;
int* ptr = &var; // ptr holds the address of var
```

## 9️⃣ Classes and Objects
- C++ is an object-oriented programming language that allows you to define classes.

code:
```
class MyClass {
public:
    int myNumber;
    void myFunction() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    MyClass obj; // Create an object of MyClass
    obj.myNumber = 15;
    obj.myFunction();
    return 0;
}
```
## 🔟 Standard Library
- C++ has a rich standard library that provides various functionalities, including input/output operations, string manipulations, and data structures.

iostream: for input/output stream
vector: dynamic array
string: string manipulation

code:
```
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::string str = "Hello, World!";
    
    std::cout << str << std::endl;
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
```
#### This is just an introduction to the basics of C++. There's much more to learn, such as advanced data structures, algorithms, templates, and more. If you have any specific questions or need further explanation on any topic, feel free to ask!

<!--end of basics of cpp programming-->

### By understanding these basics, you can start writing your own code and build a foundation for learning more advanced programming concepts.

## Armstrong Number:

- An Armstrong number (also known as a narcissistic number, pluperfect number, or pluperfect digital invariant) is a number that is equal to the sum of its own digits raised to the power of the number of digits. 
## Example:
```
153 is an Armstrong number: 
9474 is an Armstrong number: 
123 is an Not an Armstrong number: 
370 is an Armstrong number:
```

### Explanation:
```
9474: 9^4 + 4^4 + 7^4 + 4^4 = 9474 Armstrong Number;
123: 1^3 + 2^3 + 3^3 = 36 Not a Armstrong Number;
370: 3^3 + 7^3 + 0^3 = 370 Armstrong Number 
```
## Palindrome Number:

- A palindrome is a word, number, phrase, or other sequence of characters that reads the same backward as forward (ignoring spaces, punctuation, and capitalization). The term originates from the Greek words "palin," meaning "again," and "dromos," meaning "way" or "direction."


### Here are a few examples of palindrome numbers:

Single-Digit Numbers: Every single-digit number is a palindrome since it reads the same forward and backward. Examples: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9.

Two-Digit Palindrome Numbers:
```
11
22
33
44
55
```

Three-Digit Palindrome Numbers:
```
101
121
131
141
151
```

Four-Digit Palindrome Numbers:
```
1001
1111
1221
1331
1441
```
Five-Digit Palindrome Numbers:
```
10001
10101
10201
10301
10401
```
These numbers all read the same backward and forward, which is the defining characteristic of a palindrome number.

## Fabonacci Series
- The Fibonacci series (or Fibonacci sequence) is a series of numbers in which each number (after the first two) is the sum of the two preceding ones, usually starting with 0 and 1. This sequence was introduced to the Western world by the Italian mathematician Leonardo of Pisa, also known as Fibonacci.

### How to Generate the Fibonacci Sequence:

Start with the first two numbers: Typically 0 and 1.
Add the two most recent numbers to get the next number in the sequence.
Repeat the process to generate as many terms as needed.

The sequence begins as follows:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

In general, the Fibonacci sequence is defined by the recurrence relation:
𝐹(𝑛)=𝐹(𝑛−1)+𝐹(𝑛−2)

## Tribonacci Series

- The Tribonacci series is similar to the Fibonacci series, but instead of each number being the sum of the two preceding ones, each number in the Tribonacci series is the sum of the three preceding numbers.

### How to Generate the Tribonacci Sequence:

Start with the first three numbers: Typically 0,1 and 2.
Add the three most recent numbers to get the next number in the sequence.
Repeat the process to generate as many terms as needed.

The sequence begins as follows:
0, 1, 2, 3, 6, 11, 20, 37 ...
