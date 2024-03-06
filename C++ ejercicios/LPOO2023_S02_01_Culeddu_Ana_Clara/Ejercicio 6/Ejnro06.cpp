#include <cstdlib>
#include <iostream>
#include "Sistema.h"

using namespace std;

int main(){
    Sistema s;
    int numeros[4];
    string opcion;
    s.ingresarNumero(numeros);
    s.verPorBase(opcion, numeros);
    
    return 1;
}
