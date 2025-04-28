#include <iostream>
using namespace std;

int main() {
    const int N = 10;  // size
    int A[N] = {3, -2, 5, -1, -3, 5, -1, 7, -1, -2};  // array
    int T = 5;

    int lastTIndex = -1;


    for (int i = 0; i < N; i++) {
        if (A[i] == T) {
            lastTIndex = i;
        }
    }


    if (lastTIndex == -1 || lastTIndex == N - 1) {
        cout << "element T not found or there are no elements after it" << endl;
        return 0;
    }

    int maxNeg = 100;
    int maxNegIndex = -1;


    for (int i = lastTIndex + 1; i < N; i++) {
        if (A[i] < 0) {
            if (A[i] < maxNeg) {
                maxNeg = A[i];
                maxNegIndex = i;
            }
        }
    }


    if (maxNegIndex != -1) {
        cout << "index of the last maximum negative element after T: " << maxNegIndex << endl;
        cout << "value: " << A[maxNegIndex] << endl;
    } else {
        cout << "no negative elements after the last T" << endl;
    }

    return 0;
}