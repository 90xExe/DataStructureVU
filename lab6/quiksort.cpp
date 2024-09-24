#include <iostream>
using namespace std;

// Partition function to place the pivot element in its correct position
int part(int arr[], int p, int r) {
    int pivot = arr[r];  // Choosing pivot as the last element
    int i = p - 1;  // Index of smaller element

    for (int j = p; j < r; j++) {
        if (arr[j] <= pivot) {  // If current element is smaller than or equal to pivot
            i++;  // Increment index of smaller element
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap the pivot element with the element at i+1
    int temp2 = arr[r];
    arr[r] = arr[i + 1];
    arr[i + 1] = temp2;

    return i + 1;  // Return the partition index
}

// QuickSort function that recursively sorts the array
void quickSort(int arr[], int p, int r) {
    if (p < r) {
        int qs = part(arr, p, r);  // Partition the array
        quickSort(arr, p, qs - 1);  // Sort the left subarray
        quickSort(arr, qs + 1, r);  // Sort the right subarray
    }
}

// Function to print the elements of the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int A[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Original array: ";
    printArray(A, n);

    quickSort(A, 0, n - 1);  // Call quicksort on the array

    cout << "Sorted array: ";
    printArray(A, n);

    return 0;
}


