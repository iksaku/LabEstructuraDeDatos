#include <iostream>
#include <list>

using namespace std;

void main(void) {
    // Declaración de la lista "lista" con valores tipo "(int)"
    list<int> lista = {1, 2, 3, 4, 5};

    cout << "Contenido de lista \"lista\":" << endl;

    for (auto it = lista.begin(); it != lista.end(); ++it) {
        cout << *it << endl;
    }
}