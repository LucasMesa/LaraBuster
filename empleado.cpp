#include "empleado.h"
#include <iostream>
using namespace std;
//#include rlutil

    string _nombre;
    string _direccion;
    string _correo;
    int _dni;
    int _legajo;
    int _puesto;

    Empleado::Empleado(){
    _nombre = "Vacio";
    _direccion = "Vacio";
    _correo = "Vacio";
    _dni = 0;
    _legajo = 0;
    _puesto = 0;

    }
    Empleado::Empleado(string nombre, string direccion,string correo,int doc,int legajo,int puesto){
    _nombre = nombre;
    _direccion = direccion;
    _dni = doc;
    _legajo = legajo;
    _puesto = puesto;
    }

    void Empleado::setNombre(string nombre){
    _nombre = nombre;
    }
    void Empleado::setDireccion(string direccion){
    _direccion = direccion;
    }
    void Empleado::setCorreo(string correo){
    _correo = correo;
    }
    void Empleado::setDni(int doc){
    _dni = doc;
    }
    void Empleado::setLegajo(int legajo){
    _legajo = legajo;
    }
    void Empleado::setPuesto(int puesto){
    _puesto = puesto;
    }

    string Empleado::getNombre(){
    return _nombre;
    }
    string Empleado::getDireccion(){
    return _direccion;
    }
    string Empleado::getCorreo(){
    return _correo;
    }
    int Empleado::getDni(){
    return _dni;
    }
    int Empleado::getLegajo(){
    return _legajo;
    }
    int Empleado::getPuesto(){
    return _puesto;
    }

    void Empleado::cargar(){
    cin.ignore();
    cout << "Nombre: " << endl;
    getline(cin,_nombre);
    cout << "Domicilio: " << endl;
    getline(cin,_direccion);
    cout << "Correo: " << endl;
    cin >> _correo;
    cout << "legajo: " << endl;
    cin >> _legajo;
    cout << "Documento: " << endl;
    cin >> _dni;
    cout <<"Puesto : 1-Gerente, 2-Encargado, 3-Vendedor" << endl;
    cin >> _puesto;
    }

    void Empleado::mostrar(){
    cout << "Nombre : " << _nombre << endl;
    cout << "Domicilio : " << _direccion << endl;
    cout << "Correo : " << _correo << endl;
    cout << "Legajo : " << _legajo << endl;
    cout << "Documento : " << _dni << endl;
    cout << "Puesto : " << _puesto << endl;
    }


    void Empleado::menuInical(){
    int numLegajo;
    int password;
    cout << "Ingrese su numero de legajo :" << endl;
    cin >> numLegajo;
    cout << "Ingrese su password :" << endl;
    cin >> password;

    }
    void Empleado::menuVendedor(){

    cout << "Indique que desea hacer :" << endl;
    cout << "1-Vender pelicula" << endl;
    cout << "2-Vender Juego/s" << endl;
    cout << "3-Alquiler de Pelicula" << endl;
    cout << "4-Alquiler de juego" << endl;
    }
 void Empleado::verificarCargo(){

    int opc;
    opc = getPuesto();
    switch(opc){
    case 1:
        break;
    case 2:
        break;
    case 3:
        menuVendedor();
        break;
    }

    }

    Empleado::~Empleado(){
    cout << "Finalizo el programa";
    };



