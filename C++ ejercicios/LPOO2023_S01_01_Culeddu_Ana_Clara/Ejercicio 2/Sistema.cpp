#include <string>
#include <iostream>
#include "Sistema.h"

using namespace std;
void Sistema::ingresarNumero(int numeros[]){
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

void Sistema::impar_par(string opcion, int numeros[]){
    while (opcion != "c" || opcion != "C"){
        cout<< "\n a - Numeros impares \n b - Numeros pares \n c - Salir \n Ingrese opcion: ";
        cin>> opcion;
        if (opcion == "a" || opcion == "A"){
            for (int i = 0; i <=4; i++){
                if (numeros[i] % 2 != 0){
                    cout<< numeros[i] << endl;
                }
            }
        }
        else if (opcion == "b" || opcion == "B"){
            for (int i = 0; i <=4; i++){
                if (numeros[i] % 2 == 0){
                    cout<< numeros[i] << endl;
                }
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