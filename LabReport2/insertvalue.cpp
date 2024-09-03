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

    int location, newValue,x;

    // Get the location and the new value from the user
    cout << "Enter the location you want to change (1 to " << size << "): ";
    cin >> x;

    location = x-1;
    // Check if the location is valid
    if(location >= 0 && location < size) {
        cout << "Enter the new value: ";
        cin >> newValue;

        // Change the value at the specified location
        arr[location] = newValue;

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
