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
    //TODO Comprobar
    ui->NombreText->setText(QString::fromStdString(veh.getNombre()));
    ui->NumRuedasText->setText(QString::fromStdString(veh.getNumRuedas()));
    ui->MotorText->setText(QString::fromStdString(veh.getMotor()));
    ui->PotenciaText->setText(QString::fromStdString(veh.getPotencia()));
    ui->CombText->setText(QString::fromStdString(veh.getCombustible()));
    ui->TipoCombText->setText(QString::fromStdString(veh.getTipoCombustible()));
    ui->ColorText->setText(QString::fromStdString(veh.getColor()));
    ui->AlasText->setText(QString::fromStdString(veh.getAlas()));
    ui->ReactoresText->setText(QString::fromStdString(veh.getReactores()));
    ui->LocomotoraText->setText(QString::fromStdString(veh.getLocomotora()));
    ui->NumVagonesText->setText(QString::fromStdString(veh.getNumVagones()));
    ui->MatriculaText->setText(QString::fromStdString(veh.getMatricula()));
}

void MostrarVehiculoUi::on_pushButton_clicked()
{
    close();
}
