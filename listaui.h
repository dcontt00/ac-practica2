#ifndef LISTAUI_H
#define LISTAUI_H

#include <QWidget>
#include "listavehiculos.h"
#include "mostrarvehiculoui.h"
#include <qlistwidget.h>
#include <QListWidgetItem>
#include <iostream>
using namespace std;
namespace Ui {
class ListaUi;
}

class ListaUi : public QWidget
{
    Q_OBJECT

public:
    explicit ListaUi(QWidget *parent = nullptr);
    ~ListaUi();
    void setLista(ListaVehiculos&);
    MostrarVehiculoUi mostrarVehiculo;

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::ListaUi *ui;
    ListaVehiculos vehiculos;
    MostrarVehiculoUi mvui;

};

#endif // LISTAUI_H
