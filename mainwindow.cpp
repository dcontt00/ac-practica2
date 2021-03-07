#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    //Cuando se inicia la ventana se la pasa al metodo setUp del Objeto UI
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

