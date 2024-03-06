#include <iostream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

void Sistema::ingresarNumero(int numeros[]){
	int cont = 0;
    cout<<"Ingrese numeros: "<<endl;
	while(cont != 4){
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
};

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

void Sistema::verPorBase(string opcion, int numeros[]){
    bool encontrado = false, salida = false;
    cout << "Ingrese número a convertir: " << endl;
    while (salida == false){
        cin >> num;
        for(int i = 0; i < 10; i++){
            if(numeros[i] == num){
                encontrado = true;
                salida = true;
            }
        }
        if (encontrado == false){
            cout << "No fue encontrado el numero" << endl;
            continue;
        }     
    }

    while (opcion != "C" || opcion != "c"){
        cout << "a - Convertir a binario \n b - Convertir a Octal \n c - Salir \n Elegir opcion:";
        cin >> opcion;
        if (opcion == "a" || opcion == "A"){
            string binario;
            while (num != 0){
                binario += ( num % 2 == 0 ? "0" : "1" );
                num /= 2;
            }
            cout << "El numero en binario es " << binario << endl;            
        }
        else if (opcion == "b" || opcion == "B"){
            int octal, r, i;
            while (num != 0){
                r = num%8;
                num /= 8;
                octal += r*i;
                i *=10;
            }
            cout << "El numero en octal es " << octal << endl;
        }
        else if (opcion == "c" || opcion == "C"){
            break;
        }
        else{
            cout << "Esa opción no existe." << endl;
        }
    }

}
