#ifndef UI_H
#define UI_H
#include "crearvehiculoui.h"
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
    CrearVehiculoUI ventanaCrearVehiculo;

public:
    UI(QApplication&);
};

#endif // UI_H
