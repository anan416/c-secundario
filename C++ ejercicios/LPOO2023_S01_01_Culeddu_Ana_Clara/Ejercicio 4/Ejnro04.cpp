#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

int main(){

	Sistema s;
    string palabras[9], opcion;
    s.ingresarPalabra(palabras);
    s.buscar(opcion,palabras);
    return 1;
}
	