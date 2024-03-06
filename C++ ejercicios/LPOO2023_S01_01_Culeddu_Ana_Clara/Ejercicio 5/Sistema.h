#include <string>

using namespace std;

class Sistema{
    public:
        string parr, llave;
        void ingresarParrafo(string parr);
        void ingresoLlave(string llave);
    private:
        bool validarParrafo(string parr);
        bool validarLlave(string llave);
        string encriptar(string parr, string llave);
};