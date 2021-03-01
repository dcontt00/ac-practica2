#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>

using namespace std;

class Vehiculo {
private:
    string nombre;
    int numRuedas; //Se podráelegirentre2,3,4,6y40.
    bool motor;
    int potenciaMotor; // El motor deberá tener entre 80 y 450 cv. La potencia del motor solo se podrá elegir si el vehículo tiene motor.
    bool combustible;
    /**
     * Eléctrico, gasolina, diésel, híbrido o queroseno. El tipo de
     * combustible solo se podrá elegir si el vehículo tiene combustible.
    */
    string tipoCombustible;

    /**
     * Blanco, Negro, Rojo, Azul, Amarillo y Verde.
     */
    string color;
    bool alas;
    bool reactores;
    bool trenAterrizaje;
    bool locomotora;
    int vagones; //Podrá tener 0 vagones o entre 5 y 20 vagones.
    string reparacion; //Rueda de repuesto o Kit de reparación de pinchazos.
    
    /**
     * siguiendo el patrón de 4 números (desde el 0000-9999) seguido de 3 letras. No
     * se pueden utilizar vocales en las matrículas
     */ 
    string matricula; 


public:
    
};


#endif // VEHICULO_H
