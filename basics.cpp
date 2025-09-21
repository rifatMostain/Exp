#include <bits/stdc++.h>
using namespace std;

// Function to demonstrate basic data types
void dataTypes() {
    cout << "\n=== Basic Data Types ===" << endl;
    
    // Integer types
    int age = 25;
    long long bigNumber = 1000000000LL;
    
    // Floating point types
    float pi = 3.14f;
    double precisePi = 3.141592653589793;
    
    // Character and string
    char grade = 'A';
    string name = "John Doe";
    
    // Boolean
    bool isStudent = true;
    
    cout << "Age: " << age << endl;
    cout << "Big Number: " << bigNumber << endl;
    cout << "Pi (float): " << pi << endl;
    cout << "Pi (double): " << precisePi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Name: " << name << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;
}

// Function to demonstrate control structures
void controlStructures() {
    cout << "\n=== Control Structures ===" << endl;
    
    // If-else statement
    int number = 15;
    if (number > 10) {
        cout << number << " is greater than 10" << endl;
    } else {
        cout << number << " is not greater than 10" << endl;
    }
    
    // For loop
    cout << "Numbers 1 to 5: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // While loop
    cout << "Countdown: ";
    int count = 5;
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << "Go!" << endl;
    
    // Switch statement
    char choice = 'B';
    switch (choice) {
        case 'A':
            cout << "You chose A" << endl;
            break;
        case 'B':
            cout << "You chose B" << endl;
            break;
        default:
            cout << "Unknown choice" << endl;
    }
}

// Function to demonstrate arrays and vectors
void arraysAndVectors() {
    cout << "\n=== Arrays and Vectors ===" << endl;
    
    // Static array
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Vector (dynamic array)
    vector<int> dynamicArray = {10, 20, 30, 40, 50};
    cout << "Vector elements: ";
    for (int num : dynamicArray) {
        cout << num << " ";
    }
    cout << endl;
    
    // Vector operations
    dynamicArray.push_back(60);
    cout << "After adding 60: ";
    for (int num : dynamicArray) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Vector size: " << dynamicArray.size() << endl;
}

// Function to demonstrate basic algorithms
void basicAlgorithms() {
    cout << "\n=== Basic Algorithms ===" << endl;
    
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    // Bubble sort
    vector<int> sortedArr = arr;
    int n = sortedArr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (sortedArr[j] > sortedArr[j + 1]) {
                swap(sortedArr[j], sortedArr[j + 1]);
            }
        }
    }
    
    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;
    
    // Linear search
    int target = 25;
    int position = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            position = i;
            break;
        }
    }
    
    if (position != -1) {
        cout << "Found " << target << " at position " << position << endl;
    } else {
        cout << target << " not found in array" << endl;
    }
}

// Function to demonstrate basic input/output
void inputOutput() {
    cout << "\n=== Input/Output Example ===" << endl;
    cout << "This demonstrates basic I/O operations" << endl;
    cout << "In a real program, you could use cin to get user input:" << endl;
    cout << "Example: cin >> variable;" << endl;
    
    // Simulated input example
    cout << "Simulating user input of name 'Alice' and age 20:" << endl;
    string userName = "Alice";
    int userAge = 20;
    cout << "Hello " << userName << ", you are " << userAge << " years old!" << endl;
}

// Function to calculate factorial (recursive example)
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function to demonstrate recursion
void recursionExample() {
    cout << "\n=== Recursion Example ===" << endl;
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
}

// Main function
int main() {
    cout << "=== C++ Programming Basics ===" << endl;
    cout << "This file demonstrates fundamental programming concepts" << endl;
    
    dataTypes();
    controlStructures();
    arraysAndVectors();
    basicAlgorithms();
    inputOutput();
    recursionExample();
    
    cout << "\n=== Program completed successfully! ===" << endl;
    return 0;
}