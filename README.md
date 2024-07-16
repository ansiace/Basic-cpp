## Welcome to basic cpp programming 🧑‍💻

## 1️⃣ Basic Structure of a C++ Program.

A simple C++ program consists of at least one main() function, which is the entry point of the program.

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;

## 2️⃣ Data Types
C++ supports several built-in data types, including:

int: Integer
float: Floating point number
double: Double precision floating point number
char: Character
bool: Boolean

int myInt = 10;
float myFloat = 3.14;
double myDouble = 2.71828;
char myChar = 'A';
bool myBool = true;    

## 3️⃣ Variables and Constants
Variables store data that can be modified later in the program, while constants hold data that cannot be changed.

int variable = 10;
const int constant = 100;

## 4️⃣ Operators
C++ includes a variety of operators, such as:

Arithmetic: +, -, *, /, %
Comparison: ==, !=, <, >, <=, >=
Logical: &&, ||, !
Assignment: =, +=, -=, *=, /=, %=

## 5️⃣ Control Structures
C++ has several control structures for decision making and loops:

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
Functions are blocks of code that perform a specific task and can be reused.

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 3);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

## 7️⃣ Arrays
Arrays are collections of elements of the same type stored in contiguous memory locations.

code:
int myArray[5] = {1, 2, 3, 4, 5};

## 8️⃣ Pointers
Pointers store the memory address of another variable.

code:
int var = 10;
int* ptr = &var; // ptr holds the address of var


## 9️⃣ Classes and Objects
C++ is an object-oriented programming language that allows you to define classes.

code:
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

## 🔟 Standard Library
C++ has a rich standard library that provides various functionalities, including input/output operations, string manipulations, and data structures.

iostream: for input/output stream
vector: dynamic array
string: string manipulation

code:
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

#### This is just an introduction to the basics of C++. There's much more to learn, such as advanced data structures, algorithms, templates, and more. If you have any specific questions or need further explanation on any topic, feel free to ask!

<!--end of basics of c++-->
    

Here we'll start solving questions from basic to advanced level in cpp. From now will upload minimum 5 questions daily to improve our problem solving skills.It includes simple programs or scripts that demonstrate fundamental concepts like variables, control structures (loops and conditionals), functions, and basic input/output operations. Writing basic code is essential for beginners to understand programming logic, syntax, and problem-solving techniques.


### By understanding these basics, you can start writing your own code and build a foundation for learning more advanced programming concepts.


## Armstrong Number:

An Armstrong number (also known as a narcissistic number, pluperfect number, or pluperfect digital invariant) is a number that is equal to the sum of its own digits raised to the power of the number of digits.

## Explanation:

9474:
9^
4
+4^ 
4
+7 ^
4
+4 ^
4
 = 9474 Armstrong Number;
 
123: 
1^
3
+
2^
3
+
3^
3
= 36 Not a Armstrong Number;

370: 
3^
3
+
7^
3
+
0^
3
=370 Armstrong Number

153 is an Armstrong number: 
9474 is an Armstrong number: 
123 is an Not an Armstrong number: 
370 is an Armstrong number:

