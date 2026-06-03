# AlgoLib – Modular Sorting and Searching Library in C

## Overview

AlgoLib is a modular static library implemented in C that provides classic sorting and searching algorithms. The project demonstrates structured software design using separate source and header files, static library creation, object file management, and Makefile-based build automation.

The primary objective of this project is to strengthen understanding of data structures and algorithms while applying practical concepts such as compilation, linking, and modular programming in C.

---

## Objectives

- Implement fundamental sorting and searching algorithms
- Organize code using modular design principles
- Create and link a static library (.a)
- Automate compilation using Makefile
- Analyze and compare algorithm performance

---

## Algorithms Implemented

### Sorting Algorithms
- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort

### Searching Algorithms
- Linear Search
- Binary Search

---

## Time Complexity Analysis

| Algorithm        | Best Case     | Average Case   | Worst Case     |
|------------------|--------------|--------------|--------------|
| Bubble Sort      | O(n)        | O(n^2)       | O(n^2)       |
| Selection Sort   | O(n^2)      | O(n^2)       | O(n^2)       |
| Insertion Sort   | O(n)        | O(n^2)       | O(n^2)       |
| Merge Sort       | O(n log n)  | O(n log n)   | O(n log n)   |
| Quick Sort       | O(n log n)  | O(n log n)   | O(n^2)       |
| Linear Search    | O(1)        | O(n)         | O(n)         |
| Binary Search    | O(1)        | O(log n)     | O(log n)     |

---

## Project Structure

AlgoLib/
│
├── Build/
│   ├── libalgolib.a
│   ├── searching.o
│   ├── sorting.o
│   └── test_program.exe
│
├── include/
│   └── algorithm.h
│
├── src/
│   ├── searching.c
│   └── sorting.c
│
├── test.c
└── Makefile

- src/ contains algorithm implementations  
- include/ contains header declarations  
- Build/ contains compiled object files and static libraries  
- test.c is the driver program  
- Makefile automates compilation and linking  

---

## Build Instructions

Ensure GCC and Make are installed.

### Compile the project

make

### Run the program

./test_program

### Clean compiled files

make clean

---

## Key Concepts Demonstrated

- Modular programming in C
- Static library creation using ar
- Object file compilation and linking
- Header file abstraction
- Structured project organization
- Runtime measurement using clock()
- Algorithm correctness validation

---

## Tools and Technologies

- Language: C
- Compiler: GCC
- Build System: Make
- Static Library Tool: ar
- Operating System: Windows / Linux

---

## Learning Outcomes

Through this project, the following concepts were strengthened:

- Implementation of core sorting and searching algorithms
- Understanding compilation stages (preprocessing, compilation, linking)
- Creation and usage of reusable static libraries
- Managing multi-file C projects
- Evaluating algorithm efficiency through runtime analysis

---

## Future Enhancements

- Add comparison counters for empirical complexity evaluation
- Export benchmark results to CSV
- Convert to shared library (.so)
- Integrate automated unit testing
- Implement generic sorting using void pointers

---

## Author

Subhashree Subhasmita  
B.Tech – Computer Science and Engineering  
Institute of Technical Education and Research(ITER),SOA University
