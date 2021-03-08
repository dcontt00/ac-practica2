#include "listavehiculos.h"

ListaVehiculos::ListaVehiculos()
{
    numVehiculos=0;
}

vector <Vehiculo> ListaVehiculos::getLista(){
    return lista;
}

void ListaVehiculos::añadirVehiculo(Vehiculo vehiculo){
    lista.push_back(vehiculo);
    numVehiculos++;
}
