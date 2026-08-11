# 🎧 Queue-Based Customer Support System

A C++ command-line application that simulates a customer support system using the **Queue Abstract Data Type (ADT)** and the **First-In, First-Out (FIFO)** principle.

The project demonstrates how a fundamental data structure can be applied to a real-world service system while focusing on algorithmic efficiency, scalability, and robust user input handling.

## 📌 Project Overview

Customers submit support inquiries and are placed into a waiting queue. Requests are then processed strictly in the order they were received.

The project uses the C++ Standard Template Library's `std::queue` to implement the core FIFO behavior.

### Real-World Operation Mapping

| Queue Operation | Application Function |
| --------------- | -------------------- |
| Enqueue         | Submit New Inquiry   |
| Dequeue         | Serve Next Customer  |
| `getFront()`    | Check Next Up        |

This mapping connects the technical Queue ADT operations to realistic customer support actions.

## ✨ Features

* 📝 Submit new customer inquiries
* 🎧 Serve the next customer
* 👀 Check the next customer in line
* 📋 Display the current queue status
* 🔄 Strict FIFO processing
* ✅ Input validation and defensive programming
* 💻 Menu-driven command-line interface
* ⚡ Efficient O(1) enqueue and dequeue operations
* 📈 Performance analysis for large datasets

## 🛠️ Technologies Used

* **C++**
* **STL `std::queue`**
* Command-Line Interface (CLI)
* Standard C++ libraries

## 🧠 Data Structure

The core data structure is:

```cpp
std::queue<std::string>
```

A queue follows the **First-In, First-Out (FIFO)** principle. The first inquiry submitted is always the first inquiry served.

The project uses the STL queue because it provides constant-time operations for the core queue functionality.

## ⚙️ Core Operations

### 1. Submit New Inquiry

Adds a new customer inquiry to the rear of the queue.

**Time Complexity:** `O(1)`

### 2. Serve Next Customer

Retrieves and removes the inquiry at the front of the queue.

**Time Complexity:** `O(1)`

### 3. Check Next Up

Inspects the customer at the front without removing them.

**Time Complexity:** `O(1)`

### 4. Display Queue Status

Displays the current queue by iterating through a temporary copy of the queue.

**Time Complexity:** `O(N)`

Using a temporary copy allows the queue to be displayed without modifying the original data.

## 📊 Complexity Analysis

The project compares the optimized STL queue implementation with a hypothetical array-based implementation.

| Operation        | STL Queue | Array-Based Approach |
| ---------------- | --------: | -------------------: |
| Enqueue          |      O(1) |                 O(1) |
| Dequeue          |      O(1) |                 O(N) |
| Get Front        |      O(1) |                 O(1) |
| Space Complexity |      O(N) |                 O(N) |

An array-based implementation would require shifting elements after deletion, making repeated dequeue operations significantly less efficient.

For N sequential operations:

* **Optimized queue:** `O(N)`
* **Suboptimal array approach:** `O(N²)`

The analysis demonstrated why selecting the appropriate data structure is important when designing scalable systems.

## 🧪 Testing & Results

Testing confirmed that the system correctly maintains FIFO behavior:

* Every inquiry was served in the order it was submitted.
* The front of the queue always represented the earliest waiting customer.
* Dequeue operations removed only the oldest request.
* No requests were skipped, reordered, or overwritten.

Performance testing also showed that processing **10,000+ inquiries** remained fast and stable using the optimized queue implementation.

## 🛡️ Defensive Programming

Input validation was implemented to improve system reliability.

The application:

* Rejects empty inquiry submissions
* Validates menu selections
* Provides feedback for invalid actions
* Prevents invalid data from being added to the queue

These checks help prevent unexpected behavior and improve the overall user experience.

## 🖥️ User Interface

The project uses a structured command-line interface designed as a pseudo-GUI.

The interface provides:

* Numbered menu options
* Clear operation descriptions
* User-friendly customer support terminology
* Feedback for invalid input

This approach provides an intuitive interface without requiring external graphical libraries.

## 🚀 Getting Started

### Prerequisites

* A C++ compiler
* C++ Standard Library
* Visual Studio, VS Code, Code::Blocks, or another C++ IDE

### Running the Project

1. Clone or download this repository.
2. Open the C++ source file in your preferred IDE.
3. Compile the program using a C++ compiler.
4. Run the executable.
5. Use the numbered menu to submit and process customer inquiries.

## 📁 Project Structure

```text
Queue-Based-Customer-Support-System/
│
├── main.cpp
├── README.md
└── Project Report/
    └── Data Structure Project Report.pdf
```

> Adjust the file names above if your actual source files use different names.

## 🔮 Future Improvements

Possible extensions identified during the project include:

* Priority queue integration
* Customer service logging and analytics
* GUI-based interface
* Multi-agent customer service handling

These additions could extend the system beyond basic FIFO processing into a more realistic customer support platform.

## 👥 Team

* **Marina Ayman**
* **Gamila Hasan**
* **Mariam Mohamed Reyad**

## 🎓 Academic Project

**Course:** CSE261 — Algorithms and Data Structure
**University:** MSA University
**Department:** Computer Systems Engineering
**Instructor:** Dr. Ahmed Ayoub
**Date:** September 2025

## 📚 References

* Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein — *Introduction to Algorithms*
* Goodrich, M. T., Tamassia, R., & Goldwasser — *Data Structures and Algorithms in C++*
* Stroustrup, B. — *The C++ Programming Language*
* Josuttis, N. — *The C++ Standard Library*
* C++ Reference — `std::queue`
* Kleinrock, L. — *Queueing Systems, Volume I: Theory*
