#include "UI.h"

UI::UI(QApplication& a){
    ////////////////Ventana principal////////////////
    ventanaPrincipal.setWindowTitle("Vehiculos");
    ventanaPrincipal.resize(220,120);
    QVBoxLayout layout(&ventanaPrincipal);

    ////////////////Botonera////////////////
    boton1.setText("Crear vehiculo");
    boton2.setText("Mostrar lista");
    boton3.setText("Salir");

    boton1.resize(150,30);
    boton2.resize(150,30);
    boton3.resize(150,30);
    boton1.setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    boton2.setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    boton3.setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    layout.addWidget(&boton1);
    layout.addWidget(&boton2);
    layout.addWidget(&boton3);

    ////////////////////////////////Ventana creacion vehiculo////////////////////////////////
    ventanaCrearVehiculo.setWindowTitle("Crear vehiculo");
    ventanaCrearVehiculo.resize(250,700);


    ////////////////Acciones del Resto de Botones////////////////
    QObject::connect(&boton1, SIGNAL(clicked()),&ventanaCrearVehiculo, SLOT(show()));
    QObject::connect(&boton3, SIGNAL(clicked()),&a, SLOT(quit()));

    ventanaPrincipal.show();
    a.exec();
}
