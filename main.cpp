#include <iostream>
using namespace std;

int main() {
    const int N = 7; // розмір
    int A[N] = {0, 3, 0, 5, 7, 0, 9}; // приклад

    int count_zeros = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == 0) {
            count_zeros++;
        }
    }

    cout << "Number of 0 elements: " << count_zeros << endl;

    return 0;
}