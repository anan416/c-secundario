#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include "Palabras.h"

using namespace std;

void Sistema::ingresarNombres(){
    string nombres[10], nombre;
    cout << "Ingrese 10 nombres: " << endl;
    for (int i = 0; i < 9; i++){
        cin >> nombre;
        if(validarNombre(nombre) == true){
		    for(int i = 0; i < nombre.length(); i++){
       		    nombre[i] = toupper(nombre[i]);
            }
            nombres[i] = nombre;
        }
        else{
            cout << "Los nombres deben ser entre 5 y 15 caracteres" << endl;
        }
    }
    cout << "ATENCION: Los nombres se guardaran en mayúscula.";
    ingresar(par, nombres);
}

bool Sistema::validarNombre(string nombre){
	bool resultado=true;
	if(nombre.length() > 15 || nombre.length() < 5){
		resultado=false;
	}
	return resultado;    
};

void Sistema::ingresar(string par, string nombres[]){
    Palabras p;
    bool salida = false;
    cout << "Ingrese un parrafo" << endl;
    while (salida == false){
        getline(cin, par);
        if(validar(par) == true){
            p.guardar(par, nombres);
            salida = true;
        }
        else{
            cout << "El parrafo debe ser alfabetico y entre 15 y 50 caracteres: ";
        }
    }
}

bool Sistema::validar(string par){
	bool resultado = true;
	if(par.length() > 50 || par.length() < 15){
		resultado=false;
	}
	for(int i = 0; i < par.length(); i++){
        if(!isalpha(par[i]) && par[i] != ' '){
            resultado=false;   
        }
	}    
	return resultado;       
};

