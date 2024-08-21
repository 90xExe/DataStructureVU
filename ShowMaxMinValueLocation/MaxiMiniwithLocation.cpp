#include <iostream>


using namespace std;

int main() {
    int arr[10]; // max array 10
    int n;

    cout << "Enter the number of elements (max 10): ";
    cin >> n;

    cout << "Enter " << n << " elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // find maximum value and its location
    int max_val = arr[0];
    int max_loc = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_loc = i;
        }
    }

    // find 2nd maximum value and its location
    int second_max_val = INT_MIN;
    int second_max_loc = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != max_val && arr[i] > second_max_val) {
            second_max_val = arr[i];
            second_max_loc = i;
        }
    }

    // find minimum value and its location
    int min_val = arr[0];
    int min_loc = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_loc = i;
        }
    }

    // find 2nd minimum value and its location
    int second_min_val = INT_MAX;
    int second_min_loc = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != min_val && arr[i] < second_min_val) {
            second_min_val = arr[i];
            second_min_loc = i;
        }
    }

    cout << "Maximum value: " << max_val << " at location " << max_loc +1 << endl;
    cout << "2nd Maximum value: " << second_max_val << " at location " << second_max_loc +1 << endl;
    cout << "Minimum value: " << min_val << " at location " << min_loc +1 << endl;
    cout << "2nd Minimum value: " << second_min_val << " at location " << second_min_loc +1 << endl;

    return 0;
}
