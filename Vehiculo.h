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
    bool locomotora;
    int numVagones;
    string reparacion;
    string matricula;


public:
    Vehiculo(string, int, bool, int, bool, string, string, bool, bool, bool, bool, int, string, string);
    string getNombre();
    string getNumRuedas();
    string getMotor();
    string getPotencia();
    string getCombustible();
    string getTipoCombustible();
    string getColor();
    string getAlas();
    string getReactores();
    string getTrenAterrizaje();
    string getLocomotora();
    string getNumVagones();
    string getReparacion();
    string getMatricula();
    bool esBicicleta();
    bool esTriciclo();
    bool esMotocicleta();
    bool esCoche();
    bool esCocheDeportivo();
    bool esAvion();
    bool esTren();

};

#endif // VEHICULO_H
