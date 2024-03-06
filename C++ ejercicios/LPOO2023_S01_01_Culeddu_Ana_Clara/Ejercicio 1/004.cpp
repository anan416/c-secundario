#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include "logica.h"

using namespace std;

int main(){

	logica p;
	string palabra;
	p.ingresarPalabra(palabra);
	cout<<endl<<"RESULTADO: "<<p.mensaje;

	return 1;
	

}