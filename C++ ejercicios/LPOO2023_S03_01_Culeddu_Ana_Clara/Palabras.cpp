#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include "Archivos.h"

using namespace std;

void Palabras::guardar(string par, string nombres[]){
    string palabras[50];
    string palabra;
    int cont = 0;
    for(int i = 0; i < par.length();i++){
        if(par[i] == ' '){
            palabras[cont] = palabra;
            cont += 1;
            palabra = "";
        }
        else{
            palabra += par[i];
        }
    }
    palabras[cont] = palabra;
    encontrarNombres(nombres, palabras);
}

void Palabras::encontrarNombres(string nombres[], string palabras[]){
    cout << "Nombres encontrados: " << endl;
    for (int i = 0; i < palabras->length();i++){
        for(int j = 0; j < nombres->length();j++){
            if(nombres[j] == palabras[i]){
                cout << nombres[j] << endl;
            }
        }
    }
    encontrarCapicuas(palabras);
}

void Palabras::encontrarCapicuas(string palabras[]){
    Archivos a;
    string pal;
    string palindromas[50];
    int cont = 0;
    cout << "Palabras palindromas: " << endl;
    for (int i = 0; i < palabras->length();i++){
        pal = palabras[i];
        char lugar4 = pal[4];
        char lugar0 = pal[0];
        char lugar3 = pal[3];
        char lugar1 = pal[1];
	    if(lugar4==lugar0 && lugar3==lugar1){
            cout << pal << endl;  
            palabras[i] = ' ';
            palindromas[cont] = pal;
            cont += 1;
	    }
    }    
    a.guardar(palabras, palindromas);
}


