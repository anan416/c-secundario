#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <cstring>
#include "Archivos.h"

using namespace std;

void Archivos::guardar(string palabras[], string palindromas[]){
    ofstream verbos, palabra, capicuas;
    string pal;
    verbos.open("verbos.txt", ios::app);
    palabra.open("palabras.txt", ios::app);
    capicuas.open("capicuas.txt", ios::app);
    for (int i = 0; i < palabras->length();i++){
        pal = palabras[i];
        int tamano = pal.length();
        char ultimo_caracter = pal[tamano -1];
        char segundo_caracter = pal[tamano - 2];
        if(ultimo_caracter == 'r' || ultimo_caracter == 'R') {
            if (segundo_caracter == 'A' || segundo_caracter == 'E' || segundo_caracter == 'I' || segundo_caracter == 'a' || segundo_caracter == 'e' || segundo_caracter == 'i') {     
                verbos << pal << endl; 
            }
            else{
                palabra << pal << endl;
            }
        }
        else{
            palabra << pal << endl;    
        }    
    }
    for(int i = 0; i < palindromas->length();i++){
        capicuas << palindromas[i] << endl;
    }
    palabra.close();
    verbos.close();
    capicuas.close();
    cout << "Palabras: " << endl;
    encriptar(palabras);
    cout << "Palindromas: " << endl;
    encriptar(palindromas);
}


void Archivos::encriptar(string palabras[]){
    string llave;
    ofstream encriptado;
    string encriptacion = "";
    string pal;
    encriptado.open("encriptado.txt", ios::app);
    cout << "Ingrese caracter llave para encriptar: " << endl;
    bool salida = false;
    while(salida == false){
        cin >> llave;
        if(llave.length() == 1){
            salida = true;
        }
        else{
            cout << "ERROR! Debe ser de un caracter" << endl;
        }
    }
    for (int j = 0; j < palabras->length(); j++){
        pal = palabras[j];
        for (int i = 0; i < pal.length(); i++){
            encriptacion += pal[i] ^ llave[i % llave.length()];
		    encriptado << encriptacion << endl;
        }
    }
    encriptado.close();

}
