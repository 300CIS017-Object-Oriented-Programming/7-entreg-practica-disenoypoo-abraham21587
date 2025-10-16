//
// Created by Usuario on 16/10/2025.
//

#include "Cliente.h"
#include <string>   // por seguridad, también puede quedarse
using namespace std;

Cliente::Cliente() {}

Cliente::Cliente(string n) {
    nombre = n;
}

Cliente::~Cliente() {}

string Cliente::getNombre() {
    return nombre;
}