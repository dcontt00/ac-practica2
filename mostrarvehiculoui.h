#ifndef MOSTRARVEHICULOUI_H
#define MOSTRARVEHICULOUI_H

#include <QWidget>
#include "Vehiculo.h"

namespace Ui {
class MostrarVehiculoUi;
}

class MostrarVehiculoUi : public QWidget
{
    Q_OBJECT

public:
    explicit MostrarVehiculoUi(QWidget *parent = nullptr);
    ~MostrarVehiculoUi();
    void setVehiculo(Vehiculo&);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MostrarVehiculoUi *ui;
};

#endif // MOSTRARVEHICULOUI_H
