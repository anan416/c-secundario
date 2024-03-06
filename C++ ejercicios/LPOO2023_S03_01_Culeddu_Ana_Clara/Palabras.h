#include <string>
#include "Sistema.h"

using namespace std;

class Palabras : public Sistema{
    public:
        void guardar(string par, string nombres[]);
    private:
        void encontrarNombres(string nombres[], string palabras[]);
        void encontrarCapicuas(string palabras[]);
};