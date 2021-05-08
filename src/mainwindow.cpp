// Copyright (c) 2018 Jonas Schnelli
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "mainwindow.h"
#include "forms/ui_mainwindow.h"

MainWindow::MainWindow(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
