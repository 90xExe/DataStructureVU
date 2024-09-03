#include <iostream>
using namespace std;

int main() {
    int size;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare an array of the given size
    int arr[size];

    // Get the elements of the array from the user
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int location;
    int x;
    // Get the location to delete from the user
    cout << "Enter the location you want to delete (1 to " << size << "): ";
    cin >> x;

    location = x -1;
    // Check if the location is valid
    if(location >= 0 && location < size) {
        // Shift elements to the left to delete the specified location
        for(int i = location; i < size-1 ; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease the size of the array by 1
        size--;

        // Output the updated array
        cout << "Updated array: ";
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid location!" << endl;
    }

    return 0;
}
