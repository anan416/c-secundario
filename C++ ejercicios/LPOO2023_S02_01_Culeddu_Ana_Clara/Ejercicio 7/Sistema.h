#include <string>

using namespace std;

class Sistema{
    public:
        int num;
        string pal;
        void ingreso(int numeros[]);
        void ingreso(string palabras[]);
        void operar(int numeros[], string palabras[]);
    private:
        bool validar(int num);
        bool validar(string pal);
};