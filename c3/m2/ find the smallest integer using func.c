/*The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.

Example
Input
10
4 3 6 2 6 8 9 8 5 4
Output
2*/


#include <stdio.h>

// Prototype: function must be named 'min', return an int, 
// and accept the array along with its size
int min(int arr[], int n);

int main() {
    int i, n;
    int a[100];

    // Read total number of elements
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call the function named 'min' and print the returned value
    int result = min(a, n);
    printf("%d\n", result);

    return 0;
}

// Definition of min
int min(int arr[], int n) {
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}