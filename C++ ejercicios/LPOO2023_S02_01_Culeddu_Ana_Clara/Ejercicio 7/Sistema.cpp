#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include "Sistema.h"
#include "Operaciones.h"

using namespace std;

void Sistema::ingreso(int numeros[]){
	int cont = 0;
    cout<<"Ingrese numeros: "<<endl;
	while(cont != 5){
		cin>>num;
		if(validar(num)==true){
			numeros[cont] = num;
            cont += 1;
		}
        else{
            cout<<"ERROR! Debe ser menor a 1000 y mayor a 1."<<endl;
            continue;
        }
	}     
}

bool Sistema::validar(int num){
	bool resultado;
	
	if(num < 1 || num > 1000){
		resultado=false;
	}
    else{
        resultado=true;
    }
	return resultado;    
};

void Sistema::ingreso(string palabras[]){
	int cont = 0;
    cout<<"Ingrese palabras: "<<endl;
	while(cont != 5){
		cin>>pal;
		if(validar(pal)==true){
			palabras[cont] = pal;
            cont += 1;
		}
        else{
            cout<<"ERROR! Debe ser entre 3 y 10 caracteres en mayuscula"<<endl;
            continue;
        }
	}     
}

bool Sistema::validar(string pal){
	bool resultado=true;
    string mayuscula;	
	if(pal.length() > 10 || pal.length() < 3){
		resultado=false; 
	}
	else{
		for(int i = 0; i < pal.length(); i++){
       		mayuscula[i] = toupper(pal[i]); 
    	}
		if (mayuscula == pal){
			for(int i = 0; i < pal.length(); i++){
        		if(isalpha(pal[i])){
            		resultado=false;   
            	}
				else{
					continue;
				}     		
			}
    	}		
		else{
			resultado = false;
		}
	}
	return resultado;    
};

void Sistema::operar(int numeros[], string palabras[]){
	Operaciones o;
	string opcion, accion;
	while (opcion != "c" || opcion != "C"){
		cout << "a. Ordenamiento \n b. Busqueda \n c. Salir \n Elige una opción: ";		
		cin >> opcion;
		if (opcion == "a" || opcion == "A"){
			cout << "a. Números \n b. Palabras \n c. Volver \n Elige una opción";
			cin >> opcion;
			if(opcion == "a" || opcion == "A"){
				o.orden(numeros);
			}
		}
	}

}