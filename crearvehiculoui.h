#ifndef CREARVEHICULOUI_H
#define CREARVEHICULOUI_H

#include <QWidget>
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

private slots:
    void on_horizontalSlider_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButtonCrearCoche_clicked();

    void on_horizontalSliderMotor_valueChanged(int value);

    void on_spinBoxMotor_valueChanged(int arg1);

private:
    Ui::CrearVehiculoUi *ui;
};

#endif // CREARVEHICULOUI_H
