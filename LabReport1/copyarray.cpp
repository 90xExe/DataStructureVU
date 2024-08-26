#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr1[n], arr2[n];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Copying allll
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Elements of the second array are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
