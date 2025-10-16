//
// Created by Usuario on 16/10/2025.
//

#ifndef POOSISTEMAGESTIONVENTAS_TIENDA_H
#define POOSISTEMAGESTIONVENTAS_TIENDA_H
#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
using namespace std;

class Tienda {
private:
    vector<Producto*> productos;
    vector<Cliente*> clientes;
    vector<Venta*> ventas;

public:
    Tienda();
    ~Tienda();

    void agregarProducto();
    void mostrarProductos();
    void registrarCliente();
    void registrarVenta();
    void mostrarVentas();
    void valorTotalInventario();
};
#endif //POOSISTEMAGESTIONVENTAS_TIENDA_H