# Artificial Intelligence Lab — Lab Test 1

**Course:** Artificial Intelligence Laboratory  
**Assignment:** Lab Test 1 Implementation  
**Programming Language:** C++

---

## 1. Assignment Overview & Objectives

The objective of this laboratory assignment is to implement fundamental Artificial Intelligence algorithms by solving three classical problems.

The assignment consists of the following problems:

1. **Problem 1: Water Jug Problem** — Uses Breadth-First Search (BFS) to explore possible water levels and reach a specified target amount using two jugs.
2. **Problem 2: Missionaries and Cannibals Problem** — Uses BFS to find a valid sequence of river crossings while maintaining safety constraints.
3. **Problem 3: Sudoku Solver (9×9)** — Uses recursive Backtracking to solve a Sudoku puzzle while satisfying row, column, and 3×3 subgrid constraints.

The implementations focus on state-space representation, search algorithms, constraint checking, and problem-solving techniques in Artificial Intelligence.

---

## 2. Directory Structure

The repository follows this folder structure:

```text
Lab-1/
│
├── Problem 1/
│   ├── WaterJug.cpp
│   └── README.md
│
├── Problem 2/
│   ├── MissionariesAndCannibalsProblem.cpp
│   └── README.md
│
├── Problem 3/
│   ├── Sudoku.cpp
│   └── README.md
│
└── README.md
```

---

## 3. Prerequisites & Environment Setup

- **Programming Language:** C++
- **Compiler:** GCC (g++)
- **C++ Standard:** C++11 or later
- **External Dependencies:** None. The programs use standard C++ libraries.
- **Platform:** Windows, Linux, and macOS.

---

## 4. Problem Summaries & Algorithms Used

| Problem | AI Paradigm | Algorithm | State Representation |
| :--- | :--- | :--- | :--- |
| Water Jug | Uninformed Search | Breadth-First Search (BFS) | `(jugA, jugB)` |
| Missionaries and Cannibals | Uninformed Search | Breadth-First Search (BFS) | `(M, C, Boat)` |
| Sudoku Solver | Constraint Satisfaction | Recursive Backtracking | `grid[9][9]` |

### Algorithm Highlights

**1. Breadth-First Search (BFS)**

- Explores possible states level by level.
- Uses a FIFO queue to store states.
- Uses a visited set to avoid revisiting states.
- Finds a shortest path when all operations have equal cost.
- Used in Problem 1 and Problem 2.

**2. Recursive Backtracking**

- Explores possible solutions recursively.
- Checks whether a value satisfies the given constraints.
- Reverses an invalid choice and tries another possibility.
- Used in Problem 3.

---

## 5. Instructions for Running Each Program

Make sure a C++ compiler (g++) is installed and available in your terminal.

### Problem 1: Water Jug Problem

Navigate to `Problem 1/` and execute:

```bash
g++ WaterJug.cpp -o WaterJug
```

Run:

```bash
./WaterJug
```

On Windows:

```bash
WaterJug.exe
```

The program asks for Jug A capacity, Jug B capacity, and the target amount.

### Problem 2: Missionaries and Cannibals Problem

Navigate to `Problem 2/` and execute:

```bash
g++ MissionariesAndCannibalsProblem.cpp -o MissionariesAndCannibalsProblem
```

Run:

```bash
./MissionariesAndCannibalsProblem
```

On Windows:

```bash
MissionariesAndCannibalsProblem.exe
```

The program uses a predefined initial state of three missionaries and three cannibals.

### Problem 3: Sudoku Solver

Navigate to `Problem 3/` and execute:

```bash
g++ Sudoku.cpp -o Sudoku
```

Run:

```bash
./Sudoku
```

On Windows:

```bash
Sudoku.exe
```

---

## 6. Problem Implementation Summary

### Problem 1: Water Jug

- **Input:** Capacities of Jug A, Jug B, and the target amount.
- **Initial State:** `(0, 0)`.
- **Operations:** Fill, empty, and pour water between the two jugs.
- **Data Structures:** Queue and set.
- **Output:** Explored states and target-reached or target-unreachable message.

### Problem 2: Missionaries and Cannibals

- **Input:** No user input required.
- **Initial State:** `(3, 3, 0)`.
- **Boat Capacity:** Two people.
- **Constraints:** Cannibals must never outnumber missionaries on either bank when missionaries are present.
- **Data Structures:** Queue and set.
- **Output:** Explored states and solution-found or no-solution message.

### Problem 3: Sudoku Solver

- **Input:** A 9×9 Sudoku grid.
- **Empty Cells:** Represented by `0`.
- **Algorithm:** Recursive Backtracking.
- **Constraints:** Each row, column, and 3×3 subgrid must contain unique digits from 1 to 9.
- **Output:** Solved Sudoku grid.

---

## 7. Individual Problem Documentation

Detailed problem statements, algorithms, flowcharts, implementation details, sample inputs and outputs, and complexity analyses are available in the respective README files:

- [Problem 1 — Water Jug](Problem%201/README.md)
- [Problem 2 — Missionaries and Cannibals](Problem%202/README.md)
- [Problem 3 — Sudoku Solver](Problem%203/README.md)

---

## 8. Conclusion

This laboratory assignment demonstrates the practical implementation of fundamental Artificial Intelligence techniques, including Breadth-First Search and Recursive Backtracking.

Through these problems, the concepts of state-space search, constraint checking, and systematic problem-solving are implemented using C++.

---

**Student Name:** Tushar Kharade  
**Roll Number:** IC-2k23-96  
**Subject:** Artificial Intelligence Laboratory  
**Language:** C++
