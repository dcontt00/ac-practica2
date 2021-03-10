#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    this->setWindowTitle("Vehiculos");
}
MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    cui.setLista(&vehiculos);
    cui.show();
}

void MainWindow::on_pushButton_2_clicked()
{

    lui.setLista(&vehiculos);
    lui.show();
}

void MainWindow::on_pushButton_3_clicked()
{
    exit(0);
}
