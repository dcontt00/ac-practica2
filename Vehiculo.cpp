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
 * @param lmtr Locomotora
 * @param nV Número de Vagones
 * @param rpc Reparación
 * @param mtrl Matricula
 */
Vehiculo::Vehiculo(string nbr, int nR, bool mtr, int pM, bool cbl, string tC, string clr, bool als, bool rct, bool tA, bool lmtr, int nV, string rpc, string mtl) {
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
    locomotora = lmtr;
    numVagones = nV;
    reparacion = rpc;
    matricula = mtl;
}

/**
 * Combrueba si es una bicicleta
 * @return
 */
bool Vehiculo::esBicicleta() {
    return (this->numRuedas == 2) &&
    !this->motor &&
    (this->potenciaMotor == 0) &&
    !this->combustible  &&
    (this->tipoCombustible == "") &&
    !this->alas &&
    !this->reactores &&
    !this->trenAterrizaje &&
    !this->locomotora &&
    (this->numVagones == 0) &&
    (this->reparacion == "kit de reparacion de pinchazos") &&
    (this->matricula == "");
}

/**
 * Combrueba si es un triciclo
 * @return
 */
bool Vehiculo::esTriciclo() {
    return (this->numRuedas == 3) &&
           !this->motor &&
           (this->potenciaMotor == 0) &&
           !this->combustible  &&
           (this->tipoCombustible == "") &&
           !this->alas &&
           !this->reactores &&
           !this->trenAterrizaje &&
           !this->locomotora &&
           (this->numVagones == 0) &&
           (this->reparacion == "kit de reparacion de pinchazos") &&
           (this->matricula == "");
}

/**
 * Combrueba si es una motocicleta
 * @return
 */
bool Vehiculo::esMotocicleta() {
    return (this->numRuedas == 2) &&
    this->motor &&
    (this->potenciaMotor >= 80) &&
    (this->potenciaMotor <= 450) &&
    this->combustible  &&
    (this->tipoCombustible == "Eléctrico" || this->tipoCombustible == "Gasolina" || this->tipoCombustible == "Diesel" || this->tipoCombustible == "Híbrido" ) &&
    !this->alas &&
    !this->reactores &&
    !this->trenAterrizaje &&
    !this->locomotora &&
    (this->numVagones == 0) &&
    (this->reparacion == "kit de reparacion de pinchazos") &&
    (this->matricula == "");
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
