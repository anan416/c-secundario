#include <string>

using namespace std;

class Sistema{
    public:
        string pal;
        void ingresarPalabra(string palabras[]);
        void buscar(string opcion, string palabras[]);
    //private:
        bool validar(string pal);
};