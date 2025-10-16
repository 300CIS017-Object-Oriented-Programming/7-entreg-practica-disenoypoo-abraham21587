//
// Created by Usuario on 16/10/2025.
//

#ifndef POOSISTEMAGESTIONVENTAS_VENTA_H
#define POOSISTEMAGESTIONVENTAS_VENTA_H
#include "Cliente.h"
#include "Producto.h"

class Venta {
private:
    Cliente* cliente;
    Producto* producto;
    int cantidad;
public:
    Venta();
    Venta(Cliente* c, Producto* p, int cant);
    ~Venta();
    float calcularTotal();
    void mostrarVenta();
};



#endif //POOSISTEMAGESTIONVENTAS_VENTA_H