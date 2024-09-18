#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actAbout, &QAction::triggered, this, &MainWindow::on_actAbout_triggered);
}


MainWindow::~MainWindow()
{
    delete ui;
}
