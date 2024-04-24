#include "producto.h"

#include <istream>
#include <ostream>
#include <string>

using namespace std;

Producto::Producto() {}

Producto::~Producto() {}

string Producto::getNombre()
{
    return nombre;
}

void Producto::setNombre(const string& valor)
{
    nombre = valor;
}

float Producto::getPrecio()
{
    return precio;
}

void Producto::setPrecio(float valor)
{
    precio = valor;
}

int Producto::getExistencia()
{
    return existencia;
}

void Producto::setExistencia(int valor)
{
    existencia = valor;
}

ostream& operator << (ostream& os, const Producto& obj)
{
    os << obj.nombre << "|" << obj.precio << "|" << obj.existencia << endl;
    return os;
}

istream& operator >> (istream& is, Producto& obj)
{
    string aux;
    getline(is, aux, '|');

    if (aux.size() > 0)
    {
        obj.nombre = aux;
        getline(is, aux, '|');
        obj.precio = stof(aux);
        getline(is, aux);
        obj.existencia = stoi(aux);
    }

    return is;
}