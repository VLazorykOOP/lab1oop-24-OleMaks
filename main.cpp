#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 200;
    int n;

    cout << "Enter the size of the array (200): ";
    cin >> n;

    if (n < 2 || n > MAX_SIZE) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    double A[MAX_SIZE], B[MAX_SIZE];
    double totalSum = 0;


    cout << "Enter the elements of array A:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        totalSum += A[i];
    }

    // Build B
    for (int i = 0; i < n; ++i) {
        B[i] = (totalSum - A[i]) / (n - 1);
    }

    // Out B
    cout << "Array B:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}