#include "crearvehiculoui.h"
#include "ui_crearvehiculoui.h"

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

void CrearVehiculoUi::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
}

void CrearVehiculoUi::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
}
