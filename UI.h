#ifndef UI_H
#define UI_H
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include <QLabel>
#include <QComboBox>
#include <QSlider>
#include <QCheckBox>
#include <QSpinBox>
#include <QApplication>

using namespace std;
/**
 * Clase base
 */
class UI {
private:
    QPushButton boton1;
    QPushButton boton2;
    QPushButton boton3;
    QWidget ventanaPrincipal;
    QWidget ventanaCrearVehiculo;
    QLabel labelNombre,
           labelRuedas,
           labelMotor,
           labelPotenciaMotor,
           labelCombustible,
           labelTipoCombustible,
           labelColor,
           labelAlas,
           labelReactores,
           labelTrenAterrizaje,
           labelLocomotora,
           labelVagones,
           labelReparacion,
           labelMatricula;
    QLineEdit txtNombre;
    QCheckBox checkMotor,
              checkCombustible,
              checkAlas,
              checkReactores,
              checkTrenAterrizaje,
              checkLocomotora;
    QSlider sliderPotenciaMotor;
    QSpinBox spinPotenciaMotor;
    QComboBox seleccionRuedas;
    QComboBox seleccionTipoCombustible;
    QComboBox seleccionColor;
    QComboBox seleccionReparacion;

public:
    UI(QApplication&);
};

#endif // UI_H
