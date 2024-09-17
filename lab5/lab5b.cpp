#include <iostream>
using namespace std;

// Recursive function to perform binary search
int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // If the element is present at the middle
        if (arr[mid] == x)
            return mid;

        // If the element is smaller than mid, search in the left subarray
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        // Else search in the right subarray
        return binarySearch(arr, mid + 1, right, x);
    }

    // If the element is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result != -1)
        cout << "Element " << x << " found at index " << result << endl;
    else
        cout << "Element " << x << " not found in the array" << endl;

    return 0;
}

