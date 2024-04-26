#include <iostream>
#include "empleado.h"

using namespace std;

int main()
{
    Empleado obj;
    obj.menuInical();
    system("cls");
    obj.cargar();
    system("cls");
    obj.mostrar();
    obj.verificarCargo();


    return 0;
}
