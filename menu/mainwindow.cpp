#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_message1_triggered()
{
    ui->lineEdit->setText("Верхняя кнопка");
}


void MainWindow::on_message2_triggered()
{
    ui->lineEdit->setText("Средняя кнопка");
}


void MainWindow::on_message3_triggered()
{
    ui->lineEdit->setText("Нижняя кнопка");
}

