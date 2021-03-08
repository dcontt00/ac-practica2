#ifndef LISTAUI_H
#define LISTAUI_H

#include <QWidget>

namespace Ui {
class ListaUi;
}

class ListaUi : public QWidget
{
    Q_OBJECT

public:
    explicit ListaUi(QWidget *parent = nullptr);
    ~ListaUi();

private:
    Ui::ListaUi *ui;
};

#endif // LISTAUI_H
