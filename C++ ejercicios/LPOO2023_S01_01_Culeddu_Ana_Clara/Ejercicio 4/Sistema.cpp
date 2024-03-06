#include <string>
#include <iostream>
#include "Sistema.h"

using namespace std;

void Sistema::ingresarPalabra(string palabras[]){
	int cont = 0;
    cout<<"Ingrese palabras: "<<endl;
	while(cont != 9){
		cin>>pal;
		if(validar(pal)==true){
			palabras[cont] = pal;
            cont += 1;
		}
        else{
            cout<<"ERROR! Debe ser entre 5 y 10 caracteres"<<endl;
            continue;
        }
	}    
}

bool Sistema::validar(string pal){
	bool resultado=true;
	
	if(pal.length() > 10 || pal.length() < 5){
		resultado=false;
	}
	return resultado;    
};

void Sistema::buscar(string opcion, string palabras[]){
    string palabra;
    bool encontrado = false;
    while (opcion != "c" || opcion != "C"){
        cout << "\n Ingrese palabra a buscar: " << endl;
        cin >> palabra;
        cout<< "\n a - Busqueda secuencial \n b - Busqueda binaria \n c - Salir \n Ingrese opcion: ";
        cin>> opcion;
        if (opcion == "a" || opcion == "A"){
            for(int i = 0; i < 10; i++){
                if(palabras[i] == palabra){
                   encontrado = true;
                   cout <<" \n Se encontro en la posicion " << i << endl;
                   break;
                }
            }
            if (encontrado == false){
                cout << "No fue encontrado la palabra" << endl;
            } 
        }
        else if (opcion == "b" || opcion == "B"){    
            int izquierda = 0;
            int derecha = 10 - 1;
            encontrado = false;
            while(izquierda <= derecha){
                int mitad = (izquierda + derecha) / 2;
                if(palabras[mitad] == palabra){
                    cout << "La palabra fue encontrada en la posición " << mitad << endl;
                    encontrado = true;
                    break;
                }
                else if(palabras[mitad] < palabra){
                    izquierda = mitad + 1;
                }
                else{
                    derecha = mitad - 1;
                }
            }
            if (encontrado == false){
                cout << "No fue encontrado la palabra" << endl;
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
