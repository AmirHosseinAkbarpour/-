#include <iostream>
#include <algorithm>

using namespace std;

void inputArray(int arr[], int n) {
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int n) {
    cout << "Array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMax(int arr[], int n) {
    return *max_element(arr, arr + n);
}

int findMin(int arr[], int n) {
    return *min_element(arr, arr + n);
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

double averageArray(int arr[], int n) {
    return (double)sumArray(arr, n) / n;
}

void sortArray(int arr[], int sortedArr[], int n) {
    copy(arr, arr + n, sortedArr);
    sort(sortedArr, sortedArr + n);
}

int searchValue(int arr[], int key, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    
    return -1;
}

int main() {
    const int MAX_SIZE = 100;
    
    int array[MAX_SIZE], sortedArray[MAX_SIZE], size, key;

    cout << "Enter the size of the array: ";
    cin >> size;

    inputArray(array, size);
    
    printArray(array, size);

    cout << "Maximum element: " << findMax(array, size) << endl;
    
 cout << "Minimum element: " << findMin(array, size) << endl;

 cout << "Sum of elements: " << sumArray(array, size) << endl;

 cout << "Average of elements: " << averageArray(array, size) << endl;

 sortArray(array, sortedArray, size);
 cout<<"Sorted array: ";
 printArray(sortedArray,size);

 cout<<"Enter a value to search in the array: ";
 cin>>key;
 int index=searchValue(array,key,size);
 if(index!=-1)
  cout<<"Value found at index "<<index<<endl;
 else
  cout<<"Value not found in the array."<<endl;

 return 0;
}