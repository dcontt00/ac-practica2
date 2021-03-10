#ifndef CREARVEHICULOUI_H
#define CREARVEHICULOUI_H

#include <QWidget>
#include <QObject>
#include <iostream>
#include <string>
#include <Vehiculo.h>
#include <listavehiculos.h>
#include <qstring.h>
namespace Ui {
class CrearVehiculoUi;
}

class CrearVehiculoUi : public QWidget
{
    Q_OBJECT

public:
    explicit CrearVehiculoUi(QWidget *parent = nullptr);
    ~CrearVehiculoUi();
    void setLista(ListaVehiculos*);
    string matricula;

public slots:

    void on_pushButton_clicked();

    void on_pushButtonCrearCoche_clicked();

    void on_horizontalSliderMotor_valueChanged(int);

    void on_spinBoxMotor_valueChanged(int);

private slots:

    void on_pushButtonCrearCoche_released();

    void on_spinBoxVagones_valueChanged(int arg1);

    void on_horizontalSliderVagones_valueChanged(int value);

private:
    Ui::CrearVehiculoUi *ui;
    ListaVehiculos *vehiculos;
};

#endif // CREARVEHICULOUI_H
