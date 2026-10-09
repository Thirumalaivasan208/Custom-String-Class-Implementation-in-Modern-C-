# Custom String Class Implementation in Modern C++

## Project Overview
This mini project demonstrates how to implement a **custom string class** in Modern C++ with features like constructors, operator overloading, and memory management.  
It is designed for learning **OOP concepts** and practicing **deep copy vs shallow copy**.
---
## Features
- **Default Constructor** – Initializes empty string.
- **Parameterized Constructor** – Initializes with given C‑style string.
- **Copy Constructor** – Creates deep copy of another object.
- **Destructor** – Releases allocated memory.
- **Operator Overloading** – `=`, `+`, `==` implemented.
- **Display Function** – Prints string to console.


## File Structure
├── main.cpp        # Entry point
├── header.h      # Class declaration
├── string.cpp    # Class implementation
└── README.md       # Documentation

## How to Compile & Run
g++ main.cpp MyString.cpp -o mystring
./mystring

Expected Output:

Hello
World
HelloWorld
Strings are not equal

##  Learning Outcomes
- Understand **dynamic memory allocation** in C++.
- Practice **OOP principles** (Encapsulation, Copy semantics).
- Gain confidence in **operator overloading**.
