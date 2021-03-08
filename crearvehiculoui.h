#ifndef CREARVEHICULOUI_H
#define CREARVEHICULOUI_H

#include <QWidget>
#include <QObject>
#include <iostream>
#include <string>

namespace Ui {
class CrearVehiculoUi;
}

class CrearVehiculoUi : public QWidget
{
    Q_OBJECT

public:
    explicit CrearVehiculoUi(QWidget *parent = nullptr);
    ~CrearVehiculoUi();

public slots:
    void on_horizontalSlider_valueChanged(int);

    void on_spinBox_valueChanged(int);

    void on_pushButton_clicked();

    void on_pushButtonCrearCoche_clicked();

    void on_horizontalSliderMotor_valueChanged(int);

    void on_spinBoxMotor_valueChanged(int);

private:
    Ui::CrearVehiculoUi *ui;
};

#endif // CREARVEHICULOUI_H
