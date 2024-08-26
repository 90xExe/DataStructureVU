#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n], odd[n], even[n];
    int oddCount = 0, evenCount = 0;

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    cout << "Even elements:" << endl;
    for (int i = 0; i < evenCount; i++) {
        cout << even[i] << " ";
    }

    cout <<endl<< "Odd elements:" << endl;
    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }

    return 0;
}

