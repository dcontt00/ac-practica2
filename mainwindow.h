#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include <QLabel>
#include <QComboBox>
#include <QSlider>
#include <QProgressBar>
#include <QCheckBox>
#include <QSizePolicy>
#include <QApplication>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QPushButton boton1;
    QPushButton boton2;
    QPushButton boton3;
    QWidget ventanaPrincipal;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
