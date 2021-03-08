#ifndef CREARVEHICULOUI_H
#define CREARVEHICULOUI_H
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include <QLabel>
#include <QComboBox>
#include <QSlider>
#include <QProgressBar>
#include <QCheckBox>
#include <QSizePolicy>


class CrearVehiculoUI: public QWidget
{
private:
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
    QProgressBar visualPotenciaMotor;
    QComboBox seleccionRuedas;
    QComboBox seleccionTipoCombustible;
    QComboBox seleccionColor;
    QComboBox seleccionReparacion;
    QPushButton boton4;
public:
    CrearVehiculoUI();
};

#endif // CREARVEHICULOUI_H
