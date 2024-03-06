#include <string>
#include <iostream>
#include "Sistema.h"

using namespace std;

void Sistema::ingresarNumero(int numeros[]){
	int cont = 0;
    cout<<"Ingrese numeros: "<<endl;
	while(cont != 10){
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

void Sistema::asc_desc(string opcion, int numeros[]){
    while (opcion != "c" || opcion != "C"){
        cout<< "\n a - Ver de forma ascendente \n b - Ver de forma descendente \n c - Salir \n Ingrese opcion: ";
        cin>> opcion;
        if (opcion == "a" || opcion == "A"){
            int temp;
            for (int i = 0; i < 10-1; i++) {
                for (int j = 0; j < 10-i-1; j++) {
                    if (numeros[j] > numeros[j+1]) {
                        temp = numeros[j];
                        numeros[j] = numeros[j+1];
                        numeros[j+1] = temp;
                    }
                }
            }
            for (int i = 0; i < 10; i++){
                cout << numeros[i] << endl;
            }            
        }
        else if (opcion == "b" || opcion == "B"){
            int temp;
            for (int i = 0; i < 10-1; i++) {
                for (int j = 0; j < 10-i-1; j++) {
                    if (numeros[j] < numeros[j+1]) {
                        temp = numeros[j];
                        numeros[j] = numeros[j+1];
                        numeros[j+1] = temp;
                    }
                }
            }
            for (int i = 0; i < 10; i++){
                cout << numeros[i] << endl;
            }           
        }
        else if(opcion == "c" || opcion == "C"){
            break;
        }
        else{
            cout << "Esa opcion no existe." << endl;
        }
    }
}

