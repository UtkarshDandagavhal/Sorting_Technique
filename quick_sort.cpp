#include<bits/stdc++.h>
using namespace std;  // Add this line to use the standard namespace

int partitionArray(int input[], int start, int end) {
    int pivot = input[start];
    int i = start;
    int j = end;

    while (i < j) {
        while (input[i] <= pivot && i <= end - 1) {
            i++;
        }
        while (input[j] >= pivot && j >= start + 1) {
            j--;
        }
        if (i < j) {
            swap(input[i], input[j]);
        }
    }
    swap(input[start], input[j]);
    return j;
}

void qs(int input[], int start, int end) {
    if (start < end) {
        int pindex = partitionArray(input, start, end);

        qs(input, start, pindex - 1);
        qs(input, pindex + 1, end);
    }
}

void quickSort(int input[], int start, int end) {
    qs(input, start, end);
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
