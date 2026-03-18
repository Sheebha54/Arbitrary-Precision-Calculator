# 🧮 Arbitrary Precision Calculator (APC)

A modular Arbitrary Precision Calculator implemented in C using Doubly Linked List data structures.

---

## 📌 Overview

The Arbitrary Precision Calculator (APC) performs arithmetic operations on very large numbers that exceed the limits of standard C data types.

Instead of using built-in integer types, numbers are stored digit-by-digit using a Doubly Linked List, enabling calculations on integers of virtually unlimited size.

This project demonstrates strong understanding of data structures, pointer manipulation, and modular programming in C.

---

## 🚀 Features

- Addition of large numbers  
- Subtraction of large numbers  
- Multiplication of large numbers  
- Division of large numbers  
- Doubly Linked List implementation  
- Modular file structure  
- Menu-driven command-line interface  

---

## 🧠 Core Concepts Implemented

### Doubly Linked List
- Dynamic memory allocation using `malloc()`
- Node insertion (beginning & end)
- Forward and backward traversal
- Pointer manipulation

### Arbitrary Precision Arithmetic
- Numbers stored digit-by-digit in linked list
- Manual carry and borrow handling
- Operations performed like real arithmetic

### Modular Programming
- Each operation implemented in separate `.c` file

---

## 🛠️ Tech Stack

- Language: C  
- Data Structure: Doubly Linked List  
- Compiler: GCC  
- Platform: Linux / Windows  

---

## 📁 Project Structure

```
APC-Data-Structure
│
├── main.c
├── dll.h
├── insert_first.c
├── insert_last.c
├── printlist.c
├── addition.c
├── subtraction.c
├── multiplication.c
├── division.c
└── README.md
```

---

## ⚙️ How to Compile and Run

Compile:
```bash
gcc main.c insert_first.c insert_last.c printlist.c addition.c subtraction.c multiplication.c division.c
```

Run:
```bash
./a.out
```

---

## 📊 Sample Operations

- 123456789123456789 + 987654321987654321  
- 9999999999999999 - 123456789  
- Large number multiplication  
- Large number division  

---

## 🎯 Learning Outcomes

- Deep understanding of Doubly Linked Lists  
- Manual implementation of arithmetic algorithms  
- Memory management in C  
- Pointer-based data manipulation  
- Modular project design  

---

## 👩‍💻 Author
Sheebha
