#include <cstdlib>
#include <iostream>
#include "Sistema.h"

using namespace std;

int main(){
    Sistema s;
    int numeros[4];
    string palabras[4];
    s.ingreso(numeros);
    s.ingreso(palabras);
    s.operar(numeros, palabras);

    return 1;
}