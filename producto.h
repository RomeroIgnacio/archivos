#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <istream>

using namespace std;

class Producto
{
    public:
        Producto();
        ~Producto();

        string getNombre();
        void setNombre(const string& valor);

        float getPrecio();
        void setPrecio(float valor);

        int getExistencia();
        void setExistencia(int valor);

        friend ostream& operator << (ostream& os, const Producto& obj);
        friend istream& operator >> (istream& is, Producto& obj);

    private:
        string nombre;
        float precio;
        int existencia;
};

#endif