#include "crearvehiculoui.h"

CrearVehiculoUI::CrearVehiculoUI()
{
    QVBoxLayout layout2(this);
    boton4.setText("Guardar vehiculo");
    boton4.setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

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
    seleccionTipoCombustible.addItem("Queroseno");

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
}
