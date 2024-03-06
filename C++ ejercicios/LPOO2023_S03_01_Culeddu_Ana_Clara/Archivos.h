#include <string>
#include "Palabras.h"

using namespace std;

class Archivos : public Palabras{
    public:
        void guardar(string palabras[], string palindromas[]);
    private:
        void encriptar(string palabras[]);
};