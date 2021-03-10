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
    ui->NombreText->clear();
    ui->NombreText->setText(QString::fromStdString(veh.getNombre()));
    ui->NumRuedasText->clear();
    ui->NumRuedasText->setText(QString::fromStdString(veh.getNumRuedas()));
    ui->MotorText->clear();
    ui->MotorText->setText(QString::fromStdString(veh.getMotor()));
    ui->PotenciaText->clear();
    ui->PotenciaText->setText(QString::fromStdString(veh.getPotencia()));
    ui->CombText->clear();
    ui->CombText->setText(QString::fromStdString(veh.getCombustible()));
    ui->TipoCombText->clear();
    ui->TipoCombText->setText(QString::fromStdString(veh.getTipoCombustible()));
    ui->ColorText->clear();
    ui->ColorText->setText(QString::fromStdString(veh.getColor()));
    ui->AlasText->clear();
    ui->AlasText->setText(QString::fromStdString(veh.getAlas()));
    ui->ReactoresText->clear();
    ui->ReactoresText->setText(QString::fromStdString(veh.getReactores()));
    ui->LocomotoraText->clear();
    ui->LocomotoraText->setText(QString::fromStdString(veh.getLocomotora()));
    ui->NumVagonesText->clear();
    ui->NumVagonesText->setText(QString::fromStdString(veh.getNumVagones()));
    ui->MatriculaText->clear();
    ui->MatriculaText->setText(QString::fromStdString(veh.getMatricula()));
    ui->lineEditCategoria->clear();
    ui->lineEditCategoria->setText(QString::fromStdString(veh.getTipo()));
}

void MostrarVehiculoUi::on_pushButton_clicked()
{
    close();
}
