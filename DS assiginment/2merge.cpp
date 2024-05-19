#include <iostream>
using namespace std;

void mergearrs(int arr[], int left, int mid, int right) {
    int sizeLeft = mid - left + 1;
    int sizeRight = right - mid;

    int leftarr[sizeLeft], rightarr[sizeRight];

    for (int i = 0; i < sizeLeft; i++)
        leftarr[i] = arr[left + i];
    for (int j = 0; j < sizeRight; j++)
        rightarr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < sizeLeft && j < sizeRight) {
        if (leftarr[i] <= rightarr[j]) {
            arr[k] = leftarr[i];
            i++;
        } else {
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }

    while (i < sizeLeft) {
        arr[k] = leftarr[i];
        i++;
        k++;
    }

    while (j < sizeRight) {
        arr[k] = rightarr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        mergearrs(arr, left, mid, right);
    }
}

void printarr(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arrSize;
    cout << "Enter the number of elements: ";
    cin >> arrSize;

    int arr[arrSize];
    cout << "Enter the elements: ";
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, arrSize - 1);

    cout << "Sorted array: " << endl;
    printarr(arr, arrSize);

    return 0;
}

