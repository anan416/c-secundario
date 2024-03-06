#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

int main(){

	Sistema s;
    int numeros[9];
    string opcion;
    s.ingresarNumero(numeros);
    s.asc_desc(opcion, numeros);
    return 1;
}
	