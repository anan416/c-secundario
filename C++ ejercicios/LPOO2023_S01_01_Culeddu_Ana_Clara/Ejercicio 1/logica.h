#include <string>

using namespace std;

class logica{
    public:
        string mensaje;
        string ingresarPalabra(string pal);
    private:
        bool validacion(string pal);
        string es_capicua(string pal);
};