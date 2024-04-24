#include <iostream>
#include <fstream>

#include "producto.h"

using namespace std;

int main()
{
    fstream archivo;

    archivo.open("productos.txt", ios::app);

    if (!archivo.is_open())
    {
        cout << endl << "Error al abrir productos.txt" << endl;
    }
    else
    {
        Producto prod1;
        prod1.setNombre("Gansito");
        prod1.setPrecio(18.5);
        prod1.setExistencia(14);

        archivo << prod1;
        archivo.close();
    }

    archivo.open("productos.txt", ios::in);
    if (!archivo.is_open())
    {
        cout << endl << "Error al abrir productos.txt" << endl;
    }
    else
    {
        Producto prod;
        while (archivo >> prod)
        {
            cout << prod;
        }

        archivo.close();
    }

    return 0;
}