#include <iostream>
#include "Tienda.h"
using namespace std;

int main() {
    Tienda t;
    int opcion;

    do {
        cout << "\n=== MENU TIENDA ECOLOGICA ===\n";
        cout << "1. Agregar producto\n";
        cout << "2. Mostrar productos\n";
        cout << "3. Registrar cliente\n";
        cout << "4. Registrar venta\n";
        cout << "5. Mostrar ventas\n";
        cout << "6. Valor total inventario\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: t.agregarProducto(); break;
            case 2: t.mostrarProductos(); break;
            case 3: t.registrarCliente(); break;
            case 4: t.registrarVenta(); break;
            case 5: t.mostrarVentas(); break;
            case 6: t.valorTotalInventario(); break;
        }
    } while (opcion != 0);

    cout << "Saliendo del sistema...\n";
    return 0;
}
