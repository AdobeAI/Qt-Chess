#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {

    ui->setupUi(this);

    setWindowTitle("Chess");

    ui->graphicsView->setScene(&scene_);
    ui->graphicsView->setFixedSize(850, 850);
    //setFixedSize(500, 500);
}

MainWindow::~MainWindow()
{
    delete ui;
}
