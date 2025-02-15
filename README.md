# C++ Programming Repository.
Welcome to the C++ Programming Repository! This repository contains a collection of C++ programs that cover both fundamental and advanced topics in C++. Whether you're a beginner looking to learn the basics or an intermediate learner looking for practical examples, this repository can assist.
## Table of Contents

1. [Lab 1: Basics of C++](#lab-1-basics-of-c++)
2. [Lab 2: Functions, Pointers, and References](#lab-2-functions-pointers-and-references)
3. [Lab 3: Classes and Objects](#lab-3-classes-and-objects)
4. [Lab 4: Constructors and Destructors](#lab-4-constructors-and-destructors)
5. [Lab 5: Operator Overloading](#lab-5-operator-overloading)
6. [Lab 6: Advanced Operator Overloading](#lab-6-advanced-operator-overloading)
7. [Lab 7: Data Conversion](#lab-7-data-conversion)
8. [Lab 8: Inheritance](#lab-8-inheritance)
9. [Lab 9: Polymorphism and Virtual Functions](#lab-9-polymorphism-and-virtual-functions)
10. [Lab 10: Templates and Exception Handling](#lab-10-templates-and-exception-handling)
11. [Lab 11: File Handling](#lab-11-file-handling)
12. [Lab 12: Binary File Operations](#lab-12-binary-file-operations)

---

## Lab 1: Basics 🎯
**Concepts Covered**: Hello World, Variables, Control Structures, Scope Resolution

### 1. Hello World
```cpp
#include<iostream>
using namespace std;
int main() {
    cout << "Hello World!";
    return 0;
}
``` 
Description: this first C++ program! Prints "Hello World!" to the console.

2. Maximum of 5 Numbers
Description: Finds the largest number among five user inputs using conditional statements.

3. Geometric Calculator
Question: Calculate the area and perimeter of a circle, rectangle, and square.
Quesion: Code calculatesthe  area/circumference of shapes using user inputs.
4. Student Record Formatter
Description: Stores and displays names/addresses of two students with formatted output.

5. Even/Odd Checker
Description: Determines if a number is even or odd using the modulus operator %.
---

## Lab 2: Functions, Pointers, and References

This lab explores advanced function concepts and memory management.

1. **Dynamic Memory Allocation (DMA)**

   - Learn to use `new` and `delete` operators for memory management.

2. **Pass by Reference**

   - Demonstrates passing variables by reference to functions.

3. **Return by Reference**

   - Uses references to return values from functions.

4. **Inline Functions**

   - Shows how to define and use inline functions for efficiency.

5. **Default Arguments in Functions**

   - Demonstrates the use of default values in function parameters.

6. **Namespaces and Using Directives**

   - Introduces namespaces to avoid name conflicts.

7. **Const Arguments**

   - Shows how to use constant arguments to ensure immutability.

8. **Function Overloading**

   - Demonstrates how to use the same function name for different parameter lists.

9. **Pointers**

   - Covers the basics of pointers and their operations.

10. **Pointers and Arrays**

    - Explains the relationship between pointers and arrays.

---

## Lab 3: Classes and Objects

This lab focuses on Object-Oriented Programming (OOP) concepts.

1. **Rectangle Class**

   - Defines a `Rectangle` class with length and width and calculates the area.

2. **Student Class**

   - Includes methods to set and get student details and calculate average marks.

3. **Bank Account Class**

   - Implements a basic banking system with deposit, withdrawal, and balance check functionalities.

4. **Coordinate Addition**

   - Demonstrates the addition of two coordinate objects.

5. **Nested Member Functions**

   - Explains the concept of nested functions within a class.

6. **Time Class**

   - Performs operations like addition of time using various passing mechanisms (value, reference, address).

---

## Lab 4: Constructors and Destructors

1. **Largest Number with Default Constructor**

   - Finds the largest number using a default constructor.

2. **Armstrong Number Check**

   - Verifies if a number is an Armstrong number using a default constructor.

3. **Rectangle Area Calculation**

   - Calculates the area of a rectangle with a constructor defined outside the class.

4. **Parameterized Constructor Examples**

   - Various programs to demonstrate parameterized constructors.

5. **Copy Constructor and Destructor**

   - Examples of copy constructors and destructors.

---

## Lab 5: Operator Overloading

1. **Overloading Increment Operators**

   - Implements pre- and post-increment for an `Time` object.

2. **Matrix Addition and Multiplication**

   - Overloads `+` and `*` operators for matrix operations.

---

## Lab 6: Advanced Operator Overloading

1. **Binary Operator Overloading**

   - Adds two objects using overloaded binary operators.

2. **String Concatenation**

   - Concatenates strings using operator overloading.

3. **Relational Operator Overloading**

   - Demonstrates overloading comparison operators.

4. **Stream Operator Overloading**

   - Implements `<<` and `>>` for custom I/O operations.

---

## Lab 7: Data Conversion

1. **Basic to User-Defined Type**
2. **User-Defined to Basic Type**
3. **User-Defined to User-Defined Type**

---

## Lab 8: Inheritance

1. **Single Inheritance**
2. **Constructor in Base Class**
3. **Multiple Inheritance**
4. **Constructor in Multiple Inheritance**

---

## Lab 9: Polymorphism and Virtual Functions

1. **Virtual Functions**
2. **Pure Virtual Functions**
3. **Virtual Destructors**
4. **Virtual Base Class**

---

## Lab 10: Templates and Exception Handling

1. **Function Templates**
2. **Class Templates**
3. **Basic Exception Handling**
4. **Exception Classes**

---

## Lab 11: File Handling

1. **Write to Disk File**
2. **Read from Disk File**
3. \*\*File I/O with \*\***`fstream`**

---

## Lab 12: Binary File Operations

1. **Write and Read Variables in Binary Mode**
2. **Write and Read Objects in Binary Files**

---

## How to Use This Repository

1. Clone the repository:
   ```bash
   git clone https://github.com/Madhav-Paudel/Cplusplus-_programming.git
   ```
2. Navigate to the desired lab folder.
3. Explore the examples and practice the concepts.

---


## 🌟 Best Practices

1. Each example follows modern C++ conventions
2. Code is thoroughly commented
3. Error handling is implemented
4. Memory management is properly handled
5. Object-oriented principles are followed

## 🔍 Troubleshooting

Common issues and solutions:
- Compiler errors: Make sure you're using C++17 or later
- Memory leaks: Use smart pointers where possible
- Build errors: Check for missing dependencies
- Runtime errors: Enable debug mode for detailed error messages

## 👏 Acknowledgments
- Modern C++ community
- Contributors to this repository
- C++ Standard Committee for language features

---
## 🔧 Prerequisites
- C++ compiler (g++ recommended)
- C++17 or later
- Basic understanding of programming concepts
- Code editor (VS Code, CLion, etc.)

## 📁 Repository Structure
```
Cplusplus-_programming/
├── Lab1/
│   ├── hello_world.cpp
│   ├── calculator.cpp
│   └── geometric.cpp
├── Lab2/
│   ├── functions/
│   └── pointers/
├── Lab3/
│   ├── classes/
│   └── objects/
└── ...
```

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

Created by [Madhav Paudel](https://github.com/Madhav-Paudel) - Feel free to connect!







