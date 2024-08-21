#include <iostream>

using namespace std;

int main() {
    int arr[10];  // max array 10
    int n;

    cout << "Enter the number of elements (max 10): "<<endl;
    cin >> n;

    cout << "Enter " << n << " elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // find maximum value
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    // find 2nd maximum value
    int second_max_val = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] != max_val && arr[i] > second_max_val) {
            second_max_val = arr[i];
        }
    }

    // find minimum value
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    // find 2nd minimum value
    int second_min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] != min_val && arr[i] < second_min_val) {
            second_min_val = arr[i];
        }
    }

    cout << "Maximum value: " << max_val << endl;
    cout << "2nd Maximum value: " << second_max_val << endl;
    cout << "Minimum value: " << min_val << endl;
    cout << "2nd Minimum value: " << second_min_val << endl;

    return 0;
}
