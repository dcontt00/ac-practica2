#include "crearvehiculoui.h"
#include "ui_crearvehiculoui.h"
#include <iostream>


CrearVehiculoUi::CrearVehiculoUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CrearVehiculoUi)
{
    ui->setupUi(this);
}

CrearVehiculoUi::~CrearVehiculoUi()
{
    delete ui;
}


void CrearVehiculoUi::on_horizontalSlider_valueChanged(int value){}

void CrearVehiculoUi::on_spinBox_valueChanged(int value){}

void CrearVehiculoUi::on_pushButton_clicked(){}


void CrearVehiculoUi::on_pushButtonCrearCoche_clicked()
{
//    QString nombre=ui->lineEditNombre->text();
    int ruedas=ui->comboBoxRuedas->itemData(ui->comboBoxRuedas->currentIndex()).toInt();
//    bool motor=ui->checkBoxMotor->checkState();
//    int potenciaMotor=ui->horizontalSliderMotor->value();
    std::cout<<ruedas;
}

void CrearVehiculoUi::on_horizontalSliderMotor_valueChanged(int value)
{
    ui->spinBoxMotor->setValue(value);
}

void CrearVehiculoUi::on_spinBoxMotor_valueChanged(int arg1)
{
    ui->horizontalSliderMotor->setValue(arg1);
}
