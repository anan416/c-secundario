#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

int main(){

	Sistema s;
    int numeros[4];
    string opcion;
    s.ingresarNumero(numeros);
    s.impar_par(opcion, numeros);

}
	
