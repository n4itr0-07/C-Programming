# Arrays in C: A Comprehensive Guide

## 1. Introduction to Arrays

### What is an Array?
An array is a collection of elements of the same data type, stored at contiguous memory locations. It allows you to store multiple values under a single variable name, and access these values using indices.

### Syntax
```c
type arrayName[arraySize];
```

- **type**: The data type of the elements.
- **arrayName**: The name of the array.
- **arraySize**: The number of elements the array can hold.

### Example
```c
int numbers[5];
```

This creates an array named `numbers` that can hold 5 integers.

### Initialization
You can initialize an array when you declare it:
```c
int numbers[5] = {1, 2, 3, 4, 5};
```

### Accessing Array Elements
Array elements are accessed using indices:
```c
int firstElement = numbers[0]; // Accessing the first element
numbers[1] = 10; // Modifying the second element
```

### Example: Simple Array Usage
```c
#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing elements
    for(int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}
```

## 2. Arrays and Memory

### Memory Layout
Arrays are stored in contiguous memory locations. For example, if an `int` takes 4 bytes, an `int` array of size 5 will occupy 20 bytes (5 * 4 bytes).

### Address of Elements
The address of an element in an array can be found using the `&` operator:
```c
printf("Address of numbers[0]: %p\n", &numbers[0]);
```

### Pointer Arithmetic
Arrays and pointers are closely related. The name of an array acts as a pointer to its first element.
```c
int *ptr = numbers;
printf("First element: %d\n", *ptr); // Accessing the first element using a pointer
```

## 3. Multidimensional Arrays

### 2D Arrays
A 2D array is like a matrix, with rows and columns.
```c
int matrix[3][4]; // A 3x4 matrix
```

### Initialization
```c
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

### Accessing Elements
```c
int element = matrix[1][2]; // Accessing element at 2nd row, 3rd column
```

### Example: 2D Array Usage
```c
#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Accessing elements
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

## 4. Arrays and Functions

### Passing Arrays to Functions
You can pass an array to a function by passing its name (which is a pointer to the first element).
```c
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
```

### Example
```c
#include <stdio.h>

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);
    return 0;
}
```

## 5. Advanced Topics

### 5.1 Dynamic Arrays
In C, arrays have a fixed size, but you can create dynamic arrays using pointers and `malloc` or `calloc`:
```c
int *arr = (int*)malloc(5 * sizeof(int)); // Allocating memory for an array of size 5
```

### 5.2 Resizing Dynamic Arrays
Use `realloc` to resize a dynamic array:
```c
arr = (int*)realloc(arr, 10 * sizeof(int)); // Resizing the array to hold 10 elements
```

### 5.3 Array of Pointers
An array of pointers can be used to create a jagged array (an array of arrays with different sizes):
```c
int *arr[3];
arr[0] = (int*)malloc(2 * sizeof(int));
arr[1] = (int*)malloc(3 * sizeof(int));
arr[2] = (int*)malloc(4 * sizeof(int));
```

## 6. Arrays in Data Structures and Algorithms

### 6.1 Searching Algorithms

#### Linear Search
```c
int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}
```

#### Binary Search
Binary Search requires a sorted array.
```c
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
```

### 6.2 Sorting Algorithms

#### Bubble Sort
```c
void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

#### Quick Sort
```c
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

### 6.3 Applications of Arrays in DSA

- **Hashing**: Arrays are used to implement hash tables.
- **Stacks/Queues**: Arrays can be used to implement these linear data structures.
- **Graph Representation**: Arrays are used to represent adjacency matrices in graphs.