/*
BUBBLE SORT
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process repeats until the list is sorted.


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {  
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {  
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped in inner loop, array is already sorted
        if (!swapped) 
            break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}




NOTE :: for (int i = 0; i < n - 1; i++)

FOR EXAMPLE - arr[] = {5, 3, 8, 4, 2}

Pass 1 - 
j runs from 0 to n - i - 1 = 5 - 0 - 1 = 4
Comparisons: arr[0] vs arr[1], arr[1] vs arr[2], arr[2] vs arr[3], arr[3] vs arr[4]
Largest element bubbles to the last position 🡪 {3, 5, 4, 2, 8}

Pass 2 -
j runs from 0 to n - i - 1 = 5 - 1 - 1 = 3
Comparisons: arr[0] vs arr[1], arr[1] vs arr[2], arr[2] vs arr[3]
Next largest element bubbles up 🡪 {3, 4, 2, 5, 8}

Pass 3 -
j runs from 0 to n - i - 1 = 5 - 2 - 1 = 2
Comparisons: arr[0] vs arr[1], arr[1] vs arr[2]
Next largest element bubbles up 🡪 {3, 2, 4, 5, 8}

Pass 4 -
j runs from 0 to n - i - 1 = 5 - 3 - 1 = 1
Comparisons: arr[0] vs arr[1]
Next largest element bubbles up 🡪 {2, 3, 4, 5, 8}

Pass 5 - 
n - i - 1 = 5 - 4 - 1 = 0 (No comparisons needed)
Sorting is complete 



*/