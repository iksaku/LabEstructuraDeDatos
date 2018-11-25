#include<iostream>
using namespace std;

void main() {
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};
    int key, i, size = sizeof(arr)/sizeof(arr[0]);

    cout << "Valores en el arreglo:" << endl;
    for (i = 0; i < size; ++i) {
        if (i != 0) cout << ", ";
        cout << arr[i];
    }

    cout << "Ingrese un número para mostrar su índice: ";
    cin >> key;

    for(i = 0; i < size; ++i){
        if(key == arr[i]) break;
    }

    if(i < size){
        cout << "Número encontrado en el índice \"" << i << "\".";
    } else {
        cout << "Número no encontrado en el arreglo.";
    }
}