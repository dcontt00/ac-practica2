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
    boton4.setText("Guardar vehiculo");
    boton1.resize(150,30);
    boton2.resize(150,30);
    boton3.resize(150,30);
    boton1.setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    boton2.setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    boton3.setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    boton4.setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    layout.addWidget(&boton1);
    layout.addWidget(&boton2);
    layout.addWidget(&boton3);

    ////////////////////////////////Ventana creacion vehiculo////////////////////////////////
    ventanaCrearVehiculo.setWindowTitle("Crear vehiculo");
    ventanaCrearVehiculo.resize(250,700);
    QVBoxLayout layout2(&ventanaCrearVehiculo);

    ////////////////Textos////////////////
    labelNombre.setText("Nombre del vehículo:");
    labelRuedas.setText("Número de ruedas:");
    labelMotor.setText("Tiene motor:");
    labelPotenciaMotor.setText("Potencia del motor:");
    labelCombustible.setText("Tiene combustible:");
    labelTipoCombustible.setText("Tipo combustible");
    labelColor.setText("Color del vehículo:");
    labelAlas.setText("Tiene alas:");
    labelReactores.setText("Tiene reactores:");
    labelTrenAterrizaje.setText("Tiene tren de aterrizaje:");
    labelLocomotora.setText("Tiene locomotora:");
    labelVagones.setText("Número de vagones:");
    labelReparacion.setText("Sistema de reparación:");
    labelMatricula.setText("Matrícula:");

    ////////////////Numero de Ruedas////////////////
    seleccionRuedas.addItem("2");
    seleccionRuedas.addItem("3");
    seleccionRuedas.addItem("4");
    seleccionRuedas.addItem("6");
    seleccionRuedas.addItem("40");

    ////////////////Check Motor////////////////
    QObject::connect(&checkMotor,SIGNAL(checked(true)),&sliderPotenciaMotor,SLOT(checkable(true)));

    ////////////////Potencia del Motor////////////////
    visualPotenciaMotor.setRange(80,450); //Cuadro indicador de potencia
    visualPotenciaMotor.setFormat("%v");
    sliderPotenciaMotor.setRange(80,450); //Barra ceslizante
    sliderPotenciaMotor.setOrientation(Qt::Horizontal);
    QObject::connect(&sliderPotenciaMotor, SIGNAL(valueChanged(int)),&visualPotenciaMotor, SLOT(setValue(int)));

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
    //NOMBRE
    layout2.addWidget(&labelNombre);
    layout2.addWidget(&txtNombre);
    //NUMERO DE RUEDAS
    layout2.addWidget(&labelRuedas);
    layout2.addWidget(&seleccionRuedas);
    //MOTOR
    layout2.addWidget(&labelMotor);
    layout2.addWidget(&checkMotor);
    //POTENCIA
    layout2.addWidget(&labelPotenciaMotor);
    layout2.addWidget(&visualPotenciaMotor);
    layout2.addWidget(&sliderPotenciaMotor);
    //COMBUSTIBLE
    layout2.addWidget(&labelCombustible);
    layout2.addWidget(&checkCombustible);
    //TIPO DE COMBUSTIBLE
    layout2.addWidget(&labelTipoCombustible);
    layout2.addWidget(&seleccionTipoCombustible);
    //COLOR DEL COCHE
    layout2.addWidget(&labelColor);
    layout2.addWidget(&seleccionColor);
    //ALAS
    layout2.addWidget(&labelAlas);
    layout2.addWidget(&checkAlas);
    //REACTORES
    layout2.addWidget(&labelReactores);
    layout2.addWidget(&checkReactores);
    //TREN DE ATERRIZAJE
    layout2.addWidget(&labelTrenAterrizaje);
    layout2.addWidget(&checkTrenAterrizaje);
    //LOCOMOTORA
    layout2.addWidget(&labelLocomotora);
    layout2.addWidget(&checkLocomotora);
    //VAGONES
    layout2.addWidget(&labelVagones);

    //REPARACIONES
    layout2.addWidget(&labelReparacion);
    layout2.addWidget(&seleccionReparacion);

    //MATRICULA
    layout2.addWidget(&labelMatricula);

    //GUARDAR VEHICULO
    layout2.addWidget(&boton4);


    ////////////////Acciones del Resto de Botones////////////////
    QObject::connect(&boton1, SIGNAL(clicked()),&ventanaCrearVehiculo, SLOT(show()));
    QObject::connect(&boton3, SIGNAL(clicked()),&a, SLOT(quit()));

    ventanaPrincipal.show();
    a.exec();
}
