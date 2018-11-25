#include <iostream>
#include <queue>

using namespace std;

void main(void) {   
   auto n = {1, 2, 3, 4, 5}; // Declaración de la variable "n" de tipo "automático"
   queue<int> cola(n); // Asignación de la variable "cola" con valores de "n"

   cout << "Contenido de la cola: " << endl;
   while (!cola.empty()) {
      cout << cola.front() << endl;
      cola.pop();
   }
}