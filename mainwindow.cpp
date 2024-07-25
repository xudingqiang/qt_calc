#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QIcon con("D:\\code\\qt\\qt_calc\\back.png");
    ui->backButton->setIcon(con);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_oneButton_clicked()
{
    expression += "1";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_twoButton_clicked()
{
    expression += "2";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_threeButton_clicked()
{
    expression += "3";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_fourBtton_clicked()
{
    expression += "4";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_fiveButton_clicked()
{
    expression += "5";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_sixButton_clicked()
{
    expression += "6";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_sevenButton_clicked()
{
    expression += "7";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_eightButton_clicked()
{
    expression += "8";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_nineButton_clicked()
{
    expression += "9";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_zeroButton_clicked()
{
    expression += "0";
    ui->lineEdit ->setText(expression);
}


void MainWindow::on_cleanButton_clicked()
{
    expression.clear();
    ui->lineEdit->clear();
}


void MainWindow::on_addButton_clicked()
{

}


void MainWindow::on_subButton_clicked()
{

}


void MainWindow::on_mulButton_clicked()
{

}


void MainWindow::on_divButton_clicked()
{

}


void MainWindow::on_resultButton_clicked()
{

}


void MainWindow::on_backButton_clicked()
{
    expression.chop(1);
    ui->lineEdit ->setText(expression);
}

