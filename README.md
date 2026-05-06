# Sorting Algorithms & Big O

## Description

This project implements various sorting algorithms in C, along with their time complexity analysis using Big O notation. All code is written in compliance with Betty style and compiled on Ubuntu 20.04 LTS.

## Learning Objectives

By the end of this project, you should be able to explain:

- At least four different sorting algorithms
- What Big O notation is and how to evaluate time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What a stable sorting algorithm is

## Requirements

- **Editors:** `vi`, `vim`, `emacs`
- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- Code must follow the **Betty** style
- No global variables allowed
- No more than 5 functions per file
- Standard library functions (`printf`, `puts`, etc.) are **forbidden** unless specified
- All function prototypes must be in `sort.h`
- Header files must be include guarded
- Arrays/lists with fewer than 2 elements do not need to be sorted

## Data Structures

### Doubly Linked List

```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

### Provided Functions

`print_array` and `print_list` are provided and will be compiled with your code during correction. Declare their prototypes in `sort.h`.

## Files

| File | Description |
|------|-------------|
| `sort.h` | Header file with all prototypes and data structures |
| `0-bubble_sort.c` | Bubble sort algorithm |
| `0-O` | Big O time complexity for Bubble sort |
| `1-insertion_sort_list.c` | Insertion sort on a doubly linked list |
| `1-O` | Big O time complexity for Insertion sort |
| `2-selection_sort.c` | Selection sort algorithm |
| `2-O` | Big O time complexity for Selection sort |
| `3-quick_sort.c` | Quick sort algorithm (Lomuto partition) |
| `3-O` | Big O time complexity for Quick sort |

## Sorting Algorithms

### Bubble Sort
Repeatedly swaps adjacent elements that are out of order. Prints the array after each swap.
- Best: `O(n)` | Average: `O(n^2)` | Worst: `O(n^2)`

### Insertion Sort
Builds the sorted list one element at a time by inserting each node in the correct position. Prints the list after each swap.
- Best: `O(n)` | Average: `O(n^2)` | Worst: `O(n^2)`

### Selection Sort
Finds the minimum element in the unsorted region and swaps it into place. Prints the array after each swap.
- Best: `O(n^2)` | Average: `O(n^2)` | Worst: `O(n^2)`

### Quick Sort
Divides the array using a pivot (Lomuto scheme), recursively sorting sub-arrays. Prints the array after each swap.
- Best: `O(nlog(n))` | Average: `O(nlog(n))` | Worst: `O(n^2)`

## Big O Notation Reference

| Notation | Name |
|----------|------|
| `O(1)` | Constant |
| `O(n)` | Linear |
| `O(n^2)` | Quadratic |
| `O(log(n))` | Logarithmic |
| `O(nlog(n))` | Linearithmic |
| `O(n!)` | Factorial |

> Use short notation only — no constants. `O(2n)` is written as `O(n)`.

## Compilation Example

```bash
gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select
./select
```

## Testing

Use [Random.org](https://www.random.org/integer-sets/) to generate large sets of random integers for testing.

## Authors

- Jana Alhazmi - GitHub: https://github.com/janaalhazmi
- Lama Almazroa - GitHub: https://github.com/l44mz
