#include "crearvehiculoui.h"
#include "ui_crearvehiculoui.h"
#include <iostream>


CrearVehiculoUi::CrearVehiculoUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CrearVehiculoUi)
{
    srand(time(NULL));
    for(int i=0;i<4;i++){
        int num=rand()%9;
        matricula.append(to_string(num));
    }

    char c;
    int r;
    for(int i=0;i<3;i++){
        r = rand() % 26;
        c = 'A' + r;

        matricula.push_back(c);
    }


    ui->setupUi(this);
    this->setWindowTitle("Crear vehiculo");
    ui->lineEditMatricula->setText(QString::fromStdString(matricula));
}

CrearVehiculoUi::~CrearVehiculoUi()
{
    delete ui;
}

void CrearVehiculoUi::setLista(ListaVehiculos* lista){
    vehiculos = lista;
    ui->lineEditNombre->clear();
    ui->checkBoxMotor->setChecked(false);
    ui->horizontalSliderMotor->setValue(80);
    ui->checkBoxCombustible->setChecked(false);
    ui->checkBoxAlas->setChecked(false);
    ui->checkBoxTrenAterrizaje->setChecked(false);
    ui->checkBoxReactores->setChecked(false);
    ui->checkBoxLocomotora->setChecked(false);
    ui->horizontalSliderMotor->setValue(0);
}

void CrearVehiculoUi::on_pushButton_clicked(){}


void CrearVehiculoUi::on_pushButtonCrearCoche_clicked()
{
    QString nombre=ui->lineEditNombre->text();
    int ruedas=ui->comboBoxRuedas->itemData(ui->comboBoxRuedas->currentIndex()).toInt();
    bool motor=ui->checkBoxMotor->checkState();
    int potenciaMotor=ui->horizontalSliderMotor->value();
    bool combustible=ui->checkBoxCombustible->checkState();
    QString tipoCombustible=ui->comboBoxCombustible->currentText();
    QString color=ui->comboBoxColor->currentText();
    bool alas=ui->checkBoxAlas->checkState();
    bool reactores=ui->checkBoxReactores->checkState();
    bool trenAterrizaje=ui->checkBoxTrenAterrizaje->checkState();
    bool locomotora=ui->checkBoxLocomotora->checkState();
    int vagones=ui->horizontalSliderVagones->value();
    QString reparacion=ui->comboBoxReparacion->currentText();


    Vehiculo vehiculo(nombre.toStdString(),ruedas,motor,potenciaMotor,combustible,tipoCombustible.toStdString(),color.toStdString(),alas,reactores,trenAterrizaje,locomotora,vagones,reparacion.toStdString(),matricula);
    vehiculos->aniadirVehiculo(vehiculo);
    cout << vehiculo.getNombre() << endl;
}

void CrearVehiculoUi::on_horizontalSliderMotor_valueChanged(int value)
{
    ui->spinBoxMotor->setValue(value);
}

void CrearVehiculoUi::on_spinBoxMotor_valueChanged(int arg1)
{
    ui->horizontalSliderMotor->setValue(arg1);
}


void CrearVehiculoUi::on_pushButtonCrearCoche_released()
{
    close();
}

void CrearVehiculoUi::on_spinBoxVagones_valueChanged(int arg1)
{
    ui->horizontalSliderVagones->setValue(arg1);
}

void CrearVehiculoUi::on_horizontalSliderVagones_valueChanged(int value)
{
    ui->spinBoxVagones->setValue(value);
}
