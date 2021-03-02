#include "Vehiculo.h"


/**
 * Constructor de Vehiculo
 * @param nbr Nombre
 * @param nR Numero de Ruedas
 * @param mtr Motor
 * @param pM Potencia de motor
 * @param cbl Combustible
 * @param tC Tipo de Combustible
 * @param clr Color
 * @param als Alas
 * @param rct reactores
 * @param tA Tren de Aterrizaje
 * @param nV Número de Vagones
 * @param rpc Reparación
 * @param mtrl Matricula
 */
Vehiculo::Vehiculo(string nbr, int nR, bool mtr, int pM, bool cbl, string tC, string clr, bool als, bool rct, bool tA, int nV, string rpc, string mtrl) {
    nombre = nbr;
    numRuedas = nR;
    motor = mtr;
    potenciaMotor = pM;
    combustible = cbl;
    tipoCombustible = tC;
    color = clr;
    alas = als;
    reactores = rct;
    trenAterrizaje = tA;
    numVagones = nV;
    reparacion = rpc;
    matricula = mtrl;
}

/**
 * Combrueba si es una bicicleta
 * @return
 */
bool Vehiculo::esBicicleta() {

}

/**
 * Combrueba si es un triciclo
 * @return
 */
bool Vehiculo::esTriciclo() {

}

/**
 * Combrueba si es una motocicleta
 * @return
 */
bool Vehiculo::esMotocicleta() {

}

/**
 * Combrueba si es un coche
 * @return
 */
bool Vehiculo::esCoche() {

}

/**
 * Combrueba si es un coche deportivo
 * @return
 */
bool Vehiculo::esCocheDeportivo() {

}

/**
 * Combrueba si es un avion
 * @return
 */
bool Vehiculo::esAvion() {

}

/**
 * Combrueba si es un tren
 * @return
 */
bool Vehiculo::esTren() {

}
