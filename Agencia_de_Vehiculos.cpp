#include <iostream>
#include <vector>
#include "Persona.h"
#include "Vehiculo.h"
#include "Coche.h"
#include "Moto.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Persona.cpp"
#include "Vehiculo.cpp"
#include "Coche.cpp"
#include "Moto.cpp"
#include "Cliente.cpp"
#include "Empleado.cpp"

using namespace std;

const int EMPLEADO_ID = 12345;

void menuCliente(Cliente& cliente, vector<Vehiculo*>& vehiculos) {
    int opcion;
    do {
        cout << "\nMenu Cliente:\n";
        cout << "1. Ver Vehículos Disponibles\n";
        cout << "2. Comprar Vehículo\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cliente.verVehiculos(vehiculos);
            break;
        case 2:
            cliente.comprarVehiculo(vehiculos);
            break;
        case 3:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opción no válida. Intente de nuevo.\n";
            break;
        }
    } while (opcion != 3);
}

void menuEmpleado(Empleado& empleado, vector<Vehiculo*>& vehiculos) {
    int opcion;
    do {
        cout << "\nMenu Empleado:\n";
        cout << "1. Ver Vehículos Disponibles\n";
        cout << "2. Agregar Vehículo\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            empleado.verVehiculos(vehiculos);
            break;
        case 2: {
            string tipo, modelo, marca;
            int anio, plazas, cilindrada;
            float precio;
            cout << "Ingrese el tipo de vehículo (coche/moto): ";
            cin >> tipo;
            if (tipo == "coche") {
                cout << "Modelo: ";
                cin >> modelo;
                cout << "Año de fabricación: ";
                cin >> anio;
                cout << "Marca: ";
                cin >> marca;
                cout << "Plazas: ";
                cin >> plazas;
                cout << "Precio: ";
                cin >> precio;
                empleado.agregarVehiculo(vehiculos, new Coche(marca, anio, modelo, plazas, precio));
            } else if (tipo == "moto") {
                cout << "Modelo: ";
                cin >> modelo;
                cout << "Año de fabricación: ";
                cin >> anio;
                cout << "Marca: ";
                cin >> marca;
                cout << "Cilindrada: ";
                cin >> cilindrada;
                cout << "Precio: ";
                cin >> precio;
                empleado.agregarVehiculo(vehiculos, new Moto(marca, anio, modelo, cilindrada, precio));
            } else {
                cout << "Tipo de vehículo no válido.\n";
            }
            break;
        }
        case 3:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opción no válida. Intente de nuevo.\n";
            break;
        }
    } while (opcion != 3);
}

int main() {
    vector<Vehiculo*> vehiculos;

    vehiculos.push_back(new Coche("Toyota", 2020, "Camry", 5, 30000.0f));
    vehiculos.push_back(new Moto("Yamaha", 2019, "Deportiva", 1000, 15000.0f));

    int opcion;
    do {
        cout << "\nBienvenido. ¿Eres un cliente o un empleado?\n";
        cout << "1. Cliente\n";
        cout << "2. Empleado\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
            string nombre, email;
            cout << "Ingrese su nombre: ";
            cin >> nombre;
            cout << "Ingrese su email: ";
            cin >> email;
            Cliente cliente(nombre, email);
            menuCliente(cliente, vehiculos);
            break;
        }
        case 2: {
            string nombre;
            int id;
            cout << "Ingrese su nombre: ";
            cin >> nombre;
            cout << "Ingrese su ID de empleado: ";
            cin >> id;
            if (id == EMPLEADO_ID) {
                Empleado empleado(nombre, id);
                menuEmpleado(empleado, vehiculos);
            } else {
                cout << "ID de empleado no válido. Acceso denegado.\n";
            }
            break;
        }
        case 3:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opción no válida. Intente de nuevo.\n";
            break;
        }
    } while (opcion != 3);

    for (Vehiculo* vehiculo : vehiculos) {
        delete vehiculo;
    }

    return 0;
}