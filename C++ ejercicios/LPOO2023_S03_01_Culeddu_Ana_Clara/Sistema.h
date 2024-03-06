#include <string>

using namespace std;

class Sistema{
    public:
        string par;
        void ingresarNombres();
    private:
        bool validar(string par);
        bool validarNombre(string nombre);
        void ingresar(string par, string nombres[]);
};