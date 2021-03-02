#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include <iostream>

using namespace std;
/**
 * Clase base
 */
class Vehiculo {
private:
    string nombre;
    int numRuedas;
    bool motor;
    int potenciaMotor;
    bool combustible;
    string tipoCombustible;
    string color;
    bool alas;
    bool reactores;
    bool trenAterrizaje;
    int numVagones;
    string reparacion;
    string matricula;


public:
    Vehiculo(string, int, bool, int, bool, string, string, bool, bool, bool, int, string, string);
    bool esBicicleta();
    bool esTriciclo();
    bool esMotocicleta();
    bool esCoche();
    bool esCocheDeportivo();
    bool esAvion();
    bool esTren();
};

#endif // VEHICULO_H
