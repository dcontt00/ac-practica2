#ifndef MOSTRARVEHICULOUI_H
#define MOSTRARVEHICULOUI_H

#include <QWidget>

namespace Ui {
class MostrarVehiculoUi;
}

class MostrarVehiculoUi : public QWidget
{
    Q_OBJECT

public:
    explicit MostrarVehiculoUi(QWidget *parent = nullptr);
    ~MostrarVehiculoUi();

private:
    Ui::MostrarVehiculoUi *ui;
};

#endif // MOSTRARVEHICULOUI_H
