#include <iostream>
#include <bits/stl_algo.h>

using namespace std;

void main() 
{ 
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Orden inicial del arreglo:" << endl << "\t";
    printArray(arr);

    sort(arr, arr+n);

    cout << "Arreglo despues del ordenamiento:" << endl << "\t"; 
    printArray(arr);
}

void printArray(int arr[]) {
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; ++i) {
        if (i > 0) cout << ", ";
        cout << arr[i];
    }
}