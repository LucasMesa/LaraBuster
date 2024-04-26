#pragma once
#include <iostream>
using namespace std;
class Empleado{
private:
    string _nombre;
    string _direccion;
    string _correo;
    int _dni;
    int _legajo;
    int _puesto;
public:
    Empleado();
    Empleado(string nombre,string direccion,string correo, int dni, int legajo, int puesto);

    void setNombre(string nombre);
    void setDireccion(string direccion);
    void setCorreo(string correo);
    void setDni(int doc);
    void setLegajo(int legajo);
    void setPuesto(int puesto);

    string getNombre();
    string getDireccion();
    string getCorreo();
    int getDni();
    int getLegajo();
    int getPuesto();

    void cargar();
    void mostrar();
    void menuInical();
    void menuVendedor();
    void verificarCargo();

    ~Empleado();
    };
