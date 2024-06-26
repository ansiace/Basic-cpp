## Welcome to basic cpp 
This repository contains the basic c++ programming for logic building. here this rpository contains the array problems,here w'll cover from basic to advanced array problems.

## Basic about array
### Static Array
A static array has a fixed size that is determined at compile time

#include <iostream>
using namespace std;

int main() {
    // Creating a static array
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing elements
    cout << "First element: " << arr[0] << endl;  // Output: 1

    // Modifying elements
    arr[1] = 10;

    // Printing the array
    cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";  // Output: 1 10 3 4 5
    }
    cout << endl;

    return 0;
}


## 2D Array Library
### Overview
This 2D Array Library provides utilities for creating, manipulating, and performing operations on 2-dimensional arrays in c++. It is designed to be easy to use and efficient, offering a range of functionalities commonly needed when working with 2D arrays.

Features
Create 2D arrays with specified dimensions and initial values
Access and modify elements
Perform basic operations (addition, subtraction, multiplication)
Transpose arrays
Find the maximum, minimum, and sum of elements

## Palindrome
A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization). For example, "radar" , "madam" , 121 , 1441 are palindromes.
To check if a given palindrome, you typically follow these steps:

1.Normalize the Input:
2.Reverse the given number or string:
3.Compare the Normalized String with its Reversed Version: 
