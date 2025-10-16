//
// Created by Usuario on 16/10/2025.
//

#include "Tienda.h"
using namespace std;
#include <iostream>

Tienda::Tienda() {}
Tienda::~Tienda() {}

void Tienda::agregarProducto() {
    string c, n;
    float p;
    int cant;
    cout << "Codigo: "; cin >> c;
    cout << "Nombre: "; cin >> n;
    cout << "Precio: "; cin >> p;
    cout << "Cantidad: "; cin >> cant;
    productos.push_back(new Producto(c, n, p, cant));
}

void Tienda::mostrarProductos() {
    cout << "\n--- Productos ---\n";
    for (auto p : productos) p->mostrarInfo();
}

void Tienda::registrarCliente() {
    string n;
    cout << "Nombre del cliente: ";
    cin >> n;
    clientes.push_back(new Cliente(n));
}

void Tienda::registrarVenta() {
    if (clientes.empty() || productos.empty()) {
        cout << "No hay clientes o productos registrados.\n";
        return;
    }
    int idxC, idxP, cant;
    mostrarProductos();
    cout << "Seleccione cliente (0.." << clientes.size()-1 << "): ";
    cin >> idxC;
    cout << "Seleccione producto (0.." << productos.size()-1 << "): ";
    cin >> idxP;
    cout << "Cantidad: "; cin >> cant;

    Producto* prod = productos[idxP];
    if (cant > prod->getCantidad()) {
        cout << "Stock insuficiente.\n";
        return;
    }
    prod->setCantidad(prod->getCantidad() - cant);
    ventas.push_back(new Venta(clientes[idxC], prod, cant));
}

void Tienda::mostrarVentas() {
    cout << "\n--- Ventas ---\n";
    for (auto v : ventas) v->mostrarVenta();
}

void Tienda::valorTotalInventario() {
    float total = 0;
    for (auto p : productos)
        total += p->getPrecio() * p->getCantidad();
    cout << "Valor total del inventario: $" << total << endl;
}