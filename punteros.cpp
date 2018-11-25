#include <iostream>

using namespace std;

void main () {
   int  var = 20;       // Asignación de la variable "var" con valor "(int) 20"
   int  *puntero;       // Declaración de la variable "puntero" de tipo "(int pointer)"

   puntero = &var;      // Asigna que la dirección de la variable puntero indicará a "var"

   cout << "Valor de \"var\": " << var << endl;

   cout << "Dirección de \"puntero\": " << puntero << endl;

   cout << "Valor de \"puntero\": " << *puntero << endl;
}