#include "mainwindow.h"
#include "UI.h"
#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include <QLabel>
#include <QComboBox>
#include <QSlider>
#include <QCheckBox>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    UI ui(a);

    /*
    ////////////////Ventana principal//////////////
    QWidget w;
    w.setWindowTitle("Vehiculos");
    w.resize(200,200);

    QVBoxLayout layout(&w);

    QPushButton boton1("Crear vehiculo");
    QPushButton boton2("Mostrar lista");
    QPushButton boton3("Salir");
    boton1.resize(150,30);
    boton2.resize(150,30);
    boton3.resize(150,30);
    layout.addWidget(&boton1);
    layout.addWidget(&boton2);
    layout.addWidget(&boton3);




   //////Ventan creacion vehiculo//////////
    QWidget ventanaCrearVehiculo;
    ventanaCrearVehiculo.setWindowTitle("Crear vehiculo");
    ventanaCrearVehiculo.resize(400,200);
    QVBoxLayout layout2(&ventanaCrearVehiculo);

    QPushButton boton4("Crear vehículo");

    //Labels
    QLabel labelNombre, labelRuedas, labelMotor, labelPotenciaMotor,labelCombustible, labelTipoCombustible, labelColor, labelAlas, labelReactores,labelTrenAterrizaje, labelLocomotora, labelVagones, labelReparacion, labelMatricula;
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


    QLineEdit txtNombre;


    QCheckBox checkMotor, checkCombustible, checkAlas, checkReactores, checkTrenAterrizaje, checkLocomotora;
    QSlider sliderPotenciaMotor(Qt::Horizontal);
    sliderPotenciaMotor.setRange(80,450);
    QSpinBox spinPotenciaMotor;
    spinPotenciaMotor.setRange(80,450);
    QObject::connect(&spinPotenciaMotor, SIGNAL(valueChanged(int)),&sliderPotenciaMotor, SLOT(setValue(int)));
    QObject::connect(&sliderPotenciaMotor, SIGNAL(valueChanged(int)),&spinPotenciaMotor, SLOT(setValue(int)));


    QComboBox seleccionRuedas;
    seleccionRuedas.addItem("2");
    seleccionRuedas.addItem("3");
    seleccionRuedas.addItem("4");
    seleccionRuedas.addItem("6");
    seleccionRuedas.addItem("40");


    QComboBox seleccionTipoCombustible;
    seleccionTipoCombustible.addItem("Eléctrico");
    seleccionTipoCombustible.addItem("Gasolina");
    seleccionTipoCombustible.addItem("Diesel");
    seleccionTipoCombustible.addItem("Híbrido");
    seleccionTipoCombustible.addItem("queroseno");

    QComboBox seleccionColor;
    seleccionColor.addItem("Blanco");
    seleccionColor.addItem("Negro");
    seleccionColor.addItem("Rojo");
    seleccionColor.addItem("Azul");
    seleccionColor.addItem("Amarillo");
    seleccionColor.addItem("Verde");


    QComboBox seleccionReparacion;
    seleccionReparacion.addItem("Rueda repuesto");
    seleccionReparacion.addItem("Kit reparacion");



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

    layout2.addWidget(&boton4);


    QObject::connect(&boton1, SIGNAL(clicked()),&ventanaCrearVehiculo, SLOT(show()));
    QObject::connect(&boton4, SIGNAL(clicked()),&txtNombre, SLOT(displayText()));



    /////Ventana mostrar vehiculos///////
    QWidget ventanaMostrarVehiculos;
    ventanaMostrarVehiculos.setWindowTitle("Lista Vehiculos");
    ventanaMostrarVehiculos.resize(400,200);
    QVBoxLayout layout3(&ventanaMostrarVehiculos);


    QObject::connect(&boton2, SIGNAL(clicked()),&ventanaMostrarVehiculos, SLOT(show()));
    QObject::connect(&boton3, SIGNAL(clicked()),&a, SLOT(quit()));
    w.show();
    txtNombre.displayText();

    */
    return 0;

}
