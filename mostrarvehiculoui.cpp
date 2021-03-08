#include "mostrarvehiculoui.h"
#include "ui_mostrarvehiculoui.h"

MostrarVehiculoUi::MostrarVehiculoUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MostrarVehiculoUi)
{
    ui->setupUi(this);
}

MostrarVehiculoUi::~MostrarVehiculoUi()
{
    delete ui;
}
