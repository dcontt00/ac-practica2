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
    this->setTipo();
}

string Vehiculo::getNombre(){
    return nombre;
}
string Vehiculo::getNumRuedas(){
    return to_string(numRuedas);
}
string Vehiculo::getMotor(){
    if(motor){
        return "Si";
    }else{
        return "No";
    }
}
string Vehiculo::getPotencia(){
    return to_string(potenciaMotor);
}
string Vehiculo::getCombustible(){
    if(combustible){
        return "Si";
    }else{
        return "No";
    }
}
string Vehiculo::getTipoCombustible(){
    return tipoCombustible;
}
string Vehiculo::getColor(){
    return color;
}
string Vehiculo::getAlas(){
    if(alas){
        return "Si";
    }else{
        return "No";
    }
}
string Vehiculo::getReactores(){
        if(reactores){
            return "Si";
        }else{
            return "No";
        }
}

string Vehiculo::getTrenAterrizaje(){
    if(trenAterrizaje){
        return "Si";
    }else{
        return "No";
    }
}
string Vehiculo::getLocomotora(){
    if(locomotora){
        return "Si";
    }else{
        return "No";
    }
}
string Vehiculo::getNumVagones(){
    return to_string(numVagones);
}
string Vehiculo::getReparacion(){
    return reparacion;
}
string Vehiculo::getMatricula(){
    return matricula;
}

string Vehiculo::getTipo(){
    return tipo;
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
    (this->reparacion == "Kit reparación");
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
           (this->reparacion == "Kit reparación");
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
    (this->reparacion == "Kit reparación");
}

/**
 * Combrueba si es un coche
 * @return
 */
bool Vehiculo::esCoche() {
    return (this->numRuedas == 4) &&
    this->motor &&
    (this->potenciaMotor >= 80) && 
    (this->potenciaMotor<= 250) &&
    this->combustible &&
    (this->tipoCombustible == "Eléctrico" || this->tipoCombustible == "Gasolina" || this->tipoCombustible == "Diesel" || this->tipoCombustible == "Híbrido" ) &&
    !this->alas &&
    !this->reactores &&
    !this->trenAterrizaje &&
    !this->locomotora &&
    (this->numVagones == 0) &&
    (this->reparacion == "Rueda repuesto");
}

/**
 * Combrueba si es un coche deportivo
 * @return
 */
bool Vehiculo::esCocheDeportivo() {
    return (this->numRuedas == 4) &&
    this->motor &&
    (this->potenciaMotor >= 80) && 
    (this->potenciaMotor<= 450) &&
    this->combustible &&
    (this->tipoCombustible == "Eléctrico" || this->tipoCombustible == "Gasolina") &&
    !this->alas &&
    !this->reactores &&
    !this->trenAterrizaje &&
    !this->locomotora &&
    (this->numVagones == 0) &&
    (this->reparacion == "Kit reparación");
}

/**
 * Combrueba si es un avion
 * @return
 */
bool Vehiculo::esAvion() {
    return (this->numRuedas == 6) &&
    this->motor &&
    (this->potenciaMotor == 450) &&
    this->combustible &&
    (this->tipoCombustible == "Queroseno") &&
    (this->color == "Blanco") &&
    this->alas &&
    this->reactores &&
    this->trenAterrizaje &&
    !this->locomotora &&
    (this->numVagones == 0) &&
    (this->reparacion == "Rueda repuesto");

}

/**
 * Combrueba si es un tren
 * @return
 */
bool Vehiculo::esTren() {
  return (this->numRuedas == 40) &&
  this->motor &&
  (this->potenciaMotor == 450) &&
  this->combustible &&
  (this->tipoCombustible == "Eléctrico" || this->tipoCombustible == "Diesel") &&
  (this->color == "Negro") &&
  !this->alas &&
  !this->reactores &&
  !this->trenAterrizaje &&
  this->locomotora &&
  (this->numVagones >= 5 && this->numVagones <= 20) &&
  (this->reparacion == "Rueda repuesto");
}

void Vehiculo::setTipo(){
    if(this->esBicicleta()){
        tipo = "Bicicleta";
    }else if(this->esTriciclo()){
        tipo = "Triciclo";
    }else if(this->esMotocicleta()){
        tipo = "Motocicleta";
    }else if(this->esCoche()){
        tipo = "Coche";
    }else if(this->esCocheDeportivo()){
        tipo = "Coche Deportivo";
    }else if(this->esAvion()){
        tipo = "Avion";
    }else if(this->esTren()){
        tipo = "Tren";
    }else{
        tipo="otra cosa";
    }
}

