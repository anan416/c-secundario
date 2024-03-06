#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include "Sistema.h"

using namespace std;

void Sistema::ingresarParrafo(string parr){
    bool salida = false;
    string encriptado = "";
    cout << "Ingrese parrafo: "<<endl;
    while (salida == false){
        getline(cin, parr);
        if (validarParrafo(parr) == true){
            salida = true;
        }
        else{
            cout << "ERROR! Debe ser entre 5 y 255 caracteres" << endl;
        }
    }	
};

bool Sistema::validarParrafo(string parr){
	bool resultado=true;
	
	if(parr.length() > 255 || parr.length() < 5){
		resultado=false;
	}
	return resultado;    
};

void Sistema::ingresoLlave(string llave){
    cout << "Ingrese caracter llave" << endl;
    bool salida = false;
    while(salida == false){
        cin >> llave;
        if(validarLlave(llave) == true){
            salida = true;
        }
        else{
            cout << "ERROR! Debe ser de un caracter" << endl;
        }
    }
	cout << "El mensaje encriptado es: " << encriptar(parr, llave);
};

bool Sistema::validarLlave(string llave){
	bool resultado=true;
	
	if(llave.length() != 1){
		resultado=false;
	}
	return resultado;    
};

string Sistema::encriptar(string parr, string llave){
	string encriptado = "";
    for (int i = 0; i < parr.length(); i++){
        encriptado += parr[i] ^ llave[i % llave.length()];
		cout << encriptado << endl;
    }
	return encriptado;
}