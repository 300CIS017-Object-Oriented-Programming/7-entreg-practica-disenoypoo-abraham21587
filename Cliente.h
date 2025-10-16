//
// Created by Usuario on 16/10/2025.
//

#ifndef POOSISTEMAGESTIONVENTAS_CLIENTE_H
#define POOSISTEMAGESTIONVENTAS_CLIENTE_H


#include <string>    // 🔹 OBLIGATORIO
using namespace std;

class Cliente {
private:
    string nombre;

public:
    Cliente();
    Cliente(string n);
    ~Cliente();

    string getNombre();
};


#endif //POOSISTEMAGESTIONVENTAS_CLIENTE_H