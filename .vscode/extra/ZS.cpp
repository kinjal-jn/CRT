#include <iostream>
#include <algorithm>

using namespace std;

bool isSorted(const int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

bool trySort(int arr[], int size, int K) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (i != K && j != K) {
                swap(arr, i, j); // Try swapping elements other than K
                if (isSorted(arr, size)) {
                    return true; // Sorted, valid K
                }
                swap(arr, i, j); // Revert the swap
            }
        }
    }
    return false; // Not possible to sort with this K
}

int countValidK(int arr[], int size) {
    int count = 0;
    for (int K = 0; K < size; ++K) {
        int* copyArr = new int[size]; // Create a copy to avoid modifying original array
        copy(arr, arr + size, copyArr);
        if (trySort(copyArr, size, K)) {
            count++;
        }
        delete[] copyArr; // Free memory
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int validKCount = countValidK(arr, N);
    cout << validKCount << endl;

    delete[] arr; // Free memory

    return 0;
}
