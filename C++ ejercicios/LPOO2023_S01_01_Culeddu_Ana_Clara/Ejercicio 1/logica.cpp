#include <string>
#include <iostream>
#include "logica.h"

using namespace std;

string logica::ingresarPalabra(string pal){
	bool mientras=true;
	while(mientras==true && pal!="FIN"){
		cout<<"Ingrese palabra: ";
		cin>>pal;
		if(validacion(pal)==true){
			mensaje=es_capicua(pal);
			mientras=false;
		}
		else if(pal!="FIN"){
			cout<<"INGRESO INVALIDO!"<<endl<<"VUELVA A INTENTAR o ESCRIBA FIN"<<endl;
			mensaje="ADIOS";
			
			
		}    
	}
}

string logica::es_capicua(string pal){
	string resultado="ES CAPICUA";

	if(pal[4]!=pal[0] || pal[3]!=pal[1]){
		
		resultado="NO "+resultado;
		
	}

	return resultado;    
};

bool logica::validacion(string pal){
	bool resultado=true;
	
	if(pal.length()!=5){
		resultado=false;
	}
	return resultado;    
};

