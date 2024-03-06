#include <string>
#include "Sistema.h"

using namespace std;

class Operaciones : public Sistema{
    public:
        int orden(int numeros[]);
        string orden(string palabras[]);
        int busqueda(int numeros[]);
        string busqueda(string palabras[]);
};