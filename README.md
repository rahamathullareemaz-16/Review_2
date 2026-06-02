Data Structures and C Programming Programs

## Overview

This repository contains C programs developed as part of the HCL 2 laboratory course. The programs cover fundamental concepts of Data Structures, Dynamic Memory Allocation, File Handling, Command Line Arguments, String Processing, Mathematics Library Functions, and Basic Debugging Techniques.

---

## Programs Included

### Data Structures

### 1. Linear Search

* Search for a target element in an array.
* Returns the position of the element if found.

**File:** `1_linear_search.c`

---

### 2. Quick Sort

* Sort an array using the Quick Sort algorithm.
* Uses divide and conquer technique.

**File:** `2_quick_sort.c`

---

### 3. Balanced Parentheses Using Stack

* Checks whether brackets are balanced.
* Supports (), {}, and [].

**File:** `3_balanced_parentheses_stack.c`

---

### 4. Queue Using Two Stacks

* Implements queue operations using two stacks.
* Demonstrates FIFO behavior.

**File:** `5_queue_using_stacks.c`

---

### 5. Binary Search Tree Operations

* Insert nodes
* Search nodes
* Inorder traversal

**File:** `6_bst_operations.c`

---

### 6. Music Playlist Using Circular Linked List

* Add songs
* Traverse playlist continuously
* Demonstrates circular linked list implementation

**File:** `8_music_playlist_cll.c`

---

## C Programming Concepts

### 7. Dynamic Arithmetic Operations

* Sum
* Average
* Maximum
* Minimum
* Uses dynamic memory allocation

**File:** `dynamic_arithmetic.c`

---

### 8. String Length Using Command Line Arguments

* Reads string from command line.
* Displays string length.

**File:** `string_length.c`

---

### 9. Input Validation Parser

* Validates user input.
* Checks valid range conditions.

**File:** `input_parser.c`

---

### 10. Logging Macros

* Demonstrates custom logging macros.
* Uses:

  * `__FILE__`
  * `__LINE__`
  * `__func__`

**File:** `logging_macros.c`

---

### 11. Segmentation Fault Demonstration

* Demonstrates invalid memory access.
* Useful for debugging practice using GDB.

**File:** `segfault_demo.c`

---

### 12. File Processing

* Reads file contents using `fgets()`.
* Processes input line by line.

**File:** `file_process.c`

---

### 13. ctype.h Demonstration

* Alphanumeric filtering
* Case conversion using standard library functions

**File:** `ctype_demo.c`

---

### 14. Statistics Using math.h

* Mean
* Variance
* Standard Deviation

**File:** `statistics.c`

---

## Compilation

Compile individual programs using GCC.

Example:

```bash
gcc 1_linear_search.c -o linear_search
./linear_search
```

Statistics program requires the math library:

```bash
gcc statistics.c -lm -o statistics
./statistics
```

---

## Technologies Used

* C Programming
* GCC Compiler
* Linux Environment
* Data Structures
* Standard C Libraries

---

## Learning Outcomes

* Arrays and Searching
* Sorting Algorithms
* Stack and Queue Implementation
* Binary Search Trees
* Circular Linked Lists
* Dynamic Memory Allocation
* File Handling
* Command Line Arguments
* Debugging Techniques
* Mathematical Computations

---

## Author

**H. Reemaz**

HCL 2 Laboratory Programs
