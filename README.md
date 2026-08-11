# 🎧 Queue-Based Customer Support System

A C++ command-line application that simulates a customer support system using the **Queue Abstract Data Type (ADT)** and the **First-In, First-Out (FIFO)** principle.

The project demonstrates how fundamental data structures can be applied to a real-world service system while considering algorithmic efficiency, scalability, and input validation.

## 📌 Project Overview

Customers submit support inquiries and are placed into a waiting queue. Requests are processed strictly in the order they were received.

The system uses the C++ Standard Template Library's `std::queue` to implement FIFO behavior.

### Queue Operation Mapping

| Queue Operation | Application Function |
| --------------- | -------------------- |
| Enqueue         | Submit New Inquiry   |
| Dequeue         | Serve Next Customer  |
| Get Front       | Check Next Customer  |

## ✨ Features

* 📝 Submit customer inquiries
* 🎧 Serve the next customer
* 👀 Check the next customer
* 📋 Display queue status
* 🔄 FIFO processing
* ✅ Input validation
* 💻 Menu-driven interface
* ⚡ O(1) enqueue and dequeue operations
* 📈 Performance analysis

## 🧠 Data Structure

The core data structure is:

```cpp
std::queue<std::string>
```

A queue follows the **First-In, First-Out** principle, meaning the first inquiry submitted is the first inquiry served.

## ⚙️ Core Operations

### Submit New Inquiry

Adds a customer inquiry to the rear of the queue.

**Time Complexity:** `O(1)`

### Serve Next Customer

Retrieves and removes the inquiry at the front.

**Time Complexity:** `O(1)`

### Check Next Customer

Inspects the front element without removing it.

**Time Complexity:** `O(1)`

### Display Queue

Displays the current queue by iterating through a temporary copy.

**Time Complexity:** `O(N)`

## 📊 Complexity Analysis

| Operation | Queue | Array-Based Approach |
| --------- | ----: | -------------------: |
| Enqueue   |  O(1) |                 O(1) |
| Dequeue   |  O(1) |                 O(N) |
| Get Front |  O(1) |                 O(1) |
| Space     |  O(N) |                 O(N) |

For N sequential operations:

* Optimized queue: **O(N)**
* Array-based approach: **O(N²)**

This demonstrates the importance of selecting an appropriate data structure for scalable systems.

## 🧪 Testing & Results

Testing confirmed that:

* Customers were served in submission order.
* The front always represented the earliest waiting customer.
* Dequeue operations removed only the oldest request.
* No requests were skipped or reordered.
* The system remained stable when processing 10,000+ inquiries.

## 🛡️ Input Validation

The application:

* Rejects empty inquiries
* Validates menu selections
* Provides feedback for invalid input
* Prevents invalid data from entering the queue

## 🛠️ Technologies Used

* C++
* STL `std::queue`
* Standard C++ libraries
* Command-Line Interface

## 🔮 Future Improvements

* Priority queue support
* Customer service analytics
* GUI interface
* Multi-agent customer support

## 🎓 Academic Project

**Course:** CSE261 — Algorithms and Data Structure
**University:** MSA University
**Department:** Computer Systems Engineering

## 👥 Team

* Marina Ayman
* Gamila Hasan
* Mariam Mohamed Reyad
