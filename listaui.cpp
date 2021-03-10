#include "listaui.h"
#include "ui_listaui.h"

ListaUi::ListaUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListaUi)
{
    ui->setupUi(this);
    this->setWindowTitle("Lista de vehiculos");
}

ListaUi::~ListaUi()
{
    delete ui;
}


void ListaUi::setLista(ListaVehiculos* lista){
    vehiculos = lista;
    ui->listWidget->clear();
    for(long unsigned int i = 0; i < vehiculos->getLista().size(); i++){
        ui->listWidget->addItem(QString::fromStdString(vehiculos->getLista().at(i).getNombre()));
    }
}

void ListaUi::on_listWidget_itemClicked(QListWidgetItem *item)
{
     //TODO: Asignar para cada item que se abra una ventana mostrarVehiculo del vehiculo
    mostrarVehiculo.setVehiculo(vehiculos->getLista().at(ui->listWidget->selectedItems().indexOf(&(*item))));
    mostrarVehiculo.show();
}
