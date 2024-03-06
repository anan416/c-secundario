#include <string>

using namespace std;

class Sistema{
    public:
        int num;
        void ingresarNumero(int numeros[]);
        void verPorBase(string opcion, int numeros[]);
    private:
        bool validar(int num);
};