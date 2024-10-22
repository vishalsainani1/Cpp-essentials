#include <iostream>
using namespace std;

// Template function for bubble sort
template <typename T>
void bubbleSort(T arr[], int n) {
    // Loop through all elements of the array
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to print an array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example with int array
    char intArr[] = {'h', 'a', 'a', 'b', 'a','q', 'e'};
    int n = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Original int array: \n";
    printArray(intArr, n);

    bubbleSort(intArr, n);

    cout << "Sorted int array: \n";
    printArray(intArr, n);

    // Example with double array
  //  double doubleArr[] = {3.2, 1.1, 7.4, 0.9, 4.6};
//    int m = sizeof(doubleArr) / sizeof(doubleArr[0]);

  //  cout << "Original double array: \n";
  //  printArray(doubleArr, m);

//    bubbleSort(doubleArr, m);

  //  cout << "Sorted double array: \n";
//    printArray(doubleArr, m);

    return 0;
}
