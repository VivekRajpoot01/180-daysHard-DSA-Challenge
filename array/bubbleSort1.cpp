#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // creating an empty array with the given size
    int arr[size];

    // Taking input from the user
    cout << "\nInput elements in the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, size);

    // Displaying sorted array
    cout << "\nSorted array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
