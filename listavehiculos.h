#ifndef LISTAVEHICULOS_H
#define LISTAVEHICULOS_H
#include <Vehiculo.h>
#include <vector>


class ListaVehiculos
{

private:
    vector <Vehiculo> lista;
    int numVehiculos;
public:
    ListaVehiculos();
    vector <Vehiculo> getLista();
    void añadirVehiculo(Vehiculo);
};

#endif // LISTAVEHICULOS_H
