#include "listaui.h"
#include "ui_listaui.h"

ListaUi::ListaUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListaUi)
{
    ui->setupUi(this);
    ui->listWidget->addItem("uwu");
}

ListaUi::~ListaUi()
{
    delete ui;
}
