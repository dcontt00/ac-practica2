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

    ////////////////Ventana creacion vehiculo////////////////
    ventanaCrearVehiculo.setWindowTitle("Crear vehiculo");
    ventanaCrearVehiculo.resize(250,700);
    QVBoxLayout layout2(&ventanaCrearVehiculo);

    ////////////////Textos////////////////
    labelNombre.setText("Nombre del vehiculo");
    labelRuedas.setText("Numero de ruedas");
    labelMotor.setText("Tiene motor?");
    labelPotenciaMotor.setText("potencia motor");
    labelCombustible.setText("Tiene combustible?");
    labelTipoCombustible.setText("Tipo combustible");
    labelColor.setText("Color");
    labelAlas.setText("Tiene Alas?");
    labelReactores.setText("Tiene Reactores?");
    labelTrenAterrizaje.setText("Tiene tren de aterrizaje?");
    labelLocomotora.setText("Tiene locomotora?");
    labelVagones.setText("número de vagones");
    labelReparacion.setText("Reparacion");
    labelMatricula.setText("Matricula");

    ////////////////Potencia del Motor////////////////
    spinPotenciaMotor.setRange(80,450); //Cuadro de numeros
    sliderPotenciaMotor.setRange(80,450); //Barra ceslizante

    QObject::connect(&spinPotenciaMotor, SIGNAL(valueChanged(int)),&sliderPotenciaMotor, SLOT(setValue(int)));
    QObject::connect(&sliderPotenciaMotor, SIGNAL(valueChanged(int)),&spinPotenciaMotor, SLOT(setValue(int)));

    ////////////////Numero de Ruedas////////////////
    seleccionRuedas.addItem("2");
    seleccionRuedas.addItem("3");
    seleccionRuedas.addItem("4");
    seleccionRuedas.addItem("6");
    seleccionRuedas.addItem("40");

    ////////////////Tipo de Combustible////////////////
    seleccionTipoCombustible.addItem("Eléctrico");
    seleccionTipoCombustible.addItem("Gasolina");
    seleccionTipoCombustible.addItem("Diesel");
    seleccionTipoCombustible.addItem("Híbrido");
    seleccionTipoCombustible.addItem("queroseno");

    ////////////////Color del Vehiculo////////////////
    seleccionColor.addItem("Blanco");
    seleccionColor.addItem("Negro");
    seleccionColor.addItem("Rojo");
    seleccionColor.addItem("Azul");
    seleccionColor.addItem("Amarillo");
    seleccionColor.addItem("Verde");

    ////////////////Seleccion de Reparacion////////////////
    seleccionReparacion.addItem("Rueda repuesto");
    seleccionReparacion.addItem("Kit reparacion");

    ////////////////Colocacion////////////////
    layout2.addWidget(&labelNombre);
    layout2.addWidget(&txtNombre);

    layout2.addWidget(&labelRuedas);
    layout2.addWidget(&seleccionRuedas);

    layout2.addWidget(&labelMotor);
    layout2.addWidget(&checkMotor);

    layout2.addWidget(&labelPotenciaMotor);
    layout2.addWidget(&sliderPotenciaMotor);
    layout2.addWidget(&spinPotenciaMotor);

    layout2.addWidget(&labelCombustible);
    layout2.addWidget(&checkCombustible);

    layout2.addWidget(&labelTipoCombustible);
    layout2.addWidget(&seleccionTipoCombustible);

    layout2.addWidget(&labelColor);
    layout2.addWidget(&seleccionColor);

    layout2.addWidget(&labelAlas);
    layout2.addWidget(&checkAlas);

    layout2.addWidget(&labelReactores);
    layout2.addWidget(&checkReactores);

    layout2.addWidget(&labelTrenAterrizaje);
    layout2.addWidget(&checkTrenAterrizaje);

    layout2.addWidget(&labelLocomotora);
    layout2.addWidget(&checkLocomotora);

    layout2.addWidget(&labelVagones);


    layout2.addWidget(&labelReparacion);
    layout2.addWidget(&seleccionReparacion);


    layout2.addWidget(&labelMatricula);


    ////////////////Acciones del Resto de Botones////////////////
    QObject::connect(&boton1, SIGNAL(clicked()),&ventanaCrearVehiculo, SLOT(show()));
    QObject::connect(&boton3, SIGNAL(clicked()),&a, SLOT(quit()));

    ventanaPrincipal.show();
    a.exec();
}
