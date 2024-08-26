#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0, average;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / n;

    cout << "The average of the array elements is: " << average << endl;

    return 0;
}
