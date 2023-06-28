# Sorting Algorithms & Big O 😮

This repository contains the implementation of various sorting algorithms in the C programming language. The goal of this project is to familiarize ourselves with sorting algorithms, understand their time complexity using Big O notation, and learn how to select the best sorting algorithm for a given input.

## Contents📚

- [Bubble sort](./0-bubble_sort.c) 
- [Insertion sort](./1-insertion_sort_list.c)
- [Selection sort](./2-selection_sort.c)
- [3. Quick sort](./3-quick_sort.c)

## Background Context 📝 

This project is a part of the ALX curriculum and is meant to be done in teams of two. The project started on June 21, 2023, at 6:00 AM and must be completed by June 28, 2023, at 6:00 AM. An auto-review will be launched at the deadline.

## Learning Objectives 📝 

By the end of this project, we are expected to be able to:

- Implement at least four different sorting algorithms.
- Explain the concept of Big O notation and evaluate the time complexity of an algorithm.
- Select the best sorting algorithm forr a given input.
- Understand the concept of stable sorting algorithms.

## Resources 📚 

In this project, we are provided with the following helper functions:

- `print_array` - Prints an array of integers.\
- `print_list` - Prints a doubly linked list of integers.

Additionally, we were given the following data structure for the doubly linked list:

```c\
/**\
 * struct listint_s - Doubly linked list node\
 *\
 * @n: Integer stored in the node\
 * @prev: Pointer to the previous element of the list\
 * @next: Pointer to the next element of the list\
 */\
typedef struct listint_s\
{\
    const int n;\
    struct listint_s *prev;\
    struct listint_s *next;\
} listint_t;\

```

## Header File: [sort.h](./sort.h)📁 

This header file contains the function prototypes for various sorting algorithms.

Function Prototypes:

| Function | Source File |
| -------- | ----------- |
| `void bubble_sort(int *array, size_t size)` | [Bubble sort](./0-bubble_sort.c) |
| `void selection_sort(int *array, size_t size)` | [selection_sort.c](selection_sort.c) |
| `void insertion_sort(int *array, int n)` | [insertion_sort.c](insertion_sort.c) |
| `void quicksort(int *array, int low, int high, size_t size)` | [3. Quick sort](./3-quick_sort.c) |
| `void shell_sort(int *array, size_t size)` | [3. Quick sort](./100-shell_sort.c)🚀 |
| ... | .... |


## Tasks

### [0. Bubble sort](./0-bubble_sort.c)🚀

- Implement the `bubble_sort` function that sorts an array of integers in ascending order using the Bubble sort algorithm.
- Print the array after each time two elements are swapped.
- Write the time complexity of the Bubble sort algorithm in the best case, average case, and worst case in the `0-O` file.

### [1. Insertion sort](./1-insertion_sort_list.c)🚀

- Implement the `insertion_sort_list` function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.
- Print the list after each time two elements are swapped.
- Write the time complexity of the Insertion sort algorithm in the best case, average case, and worst case in the `1-O` file.

### [2. Selection sort](./2-selection_sort.c)🚀

- Implement the `selection_sort` function that sorts an array of integers in ascending order using the Selection sort algorithm.
- Print the array after each time two elements are swapped.
- Write the time complexity of the Selection sort algorithm in the best case, average case, and worst case in the `2-O` file.

### [3. Quick sort](./3-quick_sort.c)🚀

- Implement the quick_sort function to sort an array of integers in ascending order using the Quick sort algorithm.
- Use the Lomuto partition scheme to determine the pivot element, which is set as the last element of the partition being sorted.
- Display the array after each swap operation between two elements to visualize the sorting process.

### [3. Quick sort](./100-shell_sort.c)🚀

    Implement the quick_sort function to sort an array of integers in ascending order using the Quick sort algorithm.
    Use the Lomuto partition scheme to determine the pivot element, which is set as the last element of the partition being sorted.
    Display the array after each swap operation between two elements to visualize the sorting process.
---

**Note:** The full code for each task can be found in their respective files mentioned in the repository.