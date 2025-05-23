CPP01
======

This repository contains the exercises and solutions for the **CPP Module 01** project from [42 School](https://www.42.fr/). The project builds upon the concepts introduced in **CPP Module 00**, focusing on more advanced foundational topics in C++ programming.

Project Overview
-----------------

The **CPP Module 01** is designed to deepen your understanding of C++ programming with topics such as:

- Memory allocation, initialization, and destruction.
- References and pointers.
- The distinction between value and reference semantics.
- Understanding and using the `this` keyword.
- Introduction to static variables and functions.
- Basics of the Orthodox Canonical Form.

Repository Structure
---------------------

This repository is organized as follows:
- **CPP01/**
  - `ex00/` - Exercise 00
  - `ex01/` - Exercise 01
  - `ex02/` - Exercise 02
  - `ex03/` - Exercise 03
  - `ex04/` - Exercise 04
  - `ex05/` - Exercise 05
  - `ex06/` - Exercise 06


 
Each exercise is self-contained and includes:

- A `main.cpp` file to test the implementation.
- Additional `.hpp` and `.cpp` files for the exercise requirements.
- A `Makefile` to compile the project.

Getting Started
----------------

### Prerequisites

- A working C++ compiler (e.g., `clang++` or `g++`).
- Basic understanding of C++ programming concepts.

### Compilation

Navigate to the exercise directory and run the `Makefile` to compile the program:

```sh
cd ex00
make
```

This will generate an executable file in the same directory.

To clean compiled files, use:
```sh
make clean
```

To clean all generated files, including executables, use:
```sh
make fclean
```

To recompile the project, use:
```sh
make re
```

Running the Program
-------------------

After compilation, run the executable:
```sh
./program_name
```
Replace **program_name** with the actual name of the executable generated by the **Makefile**.


Learning Objectives
-------------------
By completing this project, you will learn:

 - How to allocate, initialize, and destroy memory in C++.
 - The use of references and pointers for efficient data manipulation.
 - The difference between value and reference semantics.
 - How and when to use the this keyword in C++.
 - The purpose and implementation of static variables and functions.
 - Basics of the Orthodox Canonical Form in C++ classes.

Resources
-------------------
 - [C++ Documentation](https://cplusplus.com/)


License
-------------------
This project is licensed for educational purposes as part of the 42 curriculum.

