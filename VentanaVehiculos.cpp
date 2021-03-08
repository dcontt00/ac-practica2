#include "VentanaVehiculos.h"

VentanaVehiculos::VentanaVehiculos(){

   /////Ventana mostrar vehiculos///////
   QWidget ventanaMostrarVehiculos;
   ventanaMostrarVehiculos.setWindowTitle("Lista Vehiculos");
   ventanaMostrarVehiculos.resize(400,200);
   QVBoxLayout layout1(&ventanaMostrarVehiculos);
   ventanaMostrarVehiculos.show();
  }
