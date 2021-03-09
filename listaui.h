#ifndef LISTAUI_H
#define LISTAUI_H

#include <QWidget>
#include "listavehiculos.h"
#include "mostrarvehiculoui.h"

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

private:
    Ui::ListaUi *ui;
    ListaVehiculos vehiculos;
    MostrarVehiculoUi mvui;

};

#endif // LISTAUI_H
