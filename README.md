# Two-Dimensional Array Using C Programming

## 📌 About the Project

This project demonstrates the use of **two-dimensional arrays in C programming** with applications relevant to **Electronics and Communication Engineering (ECE)**.

Two-dimensional arrays are commonly used to represent and process structured data such as sensor measurements, sampled signals, image pixels, communication data, and matrix-based calculations.

The project provides a simple foundation for understanding how matrix-like data can be stored, accessed, and processed using C.

## 🎯 Objectives

* Understand two-dimensional arrays in C.
* Learn row and column-based data storage.
* Practice nested loops and array traversal.
* Understand matrix representation in embedded C.
* Demonstrate how sensor or measurement data can be organized.
* Build a foundation for signal and image processing applications.

## ⚡ ECE Applications

Two-dimensional arrays have several applications in ECE, including:

### 1. Sensor Data Processing

Sensor measurements collected over multiple time intervals can be stored in a 2D array.

For example:

```text
Rows    → Different sensors
Columns → Different measurements
```

### 2. Image Processing

Digital images can be represented as a matrix where each element represents a pixel intensity.

```text
Pixel Matrix

100 120 140
110 130 150
120 140 160
```

### 3. Signal Processing

Sampled data from multiple channels can be organized using a two-dimensional array.

```text
Rows    → Signal channels
Columns → Samples
```

### 4. Embedded Systems

In embedded systems, structured sensor readings and measurement data can be stored and processed using arrays.

### 5. Communication Systems

Two-dimensional arrays can also be used for storing structured communication or packet data before processing.

## 🛠️ Technologies Used

* **Programming Language:** C
* **Domain:** Electronics and Communication Engineering
* **Compiler:** GCC
* **Concepts:** Arrays, nested loops, matrix processing, data organization

## 📂 Project Structure

```text
Two-dimensional-array-using-C-programming/
│
├── two_dimensional_array.c
└── README.md
```

## 💻 Program Description

The program accepts the number of rows and columns and allows the user to enter matrix data.

The entered data is then displayed in matrix form.

### Example Input

```text
Enter number of rows: 3
Enter number of columns: 3

Enter the elements:

10 20 30
40 50 60
70 80 90
```

### Example Output

```text
The 2D Array is:

10 20 30
40 50 60
70 80 90
```

## 🔬 ECE-Based Example

The same concept can represent sensor measurements:

```text
          Sample 1  Sample 2  Sample 3
Sensor 1     25        27        26
Sensor 2     30        31        29
Sensor 3     18        19        20
```

Here:

* Each **row** represents a sensor.
* Each **column** represents a measurement/sample.
* Each array element represents a sensor reading.

This structure can be extended to real-time embedded applications.

## 🧠 Concepts Learned

* Two-dimensional arrays
* Matrix representation
* Nested `for` loops
* Row and column indexing
* User input using `scanf()`
* Output using `printf()`
* Structured data storage
* Basic data processing concepts

## 🚀 Future Improvements

The project can be extended toward practical ECE applications:

* Sensor data averaging
* Maximum and minimum sensor value detection
* Multi-channel sensor processing
* Matrix addition and multiplication
* Digital image representation
* Simple signal-processing operations
* ADC sample storage and analysis
* Embedded-system implementation using a microcontroller

## 📈 Learning Outcome

This project provides a foundation for using C programming in ECE applications where large amounts of structured numerical data need to be stored and processed.

Understanding arrays and matrix operations is useful before moving into areas such as:

* Embedded C
* Digital Signal Processing
* Image Processing
* Microcontroller Programming
* Communication Systems
* Data Acquisition Systems
* IoT Systems

## 👨‍💻 Author

**Srinivasan S K**

Final Year Electronics and Communication Engineering Student

## 📚 Purpose

This repository is created as part of my learning journey in **C programming and Electronics & Communication Engineering**, with an emphasis on applying fundamental programming concepts to engineering-oriented problems.
