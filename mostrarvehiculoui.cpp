#include "mostrarvehiculoui.h"
#include "ui_mostrarvehiculoui.h"

MostrarVehiculoUi::MostrarVehiculoUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MostrarVehiculoUi)
{

    ui->setupUi(this);
    this->setWindowTitle("Mostrar vehiculo");
}

MostrarVehiculoUi::~MostrarVehiculoUi()
{
    delete ui;
}

void MostrarVehiculoUi::setVehiculo(Vehiculo& veh){
    //TODO
}

void MostrarVehiculoUi::on_pushButton_clicked()
{
    close();
}
