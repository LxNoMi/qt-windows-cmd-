#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setMaximumSize(392,180);
    this->setMinimumSize(392,180);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_submitButton_clicked()
{
    QProcess *myProcess = new QProcess();
    QString startProgram = ui->cmdLineEdit->text();
    myProcess->start(startProgram.trimmed());
}

void MainWindow::on_cmdLineEdit_returnPressed()
{
    QProcess *myProcess = new QProcess();
    QString startProgram = ui->cmdLineEdit->text();
    myProcess->start(startProgram.trimmed());
}
