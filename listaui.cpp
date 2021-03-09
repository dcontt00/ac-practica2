#include "listaui.h"
#include "ui_listaui.h"

ListaUi::ListaUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListaUi)
{
    ui->setupUi(this);

    //TODO: Añadir los nombres de los vehiculos de la lista como items en listWidget
    ui->listWidget->addItem("uwu");
}

ListaUi::~ListaUi()
{
    delete ui;
}


void ListaUi::setLista(ListaVehiculos& lista){
    vehiculos = lista;
}

void ListaUi::on_listWidget_itemClicked(QListWidgetItem *item)
{
       //TODO: Asignar para cada item que se abra una ventana mostrarVehiculo del vehiculo

    //mostrarVehiculo->setVehiculo();
    mostrarVehiculo.show();
}
