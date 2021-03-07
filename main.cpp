#include "mainwindow.h"
#include "UI.h"
#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include <QLabel>
#include <QComboBox>
#include <QSlider>
#include <QCheckBox>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UI ui(a); //Crea una interfaz a la que le pasa el objeto QApplication
    return 0;
}
